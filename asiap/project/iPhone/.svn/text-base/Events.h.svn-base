#ifndef Events_H_
#define Events_H_

enum EventType{
   etUnknown,                   // 0
   etIN_APP_PURCHASE_SUCCESS,   // 1
   etIN_APP_PURCHASE_FAIL,      // 2
   etIN_APP_PURCHASE_CANCEL,    // 3

        AUTH_SUCCEEDED,                         //4
        AUTH_FAILED,                            //5
        LEADERBOARD_VIEW_OPENED,        //6
        LEADERBOARD_VIEW_CLOSED,        //7
        ACHIEVEMENTS_VIEW_OPENED,       //8
        ACHIEVEMENTS_VIEW_CLOSED,       //9
        SCORE_REPORT_SUCCEEDED,         //10
        SCORE_REPORT_FAILED,            //11
        ACHIEVEMENT_REPORT_SUCCEEDED,//12
        ACHIEVEMENT_REPORT_FAILED,      //13
        ACHIEVEMENT_RESET_SUCCEEDED,//14
        ACHIEVEMENT_RESET_FAILED,       //15

    etIN_APP_PURCHASE_RESTORE_SUCCESS,  
    etIN_APP_PURCHASE_RESTORE_FAIL,
};

struct Event{
        
   Event(EventType inType=etUnknown,int inCode=0,int inValue=0,const char *inData = "")
   :type(inType), code(inCode), value(inValue), data(inData){}

   EventType type;
   int       code;
   int       value;
   const char *data;
};

#endif