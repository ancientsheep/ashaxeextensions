#include <stdio.h>
#include <hx/CFFI.h>
#include "GAnalytics.h"
	
#define NULL_VAL null()
	
DEFINE_ENTRY_POINT(ganalytics_main);
	
using namespace ganalytics;
	
AutoGCRoot *ganalyticsEventCallback=0;


//Prim definitions

value ganalytics_debug_mode(int deb)
{
	#ifdef IPHONE
	setDebugMode(deb);
	return alloc_null();
	#endif
}
DEFINE_PRIM(ganalytics_debug_mode,1);

value ganalytics_set_custom_var(int index,value name,value val)
{
	#ifdef IPHONE
	setCustomVar(index,val_string(name),val_string(val));
	return alloc_null();
	#endif
}
DEFINE_PRIM(ganalytics_set_custom_var,3);

value ganalytics_start_tracker(value acountID,int disPatchPeriod)
{
	#ifdef IPHONE
	startTracker(val_string(acountID),disPatchPeriod);
	return alloc_null();
	#endif
}
DEFINE_PRIM(ganalytics_start_tracker,2);
	
value ganalytics_track_event(value category,value action,value label,int value)
{
	#ifdef IPHONE
	trackEvent(val_string(category), val_string(action), val_string(label), value);
	return alloc_null();
	#endif
}
DEFINE_PRIM(ganalytics_track_event,4);
	
value ganalytics_track_page(value pageName)
{
	printf("ganalytics_track_page called.");
	#ifdef IPHONE
	trackPageView(val_string(pageName));
	return alloc_null();
	#endif
}
DEFINE_PRIM(ganalytics_track_page,1);
	
value ganalytics_dispatch_tracker()
{
	#ifdef IPHONE
	dispatchTracker();
	return alloc_null();
	#endif
}
DEFINE_PRIM(ganalytics_dispatch_tracker,0);

value ganalytics_stop_tracker()
{
	#ifdef IPHONE
	stopTracker();
	return alloc_null();
	#endif
}
DEFINE_PRIM(ganalytics_stop_tracker,0);

value ganalytics_setup_crash_reporting()
{
	#ifdef IPHONE
	setupGACrashReporting();
	return alloc_null();
	#endif
}
DEFINE_PRIM(ganalytics_setup_crash_reporting,0);

extern "C" 
{
	void ganalytics_main()
	{	
		printf("ganalytics_main()\n");
	}	

	int ganalytics_register_prims()
	{
		printf("CPP: ganalytics_register_prims()\n");
		ganalytics_main();
		return 0;
	}
	
	void ganalytics_send_event(int eventId)
	{
		printf("Send Event: %i\n",eventId);
		val_call1(ganalyticsEventCallback->get(),alloc_int(eventId));
	}
}