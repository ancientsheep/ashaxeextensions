#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#include <GANTracker.h>

//using namespace nme;

//void uncaughtExceptionHandler(NSException *exception);

namespace ganalytics
{
	//GA
	void setDebugMode(int deb)
	{
		NSLog(@"ganalytics :: setDebugMode ");

		/**
		Playing around with web views here
		*/

		/*UIWindow* window = [UIApplication sharedApplication].keyWindow;

		UIWebView		*webView = [[UIWebView alloc]init];

		[webView loadRequest: [NSURLRequest requestWithURL: [NSURL URLWithString: @"http://www.mourlamstudios.com"]]];
		webView.frame = CGRectMake(0,0,300,300);

		[window addSubview: webView];*/


		//Turn off debug mode
		//if(deb == 0)
		//	[GANTracker sharedTracker].debug = true;
		//Turn on debug mode
		//else
		//	[[GANTracker sharedTracker] setDebug: true];
	}

	void setCustomVar(int index,const char*name,const char *value)
	{
		NSString 	*namer = [[NSString alloc] initWithUTF8String:name];
		NSString 	*valuer = [[NSString alloc] initWithUTF8String:value];
		NSError		*error = nil;


		// Set custom variables
		if (![[GANTracker sharedTracker] setCustomVariableAtIndex:index name:namer value:valuer withError:&error])
		{
			// Handle error here
			NSLog(@"** ERROR : ganalytics :: setCustomVar");
		}

		else
		{
			NSLog(@"ganalytics :: setCustomVar... SUCCESS");
		}
	}

	void startTracker(const char *accountID,int dispatchPeriod)
	{
		NSString 	*account = [[NSString alloc] initWithUTF8String:accountID];

		NSLog(@"ganalytics :: startTracker");
		[[GANTracker sharedTracker] startTrackerWithAccountID:account
	                                           dispatchPeriod:dispatchPeriod
	                                               	 delegate:nil];

		[account release];

	}

	void trackPageView(const char *pageName)
	{
		NSLog(@"ganalytics :: trackPageView");

		NSString *page = [[NSString alloc] initWithUTF8String:pageName];
		NSError *error;
		if (![[GANTracker sharedTracker] trackPageview:page
		                                   withError:&error])
			NSLog (@"... FAILED");

		else
			NSLog(@"... SUCCESS");

		
		/** FIX **/
		//Shouldn't be necessary
	  	[[GANTracker sharedTracker] dispatch];
	}

	void trackEvent(const char *category,const char *action,const char *label,int value){
		NSString *cate = [[NSString alloc] initWithUTF8String:category];
		NSString *act = [[NSString alloc] initWithUTF8String:action];
		NSString *lab = [[NSString alloc] initWithUTF8String:label];
		NSError *error;
		if (![[GANTracker sharedTracker] trackEvent:cate
		                                       action:act
		                                        label:lab
		                                        value:value
		                                    withError:&error])
			NSLog (@"trackEvent ERROR");

		else
			NSLog(@"... SUCCESS");
	}

	void dispatchTracker(){
		NSLog(@"dispatchTracker");
		[[GANTracker sharedTracker] dispatch];
	}

	void stopTracker(){
		NSLog(@"stopTracker");
		[[GANTracker sharedTracker] stopTracker];
	}

	void setupGACrashReporting()
	{
		//NSSetUncaughtExceptionHandler(&uncaughtExceptionHandler);
	}

	/*void uncaughtExceptionHandler(NSException *exception)
	{
		NSLog(@"Unhandled Exception");

		NSError *error;
		[[GANTracker sharedTracker] trackEvent:@"Unhandled Exception (Crash)"
		                                       action:exception.name
		                                        label:exception.reason
		                                        value:0
		                                    withError:&error];

		//Dispatch now
		[[GANTracker sharedTracker] dispatch];
	}*/

	/**
	Keep for reference from Hxgk
	*/
	
	/** Listen for Authentication Callback */
	/*void registerForAuthenticationNotification()
	{
		// TODO: need to REMOVE OBSERVER on dispose
		CFNotificationCenterAddObserver
		(
			CFNotificationCenterGetLocalCenter(),
			NULL,
			&authenticationChanged,
			(CFStringRef)GKPlayerAuthenticationDidChangeNotificationName,
			NULL,
			CFNotificationSuspensionBehaviorDeliverImmediately
		 );
	}*/
	
	/** Notify haXe of an Event */
	/*void dispatchHaxeEvent(int eventId)
	{
		hxgk_send_event(eventId);
	}*/
}
