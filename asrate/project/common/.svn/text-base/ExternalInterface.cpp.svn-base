#include <stdio.h>
#include <hx/CFFI.h>
#include <hx/Macros.h>
#include <hxcpp.h>
#include "AppRater.h"
	
DEFINE_ENTRY_POINT(asrate_main);
	
using namespace asrate;


value apprater_rateapp(value linkshare)
{
   	rate_app(val_string(linkshare));
    return alloc_null();
}

DEFINE_PRIM(apprater_rateapp,1);

value ui_alert(value title,value message)
{
        //rate_app(val_string(linkshare));
	alerter(val_string(title),val_string(message));
    return alloc_null();
}

DEFINE_PRIM(ui_alert,2);

value apprater_debug_dialog()
{
    debug_show_rating();
    return alloc_null();
}

DEFINE_PRIM(apprater_debug_dialog,0);

extern "C" 
{
	void asrate_main()
	{	
		printf("asrate_main()\n");
	}	

	int asrate_register_prims()
	{
		printf("CPP: asrate_register_prims()\n");
		asrate_main();
		return 0;
	}
}