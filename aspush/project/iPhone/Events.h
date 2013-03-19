#ifndef Events_H_
#define Events_H_

enum EventType
{
   etUnknown,                   // 0
   etREGISTER_TOKEN_SUCCESS,    // 1
   etREGISTER_TOKEN_FAILED,     // 2
};

struct Event
{        
   Event(EventType inType=etUnknown,int inCode=0,int inValue=0,const char *inData = "",const char *inToken = "")
   :type(inType), code(inCode), value(inValue), data(inData),token(inToken){}

   EventType type;
   int       code;
   int       value;
   const char *data;
   const char *token;
};

#endif