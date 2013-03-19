#include <stdio.h>
#include <hx/CFFI.h>
#include "asIAP.h"
#include "Events.h"
	
#define NULL_VAL null()
	
DEFINE_ENTRY_POINT(asiap_main);
	
using namespace asiap;
	
AutoGCRoot *iapEventCallback=0;


#ifdef IPHONE

/* init Event handle
*************************************************/
static value iap_set_event_handle(value onEvent)
{
	iapEventCallback = new AutoGCRoot(onEvent);
	return alloc_bool(true);
}
DEFINE_PRIM(iap_set_event_handle,1);

//inAppPurchase start
value iap_init(){
        initInAppPurchase();
        return alloc_null();
}
DEFINE_PRIM(iap_init,0);

value iap_can_purchase(){

        return alloc_bool(canPurchase());
}
DEFINE_PRIM(iap_can_purchase,0);

value  iap_purchase(value productID){
        purchaseProduct(val_string(productID));
        return alloc_null();
}
DEFINE_PRIM(iap_purchase,1);

value iap_release(value productID){
        releaseInAppPurchase();
        return alloc_null();
}
DEFINE_PRIM(iap_release,0);

value  iap_restore_transaction(){
       restoreTransaction();
        return alloc_null();
}
DEFINE_PRIM(iap_restore_transaction,0);

value iap_display_message(value title, value message){
        displayMessage(val_string(title), val_string(message));
        return alloc_null();
}
DEFINE_PRIM(iap_display_message,2);

//inAppPurchase end
#endif

extern "C" 
{
	void asiap_main()
	{	
		printf("asiap_main()\n");
	}	

	int asiap_register_prims()
	{
		printf("CPP: asiap_register_prims()\n");
		asiap_main();
		return 0;
	}

	void iap_send_event(Event &inEvent){
            printf("asIAP :: Send Event: %i\n",inEvent.type);
            
            value o = alloc_empty_object();
            alloc_field(o,val_id("type"),alloc_int(inEvent.type));
            alloc_field(o,val_id("code"),alloc_int(inEvent.code));
            alloc_field(o,val_id("value"),alloc_int(inEvent.value));
            alloc_field(o,val_id("data"),alloc_string(inEvent.data));
              
            val_call1(iapEventCallback->get(),o);
    }
}