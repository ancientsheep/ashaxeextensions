#import <UIKit/UIKit.h>
#import <CoreFoundation/CoreFoundation.h>
#include <ctype.h>
#include <objc/runtime.h>
#include "Events.h"

typedef void (*FunctionType)();
extern "C" void aspush_send_event(Event &inEvent);

@interface PushAppDelegate : UIResponder <UIApplicationDelegate>
{

}

@end

@implementation PushAppDelegate

@end

namespace aspush 
{	
	PushAppDelegate			*pushDelegate;

	void registerForRemote();
	void didRegisterForRemoteNotificationsWithDeviceToken(id self, SEL _cmd, UIApplication* application, NSData* deviceToken);
	 void didFailToRegisterForRemoteNotificationsWithError(id self, SEL _cmd, UIApplication* application, NSError* error);


	//custom implementations of empty signatures above
	void didRegisterForRemoteNotificationsWithDeviceToken(id self, SEL _cmd, UIApplication* application, NSData* deviceToken)
	{
		NSString *devToken = [[[[deviceToken description]
                            stringByReplacingOccurrencesOfString:@"<"withString:@""]
                           stringByReplacingOccurrencesOfString:@">" withString:@""]
                          stringByReplacingOccurrencesOfString: @" " withString: @""];

		//dispatch our event
		Event evt(etREGISTER_TOKEN_SUCCESS);
		evt.data = "etREGISTER_TOKEN_SUCCESS";
		evt.token = [devToken cStringUsingEncoding:NSASCIIStringEncoding];
		aspush_send_event(evt);

		NSLog(@"AsPush : Did register with device token: %@",devToken);
	}


	void didFailToRegisterForRemoteNotificationsWithError(id self, SEL _cmd, UIApplication* application, NSError* error)
	{
		NSLog(@"AsPush : Failed to register device - %@", [error description]);

		//dispatch our event
		Event evt(etREGISTER_TOKEN_FAILED);
		evt.data = "etREGISTER_TOKEN_FAILED";
		evt.token = "FAILED";
		aspush_send_event(evt);
	}
	
	void registerForRemote()
	{
		NSLog(@"AsPush :: registering app for remote notifications.");

		//Code below found on stack overflow. Fantastic find.

		id delegate = [[UIApplication sharedApplication] delegate];

		Class objectClass = object_getClass(delegate);

		NSString *newClassName = [NSString stringWithFormat:@"Custom_%@", NSStringFromClass(objectClass)];
		Class modDelegate = NSClassFromString(newClassName);
		if (modDelegate == nil)
		{
		    // this class doesn't exist; create it
		    // allocate a new class
		    modDelegate = objc_allocateClassPair(objectClass, [newClassName UTF8String], 0);

		    SEL selectorToOverride1 = @selector(application:didRegisterForRemoteNotificationsWithDeviceToken:);
		    SEL selectorToOverride2 = @selector(application:didFailToRegisterForRemoteNotificationsWithError:);

		    // get the info on the method we're going to override
		    Method m1 = class_getInstanceMethod([PushAppDelegate class], selectorToOverride1);
		    Method m2 = class_getInstanceMethod([PushAppDelegate class], selectorToOverride2);

		    // add the method to the new class
		    class_addMethod(modDelegate, selectorToOverride1, (IMP)didRegisterForRemoteNotificationsWithDeviceToken, method_getTypeEncoding(m1));

		    class_addMethod(modDelegate, selectorToOverride2, (IMP)didFailToRegisterForRemoteNotificationsWithError, method_getTypeEncoding(m2));

		    // register the new class with the runtime
		    objc_registerClassPair(modDelegate);
		}
		// change the class of the object
		object_setClass(delegate, modDelegate);

		//Register this app for remote notifications
    	[[UIApplication sharedApplication] registerForRemoteNotificationTypes: UIRemoteNotificationTypeAlert | UIRemoteNotificationTypeSound | UIRemoteNotificationTypeBadge];
	}

	void scheduleLocalPush()
	{
		NSLog(@"AsPush : obj_c scheduleLocalPush");
	}

	void setAppBadge(int num)
	{
		NSLog(@"AsPush : setAppBadge - %i",num);

		[[UIApplication sharedApplication] setApplicationIconBadgeNumber:num];
	}
}



