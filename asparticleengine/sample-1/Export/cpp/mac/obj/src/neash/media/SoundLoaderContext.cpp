#include <hxcpp.h>

#ifndef INCLUDED_neash_media_SoundLoaderContext
#include <neash/media/SoundLoaderContext.h>
#endif
namespace neash{
namespace media{

Void SoundLoaderContext_obj::__construct()
{
{
}
;
	return null();
}

SoundLoaderContext_obj::~SoundLoaderContext_obj() { }

Dynamic SoundLoaderContext_obj::__CreateEmpty() { return  new SoundLoaderContext_obj; }
hx::ObjectPtr< SoundLoaderContext_obj > SoundLoaderContext_obj::__new()
{  hx::ObjectPtr< SoundLoaderContext_obj > result = new SoundLoaderContext_obj();
	result->__construct();
	return result;}

Dynamic SoundLoaderContext_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SoundLoaderContext_obj > result = new SoundLoaderContext_obj();
	result->__construct();
	return result;}


SoundLoaderContext_obj::SoundLoaderContext_obj()
{
}

void SoundLoaderContext_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SoundLoaderContext);
	HX_MARK_END_CLASS();
}

Dynamic SoundLoaderContext_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic SoundLoaderContext_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void SoundLoaderContext_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class SoundLoaderContext_obj::__mClass;

void SoundLoaderContext_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("neash.media.SoundLoaderContext"), hx::TCanCast< SoundLoaderContext_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void SoundLoaderContext_obj::__boot()
{
}

} // end namespace neash
} // end namespace media
