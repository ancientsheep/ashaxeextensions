//  InAppPurchase.m
//
//  Created by Yann on 11-2-23.
//  Copyright 2011 mybogame. All rights reserved.
 
#import <CoreFoundation/CoreFoundation.h>
#import <UIKit/UIKit.h>
#import <StoreKit/StoreKit.h> 
#include "asIAP.h"
#include "Events.h"

extern "C" void iap_send_event(Event &inEvent);

@interface InAppPurchase: NSObject <SKProductsRequestDelegate, SKPaymentTransactionObserver>{
    SKProduct *myProduct;
    SKProductsRequest *productsRequest;
	NSString *productID;
}

- (void)initInAppPurchase;
- (BOOL)canMakePurchases;
- (void)purchaseProduct:(NSString *) ProductIdentifiers;
-(void) restoreProducts;

@end



@implementation InAppPurchase


- (void)initInAppPurchase {
	[[SKPaymentQueue defaultQueue] addTransactionObserver:self];
}

- (BOOL)canMakePurchases{
    return [SKPaymentQueue canMakePayments];
} 

- (void)purchaseProduct:(NSString *) ProductIdentifiers{
	productID = ProductIdentifiers;
	productsRequest = [[SKProductsRequest alloc] initWithProductIdentifiers:[NSSet setWithObject:productID]];
	productsRequest.delegate = self;
	[productsRequest start];
} 

-(void) restoreProducts
{
	NSLog(@"restoreProducts");
	[[SKPaymentQueue defaultQueue] restoreCompletedTransactions];
}

- (void) paymentQueueRestoreCompletedTransactionsFinished:(SKPaymentQueue *)queue
{
	NSLog(@"paymentQueueRestoreCompletedTransactionsFinished");

	Event evt(etIN_APP_PURCHASE_RESTORE_SUCCESS);
	evt.data = "etIN_APP_PURCHASE_RESTORE_SUCCESS!";
	iap_send_event(evt);
}

- (void) paymentQueue:(SKPaymentQueue *)queue restoreCompletedTransactionsFailedWithError:(NSError *)error
{
	NSLog(@"restoreCompletedTransactionsFailedWithError");

	Event evt(etIN_APP_PURCHASE_RESTORE_FAIL);
	evt.data = "etIN_APP_PURCHASE_RESTORE_FAILED!";
	iap_send_event(evt);

	//Display success alert
	UIAlertView *message = [[[UIAlertView alloc] initWithTitle:@"Restore Failed"
                                                  message:[error localizedDescription]
                                                 delegate:nil
                                        cancelButtonTitle:@"OK"
                                        otherButtonTitles:nil] autorelease];

	[message show];
}


- (void)productsRequest:(SKProductsRequest *)request didReceiveResponse:(SKProductsResponse *)response{
   	
	int count = [response.products count];
    
	NSLog(@"the count is %i",count);

	if (count > 0) {
		myProduct = [response.products objectAtIndex:0];
		//buy it
		SKMutablePayment *payment = [[[SKMutablePayment alloc] init] autorelease];
		payment.productIdentifier = productID;
		payment.quantity = 1;
		[[SKPaymentQueue defaultQueue] addPayment:payment];
	} else {
		NSLog(@"No products available");
	}
    
    [productsRequest release];
}
- (void)finishTransaction:(SKPaymentTransaction *)transaction wasSuccessful:(BOOL)wasSuccessful{
    [[SKPaymentQueue defaultQueue] finishTransaction:transaction];
    
    if(wasSuccessful) {
		
		Event evt(etIN_APP_PURCHASE_SUCCESS);
		evt.data = "etIN_APP_PURCHASE_SUCCESS!";
		iap_send_event(evt);
		
        //finished the transaction

		//Display success alert
		/*UIAlertView *message = [[[UIAlertView alloc] initWithTitle:@"What a beautiful day"
                                                      message:@"Upgrade complete. Enjoy the full-featured version & thank you for your support."
                                                     delegate:nil
                                            cancelButtonTitle:@"OK"
                                            otherButtonTitles:nil] autorelease];
 
    	[message show];*/

    } 

    else {
        //failed transaction		
		Event evt(etIN_APP_PURCHASE_FAIL);
		evt.data = "IN_APP_PURCHASE_FAIL!";
		iap_send_event(evt);

		//Display success alert
		UIAlertView *message = [[[UIAlertView alloc] initWithTitle:@"Uh oh"
                                                      message:@"Something went wrong. We could not complete your purchase. Please try again."
                                                     delegate:nil
                                            cancelButtonTitle:@"OK"
                                            otherButtonTitles:nil] autorelease];
 
    	[message show];
    }
}

-(void)displayAlert:(NSString *)title messager: (NSString *)message{
	UIAlertView *alert = [[[UIAlertView alloc] initWithTitle:title message:message
                                                           delegate:nil cancelButtonTitle:@"OK" otherButtonTitles: nil]autorelease];
            
   	[alert show];

}

- (void)completeTransaction:(SKPaymentTransaction *)transaction{
	NSLog(@"completeTransaction");
    [self finishTransaction:transaction wasSuccessful:YES];
} 
- (void)restoreTransaction:(SKPaymentTransaction *)transaction{
	NSLog(@"restoreTransaction - %@",transaction.description);
    [self finishTransaction:transaction wasSuccessful:YES];
} 
- (void)failedTransaction:(SKPaymentTransaction *)transaction{

	NSLog(@"failedTransaction");



    if (transaction.error.code != SKErrorPaymentCancelled){
        [self finishTransaction:transaction wasSuccessful:NO];
    }else{
        [[SKPaymentQueue defaultQueue] finishTransaction:transaction];
		
		Event evt(etIN_APP_PURCHASE_CANCEL);
		evt.data = "IN_APP_PURCHASE_CANCEL!";
		iap_send_event(evt);
        
    }
}

// called when the transaction status is updated
- (void)paymentQueue:(SKPaymentQueue *)queue updatedTransactions:(NSArray *)transactions{
	for (SKPaymentTransaction *transaction in transactions){
        switch (transaction.transactionState){
            case SKPaymentTransactionStatePurchased:
                [self completeTransaction:transaction];
                break;
            case SKPaymentTransactionStateFailed:
                [self failedTransaction:transaction];
                break;
            case SKPaymentTransactionStateRestored:
                [self restoreTransaction:transaction];
                break;
            default:
                break;
        }
    }
}

- (void)dealloc{
	if(myProduct) [myProduct release];
	if(productsRequest) [productsRequest release];
	if(productID) [productID release];
	[super dealloc];
}

@end

namespace asiap{
	static InAppPurchase *inAppPurchase = nil;

	void initInAppPurchase(){
		inAppPurchase = [[InAppPurchase alloc] init];
		[inAppPurchase initInAppPurchase];
	}

	bool canPurchase(){
		return [inAppPurchase canMakePurchases];
	}

	void purchaseProduct(const char *inProductID){
		NSString *productID = [[NSString alloc] initWithUTF8String:inProductID];
		[inAppPurchase purchaseProduct:productID];
	}

	void releaseInAppPurchase(){
		[inAppPurchase release];
	}

    void restoreTransaction()
    {
    	[inAppPurchase restoreProducts];
    }


	void displayMessage(const char *title, const char *message) {

		 NSString *tit = [[NSString alloc] initWithUTF8String:title];
       	 NSString *mess = [[NSString alloc] initWithUTF8String:message];
		[inAppPurchase displayAlert: tit messager: mess];
	}
}


