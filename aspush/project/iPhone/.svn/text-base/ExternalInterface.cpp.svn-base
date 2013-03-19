#include <stdio.h>
#include <hx/CFFI.h>
#include "AsPush.h"
#include "Events.h"

#define NULL_VAL null()

using namespace aspush;

AutoGCRoot *aspushEventCallback=0;

/* init Event handle
*************************************************/
static value aspush_set_event_handle(value onEvent)
{
	aspushEventCallback = new AutoGCRoot(onEvent);
	return alloc_bool(true);
}
DEFINE_PRIM(aspush_set_event_handle,1);

void register_for_remote()
{
	printf("AsPush - ExternalInterface.cpp: register_for_remote\n");
	registerForRemote();
}
DEFINE_PRIM(register_for_remote,0);

void aspush_set_badge_num(value num)
{
	printf("AsPush - ExternalInterface.cpp: aspush_set_badge_num\n");
	setAppBadge(val_int(num));

}
DEFINE_PRIM(aspush_set_badge_num,1);

void aspush_schedule_local()
{
	printf("AsPush - aspush_schedule_local\n");
	scheduleLocalPush();
}
DEFINE_PRIM(aspush_schedule_local,0);

extern "C" 
{
	void aspush_main()
	{
		printf("aspush_main()\n");
	}

	int aspush_register_prims()
	{
		printf("CPP: aspush_register_prims()\n");
		aspush_main();
		return 0;
	}

	void aspush_send_event(Event &inEvent){
            printf("AsPush :: Send Event: %i\n",inEvent.type);
            
            value o = alloc_empty_object();
            alloc_field(o,val_id("type"),alloc_int(inEvent.type));
            alloc_field(o,val_id("code"),alloc_int(inEvent.code));
            alloc_field(o,val_id("value"),alloc_int(inEvent.value));
            alloc_field(o,val_id("data"),alloc_string(inEvent.data));
            alloc_field(o,val_id("token"),alloc_string(inEvent.token));
              
            val_call1(aspushEventCallback->get(),o);
    }
}