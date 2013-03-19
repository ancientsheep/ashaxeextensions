#include <stdio.h>
#include <hx/CFFI.h>
#include "AsSocial.h"

using namespace associal;

/* init Event handle
*************************************************/

void associal_share(title,url)
{
	printf("AsSocial - ExternalInterface.cpp: associal_share\n");
	socialShare(val_string(title),val_string(url));
}
DEFINE_PRIM(associal_share,2);

extern "C" 
{
	void associal_main()
	{
		printf("associal_main()\n");
	}

	int associal_register_prims()
	{
		printf("CPP: associal_register_prims()\n");
		associal_main();
		return 0;
	}
}