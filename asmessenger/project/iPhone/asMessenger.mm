#import <CoreFoundation/CoreFoundation.h>
#import <UIKit/UIKit.h>
#import <MessageUI/MFMailComposeViewController.h>

typedef void (*FunctionType)();

@interface AsMessagerDelegate : NSObject <MFMailComposeViewControllerDelegate>  
{
}

-(void) displayAlert:(NSString*)sub message:(NSString*) mess;

@end

@implementation AsMessagerDelegate


-(id)init
{
    NSLog(@"AsMessagerDelegate init");
    self = [super init];

    return self;
}

- (void)dealloc
{
    NSLog(@"AsMessagerDelegate dealloc");
    [super dealloc];
}

-(void) displayAlert:(NSString*)sub message:(NSString*) mess
{
   

    NSLog(@"displayAlert - %@ - %@",sub,mess);

    

    UIAlertView *alert = [[[UIAlertView alloc] initWithTitle:sub message:mess
                                                           delegate:nil cancelButtonTitle:@"OK" otherButtonTitles: nil]autorelease];
            
    [alert show];
}

-(void)mailComposeController:(MFMailComposeViewController *)controller didFinishWithResult:(MFMailComposeResult)result error:(NSError *)error
{
    UIAlertView         *alert;
    
    switch(result)
    {
        case MFMailComposeResultFailed:
            alert = [[[UIAlertView alloc] initWithTitle:@"Send Message" message:@"Error sending email. Please try again." delegate:nil cancelButtonTitle:@"Close" otherButtonTitles: nil]autorelease];
            [alert show];
            break;
            
        case MFMailComposeResultSent:
            alert = [[[UIAlertView alloc] initWithTitle:@"Send Message" message:@"Your message has been sent!" delegate:nil cancelButtonTitle:@"Close" otherButtonTitles: nil]autorelease];
            [alert show];
           
            
            break;
    }
    
    [[[[UIApplication sharedApplication] keyWindow] rootViewController] dismissModalViewControllerAnimated: YES];
    
    //NSAutoreleasePool *p = [[NSAutoreleasePool alloc] init];
    //[p drain];
}

@end

namespace asmessenger
{	
    extern "C" void asmessenger_send_event(int eventId);

    static AsMessagerDelegate           *messengerDelegate = nil;
    
    void email_her(const char *subject,const char *message)
    {
    	NSString *subj = [[NSString alloc] initWithUTF8String:subject];
    	NSString *mess = [[NSString alloc] initWithUTF8String:message];

    	NSLog(@"asmessenger :: SendEmail - %@ - %@",subj,mess);

        if([MFMailComposeViewController canSendMail])
        {
            //NSAutoreleasePool *p = [[NSAutoreleasePool alloc] init];
            
            //UIImage               *imager = [[UIImage alloc] initWithContentsOfFile: [[NSBundle mainBundle] pathForResource: @"Email-Standard" ofType:@"jpg"]];
            //NSData                *attachmentData = UIImageJPEGRepresentation(imager,.5);
            
            if(messengerDelegate==nil)
            {
                messengerDelegate = [[AsMessagerDelegate alloc]init];
            }

            MFMailComposeViewController             *mc = [[MFMailComposeViewController alloc] init];
            
            mc.mailComposeDelegate = messengerDelegate;
            
            [mc setSubject: subj];
            
            //[mc addAttachmentData:UIImagePNGRepresentation([self captureView])  mimeType:@"image/png" fileName:@"My MASH Story"];
            //message = story.htmlStory;
            
            
            [mc setMessageBody: mess isHTML: YES];
            //[mc addAttachmentData: attachmentData mimeType:@"image/jpeg" fileName:@"GiggleBuddies"];
            
            [[[[UIApplication sharedApplication] keyWindow] rootViewController] presentModalViewController: mc animated:YES];
            //[imager release];
            [mc release];
            //[message release];
            
            //[p drain];
        }
        
        else 
        {
           NSLog(@"Email not setup alert");

/*           if(messengerDelegate==nil)
            {
                messengerDelegate = [[AsMessagerDelegate alloc]init];
            }

            [messengerDelegate displayAlert: @"Whoops" message: @"This device is not setup to send emails."];
*/
        }
    	
    }

    void email_her_attachment(const char *subject,const char *message,int *data,int width, int height)
    {
        NSString *subj = [[NSString alloc] initWithUTF8String:subject];
        NSString *mess = [[NSString alloc] initWithUTF8String:message];

        NSLog(@"email_her_attachment :: SendEmail - %@ - %@ - %i - %i",subj,mess,width,height);

        if([MFMailComposeViewController canSendMail])
        {

            //Create image
            CGColorSpaceRef colorSpace=CGColorSpaceCreateDeviceRGB();

            CGContextRef    bitmapContext = CGBitmapContextCreate(data,width,height,8,4*width,colorSpace,kCGImageAlphaPremultipliedFirst | kCGBitmapByteOrder32Little);
            CFRelease(colorSpace);

            CGImageRef       cgImage = CGBitmapContextCreateImage(bitmapContext);
            CGContextRelease(bitmapContext);



            //NSAutoreleasePool *p = [[NSAutoreleasePool alloc] init];
            UIImage               *imager = [UIImage imageWithCGImage:cgImage];
            CGImageRelease(cgImage);
            NSData                *attachmentData = UIImageJPEGRepresentation(imager,.5);
            
            if(messengerDelegate==nil)
            {
                messengerDelegate = [[AsMessagerDelegate alloc]init];
            }

            MFMailComposeViewController             *mc = [[MFMailComposeViewController alloc] init];
            
            mc.mailComposeDelegate = messengerDelegate;
            
            [mc setSubject: subj];
            
            [mc addAttachmentData: attachmentData mimeType:@"image/jpeg" fileName:@"Image Attachment"];
            //message = story.htmlStory;
            
            
            [mc setMessageBody: mess isHTML: YES];
            //[mc addAttachmentData: attachmentData mimeType:@"image/jpeg" fileName:@"GiggleBuddies"];
            
            [[[[UIApplication sharedApplication] keyWindow] rootViewController] presentModalViewController: mc animated:YES];
            //[imager release];
            [mc release];
            //[message release];
            
            //[p drain];
        }
        
        else 
        {
            NSLog(@"Email not setup alert");

 /*           if(messengerDelegate==nil)
            {
                messengerDelegate = [[AsMessagerDelegate alloc]init];
            }

            [messengerDelegate displayAlert: @"Whoops" message: @"This device is not setup to send emails."];
*/        }
    }

    /** Notify hx **/
	void dispatchHXEvent(int eventId)
	{
		asmessenger_send_event(eventId);
	}

    bool getLanguage() {
            NSArray *languageArray = [NSLocale preferredLanguages];
            NSString *language = [languageArray objectAtIndex:0];
            NSLog(@"language - %@",language);
            if([language isEqualToString: @"en"]) return true;
            return false;
    }

    bool canSendMail() {

        return [MFMailComposeViewController canSendMail];
    }
}
