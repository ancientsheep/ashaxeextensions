#include <stdio.h>
#include <hx/CFFI.h>
#include "AsURLConnection.h"
#include "Events.h"

#define NULL_VAL null()

using namespace asurlconnection;

AutoGCRoot *asurlconnectEventCallback=0;

/* init Event handle
*************************************************/
static value asurlconnection_set_event_handle(value onEvent)
{
	asurlconnectEventCallback = new AutoGCRoot(onEvent);
	return alloc_bool(true);
}
DEFINE_PRIM(asurlconnection_set_event_handle,1);

void connect_to_url(value url)
{
	printf("AsURLConnection - ExternalInterface.cpp: connect_to_url - %s\n",val_string(url));
	connectToURL(val_string(url));
}
DEFINE_PRIM(connect_to_url,1);

void asurlconnection_destroy()
{
	printf("AsURLConnection - ExternalInterface.cpp: destroy \n");
	destroy_all();
}
DEFINE_PRIM(asurlconnection_destroy,0);

extern "C" 
{
	void asurlconnection_main()
	{
		printf("asurlconnection_main()\n");
	}

	int asurlconnection_register_prims()
	{
		printf("CPP: asurlconnection_register_prims()\n");
		asurlconnection_main();
		return 0;
	}

	void asurlconnection_send_event(Event &inEvent){
            printf("AsURLConnection :: Send Event: %i\n",inEvent.type);
            
            value o = alloc_empty_object();
            alloc_field(o,val_id("type"),alloc_int(inEvent.type));
            alloc_field(o,val_id("code"),alloc_int(inEvent.code));
            alloc_field(o,val_id("value"),alloc_int(inEvent.value));
            alloc_field(o,val_id("data"),alloc_string(inEvent.data));
            alloc_field(o,val_id("returnData"),alloc_string(inEvent.returnData));
              
            val_call1(asurlconnectEventCallback->get(),o);

            printf("AsURLConnection : event sent\n\n");
    }
}