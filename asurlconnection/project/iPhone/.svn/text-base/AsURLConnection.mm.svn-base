#import <UIKit/UIKit.h>
#import <CoreFoundation/CoreFoundation.h>
#include <ctype.h>
#include <objc/runtime.h>
#include "Events.h"

typedef void (*FunctionType)();
extern "C" void asurlconnection_send_event(Event &inEvent);

@interface AsURLConnection : NSObject
{
    NSURLConnection *connection;
    NSMutableData *recdata;
}

-(void) connectTo:(NSString*) url;

@property (copy) NSMutableData 		*recdata;
@property (nonatomic) FunctionType onCompleted;
@property (nonatomic) FunctionType onFailed;

@end

@implementation AsURLConnection

@synthesize onCompleted;
@synthesize onFailed;
@synthesize recdata;

-(void) connectTo:(NSString*) url
{
    NSLog(@"AsURLConnection : connectTo - %@",url);

    if(recdata!=NULL)
    {
        NSLog(@"AsURLConnection : connectTo - data existed - destroying");
        [recdata release];
        recdata = NULL;
    }
    
    if(connection)
    {
    	NSLog(@"destroying connection");
        [connection cancel];
        [connection release];
        connection = NULL;
    }
    connection = [[NSURLConnection alloc] initWithRequest: [NSURLRequest requestWithURL: [NSURL URLWithString:url]] delegate: self startImmediately: YES];

    if(connection)
        recdata = [[NSMutableData data] retain];
}

-(void) connection:(NSURLConnection *)connection didReceiveData:(NSData *)mdata {
   	NSLog(@"didReceiveData");

    [recdata appendData: mdata];
}

-(void) connectionDidFinishLoading:(NSURLConnection *)connection {
	NSLog(@"connectionDidFinishLoading");
    NSLog(@"Finished loading %d bytes.", [recdata length]);
    NSString *printer = [[NSString alloc] initWithData:recdata encoding:NSASCIIStringEncoding];
    NSLog(@"return data = %@",printer);
    [printer release];
    onCompleted();
}

-(void) connection:(NSURLConnection *)connection didFailWithError:(NSError *)error {
    NSLog(@"didFailWithError");
    onFailed();
}

- (void)dealloc {
    NSLog(@"AsURLConnection : dealloc");
    
    [recdata release];
    [connection release];
    [super dealloc];
}

@end

namespace asurlconnection 
{	
	AsURLConnection			*connection;
	void connectToURL(const char *url);
	void connectionFinished();
	void connectionFailed();

	//custom implementations of empty signatures above
	void connectToURL(const char *url)
	{
		NSLog(@"AsURLConnection : connectToURL");

		NSString *newURL = [[NSString alloc] initWithUTF8String:url];
		//NSLog("AsURLConnection : connectToURL - %@",newURL);

		if(connection!=NULL)
		{
			[connection release];
			connection = NULL;
		}

		//create connection
		connection = [[AsURLConnection alloc]init];
		//setup delegate methods
		connection.onCompleted = &connectionFinished;
 		connection.onFailed = &connectionFailed;
		[connection connectTo: newURL];
	}

	/** Callback when connection finishes */
	void connectionFinished()
	{
		NSLog(@"CPP AsURLConnection: connectionFinished()\n");

		//dispatch our event
		Event evt(etCONNECTION_SUCCESS);
		evt.data = "etCONNECTION_SUCCESS";

		//first convert data to nsstring
		NSString *printer = [[NSString alloc] initWithData:connection.recdata encoding:NSASCIIStringEncoding];
		evt.returnData = [printer cStringUsingEncoding:NSASCIIStringEncoding];

		asurlconnection_send_event(evt);
		[printer release];
		//[newData release];
	}
	
	/** Callback when connection fails */
	void connectionFailed()
	{
		NSLog(@"CPP AsURLConnection: leaderBoardViewDismissed()\n");
		//dispatch our event
		Event evt(etCONNECTION_FAILED);
		evt.data = "etCONNECTION_FAILED";
		evt.returnData = "";

		asurlconnection_send_event(evt);
	}

	void destroy_all()
	{
		printf("AsURLConnection: destroy_all");

		[connection release];
		connection = nil;
	}
}



