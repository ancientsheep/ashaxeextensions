#ifndef EVENTS_H_
#define EVENTS_H_

enum EventType
{
   etUnknown,                    // 0
   etCONNECTION_SUCCESS,         // 1
   etCONNECTION_FAILED,          // 2
};

struct Event
{        
   Event(EventType inType=etUnknown,int inCode=0,int inValue=0,const char *inData = "",const char *inReturnData = "")
   :type(inType), code(inCode), value(inValue), data(inData),returnData(inReturnData){}

   EventType type;
   int       code;
   int       value;
   const char *data;
   const char *returnData;
};

#endif