#include <hx/Macros.h>
#include <hx/CFFI.h>
#include <hxcpp.h>
#include "asGoogleAd.h"
	
#define NULL_VAL null()
	
DEFINE_ENTRY_POINT(asgoogleads_main);
	
using namespace asgoogleads;

AutoGCRoot *gadsEventCallback=0;

#ifdef IPHONE

static value asgad_init(value onEvent)
{
	printf("asgoogleads: asgad_init\n");
	gadsEventCallback=new AutoGCRoot(onEvent);

	return alloc_null();
}
DEFINE_PRIM(asgad_init,1);

value asgad_showad(value id,value x, value y, value sizeType){
        ShowAd(val_string(id),val_int(x),val_int(y),val_int(sizeType) );
        return alloc_null();
}
DEFINE_PRIM(asgad_showad,4);

value asgad_hidead(){
        HideAd();
        return alloc_null();
}
DEFINE_PRIM(asgad_hidead,0);

//inAppPurchase end
#endif

extern "C" 
{
	void asgoogleads_main()
	{	
		printf("asgoogleads_main()\n");
	}	

	int asgoogleads_register_prims()
	{
		printf("CPP: asgoogleads_register_prims()\n");
		asgoogleads_main();
		return 0;
	}

	void asgoogleads_send_event(int eventId)
	{
		printf("Send Event: %i\n",eventId);
		val_call1(gadsEventCallback->get(),alloc_int(eventId));
	}
}