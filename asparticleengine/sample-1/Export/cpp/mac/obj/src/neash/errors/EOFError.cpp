#include <hxcpp.h>

#ifndef INCLUDED_neash_errors_EOFError
#include <neash/errors/EOFError.h>
#endif
#ifndef INCLUDED_neash_errors_Error
#include <neash/errors/Error.h>
#endif
namespace neash{
namespace errors{

Void EOFError_obj::__construct()
{
{
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/errors/EOFError.hx",8)
	super::__construct(HX_CSTRING("End of file was encountered"),(int)2030);
}
;
	return null();
}

EOFError_obj::~EOFError_obj() { }

Dynamic EOFError_obj::__CreateEmpty() { return  new EOFError_obj; }
hx::ObjectPtr< EOFError_obj > EOFError_obj::__new()
{  hx::ObjectPtr< EOFError_obj > result = new EOFError_obj();
	result->__construct();
	return result;}

Dynamic EOFError_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EOFError_obj > result = new EOFError_obj();
	result->__construct();
	return result;}


EOFError_obj::EOFError_obj()
{
}

void EOFError_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EOFError);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

Dynamic EOFError_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic EOFError_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void EOFError_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class EOFError_obj::__mClass;

void EOFError_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("neash.errors.EOFError"), hx::TCanCast< EOFError_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void EOFError_obj::__boot()
{
}

} // end namespace neash
} // end namespace errors
