#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#import <iRate.h>

namespace asrate
{
	void rate_app(const char *linkshare)
	{
		NSString *linkshareString = [[NSString alloc] initWithUTF8String:linkshare];
		NSLog(@"AppRater :: rate_app - %@",linkshareString);

		[iRate sharedInstance].linkshareURL = linkshareString;

		//Normal mode
		if([[iRate sharedInstance] shouldPromptForRating])
	        [[iRate sharedInstance] promptForRating];
	}

	void alerter(const char *title,const char *message)
	{
		NSString *titleStr = [[NSString alloc] initWithUTF8String:title];
		NSString *messageStr = [[NSString alloc] initWithUTF8String:message];


		NSLog(@"AppRater :: alerter - %@ - %@",titleStr,messageStr);

		UIAlertView *alert = [[UIAlertView alloc] initWithTitle: titleStr
                                                      message: messageStr
                                                     delegate:nil
                                            cancelButtonTitle:@"OK"
                                            otherButtonTitles:nil];
     
    	[alert show];
    	[alert release];
	}

	//Debug mode - show rating
	void debug_show_rating()
	{
		[[iRate sharedInstance] promptForRating];
	}
}
