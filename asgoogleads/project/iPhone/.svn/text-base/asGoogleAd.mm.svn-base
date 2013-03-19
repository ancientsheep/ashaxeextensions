#import <UIKit/UIKit.h>
#include "asGoogleAd.h"
#import "GADBannerView.h"

typedef void (*FunctionType)();

@interface GADBannerDelegate : NSObject <GADBannerViewDelegate>  
{
}

@property (nonatomic) FunctionType onAdView;
@property (nonatomic) FunctionType onAdViewEnded;

@end

@implementation GADBannerDelegate

@synthesize onAdView;
@synthesize onAdViewEnded;

-(id)init
{
	NSLog(@"GAdBanner init");
	self = [super init];

	return self;
}

- (void)dealloc
{
	NSLog(@"GAdBanner dealloc");
  	[super dealloc];
}

- (void)adViewWillPresentScreen:(GADBannerView *)bannerView
{
	NSLog(@"adViewWillPresentScreen");
	//[super adViewWillPresentScreen: bannerView];

	id rootView = [[UIApplication sharedApplication] keyWindow].rootViewController;
	//[rootView viewActivate: FALSE];

	//[[[UIApplication sharedApplication] delegate] pauseAnimation];

	//Pause game
	onAdView();

}

- (void)adViewDidDismissScreen:(GADBannerView *)bannerView
{
	NSLog(@"adViewDidDismissScreen");
	//[super adViewWillPresentScreen: bannerView];
	id rootView = [[UIApplication sharedApplication] keyWindow].rootViewController;
	//[rootView viewActivate: TRUE];
	//[[[UIApplication sharedApplication] delegate] pauseAnimation];

	onAdViewEnded();
}

- (void)adViewWillDismissScreen:(GADBannerView *)bannerView
{
	NSLog(@"adViewWillDismissScreen");
	//[super adViewWillPresentScreen: bannerView];
	id rootView = [[UIApplication sharedApplication] keyWindow].rootViewController;
	//[rootView viewActivate: TRUE];

	//[[[UIApplication sharedApplication] delegate] startAnimation];
}

- (void)adViewWillLeaveApplication:(GADBannerView *)bannerView
{
	NSLog(@"adViewWillLeaveApplication");
	//[super adViewWillPresentScreen: bannerView];
}

@end


namespace asgoogleads
{	

	/** Event IDs ****/
	const int ASGADS_PAUSE=1;
	const int ASGADS_RESUME=2;


	void InitAd(const char *ID,int x, int y);
	void RefreshAd();
	void ShowAd(const char *ID,int x, int y, int sizeType);
	void onAdView();
	void onAdViewEnded();
	void dispatchHXEvent(int eventId);
	extern "C" void asgoogleads_send_event(int eventId);

    GADBannerView 				*bannerView_;
    GADBannerDelegate 			*bannerDelegate;
    BOOL						adShowing;
    //UIView 					*adUIView;
    
    void InitAd(const char *ID,int x, int y)
    {
    	NSString *GADID = [[NSString alloc] initWithUTF8String:ID];

    	NSLog(@"asgoogleads :: InitAd - %@",GADID);

    	//Create our delegate 
		bannerDelegate = [[GADBannerDelegate alloc]init];
		bannerDelegate.onAdView = &onAdView;
		bannerDelegate.onAdViewEnded = &onAdViewEnded;
		
		bannerView_ = [[GADBannerView alloc] initWithAdSize:kGADAdSizeBanner origin: CGPointMake(x,y)];
		bannerView_.adUnitID = GADID;
		bannerView_.rootViewController = [[[UIApplication sharedApplication] keyWindow] rootViewController];
		bannerView_.delegate = bannerDelegate;

		[GADID release];
    }

    void RefreshAd()
    {
    	NSLog(@"asgoogleads :: RefreshAd");
    	GADRequest 		*request = [GADRequest request];

		//request.testing = true;

		[bannerView_ loadRequest: request];
    }


    void ShowAd(const char *ID,int x, int y, int sizeType=0)
    {	
		NSLog(@"asgoogleads :: ShowAd - x %i - y - %i",x,y);

		if(bannerDelegate==nil)
			InitAd(ID,x,y);

		RefreshAd();
		
		[[[[UIApplication sharedApplication] keyWindow] rootViewController].view addSubview: bannerView_];

		adShowing = true;
		
    }

    void HideAd()
    {
    	NSLog(@"asgoogleads :: HideAd");

    	if(adShowing==true)
    		[bannerView_ removeFromSuperview];

    	adShowing = false;
    	//[adUIView removeFromSuperview];
    }

    void onAdView()
    {
    	NSLog(@"onAdView");
    	dispatchHXEvent(ASGADS_PAUSE);
    }

    void onAdViewEnded()
    {
    	NSLog(@"onAdView");
    	dispatchHXEvent(ASGADS_RESUME);
    }

    /** Notify hx **/
	void dispatchHXEvent(int eventId)
	{
		asgoogleads_send_event(eventId);
	}
}
