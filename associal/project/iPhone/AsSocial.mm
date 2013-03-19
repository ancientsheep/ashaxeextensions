#import <UIKit/UIKit.h>
#import <CoreFoundation/CoreFoundation.h>
#include <ctype.h>
#include <objc/runtime.h>

namespace associal 
{	
	void socialShare(const char *title,const char *url);

	void socialShare(const char *title,const char *url)
	{
		NSString *nstitle = [[NSString alloc] initWithUTF8String:title];
        NSString *nsurl = [[NSString alloc] initWithUTF8String:url];

		NSLog(@"AsSocial : socialShare");

		//get app window and root view
		UIWindow* window = [UIApplication sharedApplication].keyWindow;
		id rootView = [[UIApplication sharedApplication] keyWindow].rootViewController;

		NSString *text = nstitle;
	    UIImage *image = [UIImage imageNamed:@"test.png"];
	    NSURL *urlToShare = [NSURL URLWithString:nsurl];
	    NSArray *activityItems = [NSArray arrayWithObjects:text,image,urlToShare, nil];
	    
	    UIActivityViewController *avc = [[UIActivityViewController alloc]
	                                     initWithActivityItems: activityItems applicationActivities:nil];
	    [rootView presentViewController:avc animated:YES completion:nil];
	}
}



