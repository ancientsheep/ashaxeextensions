#include <hx/Macros.h>
#include <hx/CFFI.h>
#include <hxcpp.h>
#include "asMessenger.h"
	
#define NULL_VAL null()
	
DEFINE_ENTRY_POINT(asmessenger_main);
	
using namespace asmessenger;

AutoGCRoot *messengerEventCallback=0;

#ifdef IPHONE

static value asmessenger_init(value onEvent)
{
	printf("asmessenger : asmessenger_init\n");
	//messengerEventCallback=new AutoGCRoot(onEvent);

	return alloc_null();
}
DEFINE_PRIM(asmessenger_init,1);

value send_email(value subject,value message){
        email_her(val_string(subject),val_string(message));
        return alloc_null();
}
DEFINE_PRIM(send_email,2);

value send_email_attachment(value subject,value message,value attachment,value width,value height){
        email_her_attachment(val_string(subject),val_string(message),val_array_int(attachment),val_int(width),val_int(height));
        return alloc_null();
}
DEFINE_PRIM(send_email_attachment,5);

value get_language(){
       return alloc_bool(getLanguage());
}
DEFINE_PRIM(get_language,0);

value can_send_mail(){
       return alloc_bool(canSendMail());
}
DEFINE_PRIM(can_send_mail,0);

//asMessenger end
#endif

extern "C" 
{
	void asmessenger_main()
	{	
		printf("asmessenger_main()\n");
	}	

	int asmessenger_register_prims()
	{
		printf("CPP: asmessenger_register_prims()\n");
		asmessenger_main();
		return 0;
	}

	void asmessenger_send_event(int eventId)
	{
		printf("Send Event: %i\n",eventId);
		val_call1(messengerEventCallback->get(),alloc_int(eventId));
	}
}