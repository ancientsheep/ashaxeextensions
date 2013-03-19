#include <hxcpp.h>

#ifndef INCLUDED_neash_display_DisplayObject
#include <neash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_neash_display_DisplayObjectContainer
#include <neash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_neash_display_IBitmapDrawable
#include <neash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_neash_display_InteractiveObject
#include <neash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_neash_display_MovieClip
#include <neash/display/MovieClip.h>
#endif
#ifndef INCLUDED_neash_display_Sprite
#include <neash/display/Sprite.h>
#endif
#ifndef INCLUDED_neash_events_EventDispatcher
#include <neash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_neash_events_IEventDispatcher
#include <neash/events/IEventDispatcher.h>
#endif
namespace neash{
namespace display{

Void MovieClip_obj::__construct()
{
{
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/MovieClip.hx",18)
	super::__construct();
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/MovieClip.hx",19)
	this->mCurrentFrame = (int)0;
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/MovieClip.hx",20)
	this->mTotalFrames = (int)0;
}
;
	return null();
}

MovieClip_obj::~MovieClip_obj() { }

Dynamic MovieClip_obj::__CreateEmpty() { return  new MovieClip_obj; }
hx::ObjectPtr< MovieClip_obj > MovieClip_obj::__new()
{  hx::ObjectPtr< MovieClip_obj > result = new MovieClip_obj();
	result->__construct();
	return result;}

Dynamic MovieClip_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MovieClip_obj > result = new MovieClip_obj();
	result->__construct();
	return result;}

Void MovieClip_obj::gotoAndPlay( Dynamic frame,::String scene){
{
		HX_SOURCE_PUSH("MovieClip_obj::gotoAndPlay")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(MovieClip_obj,gotoAndPlay,(void))

Void MovieClip_obj::gotoAndStop( Dynamic frame,::String scene){
{
		HX_SOURCE_PUSH("MovieClip_obj::gotoAndStop")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(MovieClip_obj,gotoAndStop,(void))

::String MovieClip_obj::nmeGetType( ){
	HX_SOURCE_PUSH("MovieClip_obj::nmeGetType")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/MovieClip.hx",37)
	return HX_CSTRING("MovieClip");
}


Void MovieClip_obj::play( ){
{
		HX_SOURCE_PUSH("MovieClip_obj::play")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,play,(void))

Void MovieClip_obj::stop( ){
{
		HX_SOURCE_PUSH("MovieClip_obj::stop")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,stop,(void))

int MovieClip_obj::nmeGetCurrentFrame( ){
	HX_SOURCE_PUSH("MovieClip_obj::nmeGetCurrentFrame")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/MovieClip.hx",59)
	return this->mCurrentFrame;
}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,nmeGetCurrentFrame,return )

int MovieClip_obj::nmeGetTotalFrames( ){
	HX_SOURCE_PUSH("MovieClip_obj::nmeGetTotalFrames")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/MovieClip.hx",60)
	return this->mTotalFrames;
}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,nmeGetTotalFrames,return )


MovieClip_obj::MovieClip_obj()
{
}

void MovieClip_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MovieClip);
	HX_MARK_MEMBER_NAME(currentFrame,"currentFrame");
	HX_MARK_MEMBER_NAME(enabled,"enabled");
	HX_MARK_MEMBER_NAME(framesLoaded,"framesLoaded");
	HX_MARK_MEMBER_NAME(totalFrames,"totalFrames");
	HX_MARK_MEMBER_NAME(mCurrentFrame,"mCurrentFrame");
	HX_MARK_MEMBER_NAME(mTotalFrames,"mTotalFrames");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

Dynamic MovieClip_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { return enabled; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"nmeGetType") ) { return nmeGetType_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"totalFrames") ) { return inCallProp ? nmeGetTotalFrames() : totalFrames; }
		if (HX_FIELD_EQ(inName,"gotoAndPlay") ) { return gotoAndPlay_dyn(); }
		if (HX_FIELD_EQ(inName,"gotoAndStop") ) { return gotoAndStop_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentFrame") ) { return inCallProp ? nmeGetCurrentFrame() : currentFrame; }
		if (HX_FIELD_EQ(inName,"framesLoaded") ) { return inCallProp ? nmeGetTotalFrames() : framesLoaded; }
		if (HX_FIELD_EQ(inName,"mTotalFrames") ) { return mTotalFrames; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mCurrentFrame") ) { return mCurrentFrame; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"nmeGetTotalFrames") ) { return nmeGetTotalFrames_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"nmeGetCurrentFrame") ) { return nmeGetCurrentFrame_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MovieClip_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { enabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"totalFrames") ) { totalFrames=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentFrame") ) { currentFrame=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"framesLoaded") ) { framesLoaded=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mTotalFrames") ) { mTotalFrames=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mCurrentFrame") ) { mCurrentFrame=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MovieClip_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("currentFrame"));
	outFields->push(HX_CSTRING("enabled"));
	outFields->push(HX_CSTRING("framesLoaded"));
	outFields->push(HX_CSTRING("totalFrames"));
	outFields->push(HX_CSTRING("mCurrentFrame"));
	outFields->push(HX_CSTRING("mTotalFrames"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("currentFrame"),
	HX_CSTRING("enabled"),
	HX_CSTRING("framesLoaded"),
	HX_CSTRING("totalFrames"),
	HX_CSTRING("mCurrentFrame"),
	HX_CSTRING("mTotalFrames"),
	HX_CSTRING("gotoAndPlay"),
	HX_CSTRING("gotoAndStop"),
	HX_CSTRING("nmeGetType"),
	HX_CSTRING("play"),
	HX_CSTRING("stop"),
	HX_CSTRING("nmeGetCurrentFrame"),
	HX_CSTRING("nmeGetTotalFrames"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class MovieClip_obj::__mClass;

void MovieClip_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("neash.display.MovieClip"), hx::TCanCast< MovieClip_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void MovieClip_obj::__boot()
{
}

} // end namespace neash
} // end namespace display