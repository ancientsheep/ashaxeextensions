#ifndef __APPRATER_H
#define __APPRATER_H

namespace asrate 
{
    #ifdef IPHONE
	void rate_app(const char * linkshare);
	void debug_show_rating();
	void alerter(const char *title,const char *message);
    #endif
}

#endif

