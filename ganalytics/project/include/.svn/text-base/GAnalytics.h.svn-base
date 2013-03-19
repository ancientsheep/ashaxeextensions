#ifndef __GANALYTICS_H
#define __GANALYTICS_H

namespace ganalytics 
{
	#ifdef IPHONE
		void setDebugMode(int deb);
		void setCustomVar(int index,const char*name,const char *value);
        void startTracker(const char *acountID,int dispatchPeriod);
        void trackPageView(const char *pageName);
        void trackEvent(const char *category,const char *action,const char *label,int value);
        void dispatchTracker();
        void stopTracker();
        void setupGACrashReporting();
    #endif
}

#endif

