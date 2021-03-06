#include <hxcpp.h>

#ifndef INCLUDED_neash_display_DisplayObject
#include <neash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_neash_display_IBitmapDrawable
#include <neash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_neash_display_InteractiveObject
#include <neash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_neash_events_Event
#include <neash/events/Event.h>
#endif
#ifndef INCLUDED_neash_events_EventDispatcher
#include <neash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_neash_events_IEventDispatcher
#include <neash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_neash_events_MouseEvent
#include <neash/events/MouseEvent.h>
#endif
#ifndef INCLUDED_neash_events_TouchEvent
#include <neash/events/TouchEvent.h>
#endif
#ifndef INCLUDED_neash_geom_Point
#include <neash/geom/Point.h>
#endif
namespace neash{
namespace events{

Void TouchEvent_obj::__construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< double >  __o_in_localX,hx::Null< double >  __o_in_localY,hx::Null< double >  __o_in_sizeX,hx::Null< double >  __o_in_sizeY,::neash::display::InteractiveObject in_relatedObject,hx::Null< bool >  __o_in_ctrlKey,hx::Null< bool >  __o_in_altKey,hx::Null< bool >  __o_in_shiftKey,hx::Null< bool >  __o_in_buttonDown,hx::Null< int >  __o_in_delta,hx::Null< bool >  __o_in_commandKey,hx::Null< int >  __o_in_clickCount)
{
bool bubbles = __o_bubbles.Default(true);
bool cancelable = __o_cancelable.Default(false);
double in_localX = __o_in_localX.Default(0);
double in_localY = __o_in_localY.Default(0);
double in_sizeX = __o_in_sizeX.Default(1);
double in_sizeY = __o_in_sizeY.Default(1);
bool in_ctrlKey = __o_in_ctrlKey.Default(false);
bool in_altKey = __o_in_altKey.Default(false);
bool in_shiftKey = __o_in_shiftKey.Default(false);
bool in_buttonDown = __o_in_buttonDown.Default(false);
int in_delta = __o_in_delta.Default(0);
bool in_commandKey = __o_in_commandKey.Default(false);
int in_clickCount = __o_in_clickCount.Default(0);
{
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/events/TouchEvent.hx",28)
	super::__construct(type,bubbles,cancelable,in_localX,in_localY,in_relatedObject,in_ctrlKey,in_altKey,in_shiftKey,in_buttonDown,in_delta,in_commandKey,in_clickCount);
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/events/TouchEvent.hx",29)
	this->touchPointID = (int)0;
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/events/TouchEvent.hx",30)
	this->isPrimaryTouchPoint = true;
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/events/TouchEvent.hx",31)
	this->sizeX = in_sizeX;
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/events/TouchEvent.hx",32)
	this->sizeY = in_sizeY;
}
;
	return null();
}

TouchEvent_obj::~TouchEvent_obj() { }

Dynamic TouchEvent_obj::__CreateEmpty() { return  new TouchEvent_obj; }
hx::ObjectPtr< TouchEvent_obj > TouchEvent_obj::__new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< double >  __o_in_localX,hx::Null< double >  __o_in_localY,hx::Null< double >  __o_in_sizeX,hx::Null< double >  __o_in_sizeY,::neash::display::InteractiveObject in_relatedObject,hx::Null< bool >  __o_in_ctrlKey,hx::Null< bool >  __o_in_altKey,hx::Null< bool >  __o_in_shiftKey,hx::Null< bool >  __o_in_buttonDown,hx::Null< int >  __o_in_delta,hx::Null< bool >  __o_in_commandKey,hx::Null< int >  __o_in_clickCount)
{  hx::ObjectPtr< TouchEvent_obj > result = new TouchEvent_obj();
	result->__construct(type,__o_bubbles,__o_cancelable,__o_in_localX,__o_in_localY,__o_in_sizeX,__o_in_sizeY,in_relatedObject,__o_in_ctrlKey,__o_in_altKey,__o_in_shiftKey,__o_in_buttonDown,__o_in_delta,__o_in_commandKey,__o_in_clickCount);
	return result;}

Dynamic TouchEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TouchEvent_obj > result = new TouchEvent_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8],inArgs[9],inArgs[10],inArgs[11],inArgs[12],inArgs[13],inArgs[14]);
	return result;}

::neash::events::MouseEvent TouchEvent_obj::nmeCreateSimilar( ::String inType,::neash::display::InteractiveObject related,::neash::display::InteractiveObject targ){
	HX_SOURCE_PUSH("TouchEvent_obj::nmeCreateSimilar")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/events/TouchEvent.hx",49)
	::neash::events::TouchEvent result = ::neash::events::TouchEvent_obj::__new(inType,this->nmeGetBubbles(),this->nmeGetCancelable(),this->localX,this->localY,this->sizeX,this->sizeY,(  (((related == null()))) ? ::neash::display::InteractiveObject(this->relatedObject) : ::neash::display::InteractiveObject(related) ),this->ctrlKey,this->altKey,this->shiftKey,this->buttonDown,this->delta,this->commandKey,this->clickCount);
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/events/TouchEvent.hx",51)
	result->touchPointID = this->touchPointID;
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/events/TouchEvent.hx",52)
	result->isPrimaryTouchPoint = this->isPrimaryTouchPoint;
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/events/TouchEvent.hx",53)
	if (((targ != null()))){
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/events/TouchEvent.hx",54)
		result->nmeSetTarget(targ);
	}
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/events/TouchEvent.hx",55)
	return result;
}


::String TouchEvent_obj::TOUCH_BEGIN;

::String TouchEvent_obj::TOUCH_END;

::String TouchEvent_obj::TOUCH_MOVE;

::String TouchEvent_obj::TOUCH_OUT;

::String TouchEvent_obj::TOUCH_OVER;

::String TouchEvent_obj::TOUCH_ROLL_OUT;

::String TouchEvent_obj::TOUCH_ROLL_OVER;

::String TouchEvent_obj::TOUCH_TAP;

::neash::events::TouchEvent TouchEvent_obj::nmeCreate( ::String inType,Dynamic inEvent,::neash::geom::Point inLocal,::neash::display::InteractiveObject inTarget,double sizeX,double sizeY){
	HX_SOURCE_PUSH("TouchEvent_obj::nmeCreate")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/events/TouchEvent.hx",38)
	int flags = inEvent->__Field(HX_CSTRING("flags"),true);
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/events/TouchEvent.hx",39)
	::neash::events::TouchEvent evt = ::neash::events::TouchEvent_obj::__new(inType,true,false,inLocal->x,inLocal->y,sizeX,sizeY,null(),(((int(flags) & int(::neash::events::MouseEvent_obj::efCtrlDown))) != (int)0),(((int(flags) & int(::neash::events::MouseEvent_obj::efAltDown))) != (int)0),(((int(flags) & int(::neash::events::MouseEvent_obj::efShiftDown))) != (int)0),(((int(flags) & int(::neash::events::MouseEvent_obj::efLeftDown))) != (int)0),(int)0,null(),(int)0);
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/events/TouchEvent.hx",40)
	evt->stageX = inEvent->__Field(HX_CSTRING("x"),true);
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/events/TouchEvent.hx",41)
	evt->stageY = inEvent->__Field(HX_CSTRING("y"),true);
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/events/TouchEvent.hx",42)
	evt->nmeSetTarget(inTarget);
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/events/TouchEvent.hx",43)
	return evt;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(TouchEvent_obj,nmeCreate,return )


TouchEvent_obj::TouchEvent_obj()
{
}

void TouchEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TouchEvent);
	HX_MARK_MEMBER_NAME(isPrimaryTouchPoint,"isPrimaryTouchPoint");
	HX_MARK_MEMBER_NAME(touchPointID,"touchPointID");
	HX_MARK_MEMBER_NAME(sizeX,"sizeX");
	HX_MARK_MEMBER_NAME(sizeY,"sizeY");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

Dynamic TouchEvent_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"sizeX") ) { return sizeX; }
		if (HX_FIELD_EQ(inName,"sizeY") ) { return sizeY; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"TOUCH_END") ) { return TOUCH_END; }
		if (HX_FIELD_EQ(inName,"TOUCH_OUT") ) { return TOUCH_OUT; }
		if (HX_FIELD_EQ(inName,"TOUCH_TAP") ) { return TOUCH_TAP; }
		if (HX_FIELD_EQ(inName,"nmeCreate") ) { return nmeCreate_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"TOUCH_MOVE") ) { return TOUCH_MOVE; }
		if (HX_FIELD_EQ(inName,"TOUCH_OVER") ) { return TOUCH_OVER; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"TOUCH_BEGIN") ) { return TOUCH_BEGIN; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"touchPointID") ) { return touchPointID; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"TOUCH_ROLL_OUT") ) { return TOUCH_ROLL_OUT; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"TOUCH_ROLL_OVER") ) { return TOUCH_ROLL_OVER; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"nmeCreateSimilar") ) { return nmeCreateSimilar_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"isPrimaryTouchPoint") ) { return isPrimaryTouchPoint; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TouchEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"sizeX") ) { sizeX=inValue.Cast< double >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sizeY") ) { sizeY=inValue.Cast< double >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"TOUCH_END") ) { TOUCH_END=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TOUCH_OUT") ) { TOUCH_OUT=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TOUCH_TAP") ) { TOUCH_TAP=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"TOUCH_MOVE") ) { TOUCH_MOVE=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TOUCH_OVER") ) { TOUCH_OVER=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"TOUCH_BEGIN") ) { TOUCH_BEGIN=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"touchPointID") ) { touchPointID=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"TOUCH_ROLL_OUT") ) { TOUCH_ROLL_OUT=inValue.Cast< ::String >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"TOUCH_ROLL_OVER") ) { TOUCH_ROLL_OVER=inValue.Cast< ::String >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"isPrimaryTouchPoint") ) { isPrimaryTouchPoint=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TouchEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("isPrimaryTouchPoint"));
	outFields->push(HX_CSTRING("touchPointID"));
	outFields->push(HX_CSTRING("sizeX"));
	outFields->push(HX_CSTRING("sizeY"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("TOUCH_BEGIN"),
	HX_CSTRING("TOUCH_END"),
	HX_CSTRING("TOUCH_MOVE"),
	HX_CSTRING("TOUCH_OUT"),
	HX_CSTRING("TOUCH_OVER"),
	HX_CSTRING("TOUCH_ROLL_OUT"),
	HX_CSTRING("TOUCH_ROLL_OVER"),
	HX_CSTRING("TOUCH_TAP"),
	HX_CSTRING("nmeCreate"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("isPrimaryTouchPoint"),
	HX_CSTRING("touchPointID"),
	HX_CSTRING("sizeX"),
	HX_CSTRING("sizeY"),
	HX_CSTRING("nmeCreateSimilar"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TouchEvent_obj::TOUCH_BEGIN,"TOUCH_BEGIN");
	HX_MARK_MEMBER_NAME(TouchEvent_obj::TOUCH_END,"TOUCH_END");
	HX_MARK_MEMBER_NAME(TouchEvent_obj::TOUCH_MOVE,"TOUCH_MOVE");
	HX_MARK_MEMBER_NAME(TouchEvent_obj::TOUCH_OUT,"TOUCH_OUT");
	HX_MARK_MEMBER_NAME(TouchEvent_obj::TOUCH_OVER,"TOUCH_OVER");
	HX_MARK_MEMBER_NAME(TouchEvent_obj::TOUCH_ROLL_OUT,"TOUCH_ROLL_OUT");
	HX_MARK_MEMBER_NAME(TouchEvent_obj::TOUCH_ROLL_OVER,"TOUCH_ROLL_OVER");
	HX_MARK_MEMBER_NAME(TouchEvent_obj::TOUCH_TAP,"TOUCH_TAP");
};

Class TouchEvent_obj::__mClass;

void TouchEvent_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("neash.events.TouchEvent"), hx::TCanCast< TouchEvent_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void TouchEvent_obj::__boot()
{
	hx::Static(TOUCH_BEGIN) = HX_CSTRING("touchBegin");
	hx::Static(TOUCH_END) = HX_CSTRING("touchEnd");
	hx::Static(TOUCH_MOVE) = HX_CSTRING("touchMove");
	hx::Static(TOUCH_OUT) = HX_CSTRING("touchOut");
	hx::Static(TOUCH_OVER) = HX_CSTRING("touchOver");
	hx::Static(TOUCH_ROLL_OUT) = HX_CSTRING("touchRollOut");
	hx::Static(TOUCH_ROLL_OVER) = HX_CSTRING("touchRollOver");
	hx::Static(TOUCH_TAP) = HX_CSTRING("touchTap");
}

} // end namespace neash
} // end namespace events
