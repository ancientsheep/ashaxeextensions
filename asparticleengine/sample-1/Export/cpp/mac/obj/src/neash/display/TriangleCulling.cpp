#include <hxcpp.h>

#ifndef INCLUDED_neash_display_TriangleCulling
#include <neash/display/TriangleCulling.h>
#endif
namespace neash{
namespace display{

::neash::display::TriangleCulling TriangleCulling_obj::NEGATIVE;

::neash::display::TriangleCulling TriangleCulling_obj::NONE;

::neash::display::TriangleCulling TriangleCulling_obj::POSITIVE;

HX_DEFINE_CREATE_ENUM(TriangleCulling_obj)

int TriangleCulling_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("NEGATIVE")) return 2;
	if (inName==HX_CSTRING("NONE")) return 1;
	if (inName==HX_CSTRING("POSITIVE")) return 0;
	return super::__FindIndex(inName);
}

int TriangleCulling_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("NEGATIVE")) return 0;
	if (inName==HX_CSTRING("NONE")) return 0;
	if (inName==HX_CSTRING("POSITIVE")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic TriangleCulling_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("NEGATIVE")) return NEGATIVE;
	if (inName==HX_CSTRING("NONE")) return NONE;
	if (inName==HX_CSTRING("POSITIVE")) return POSITIVE;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("POSITIVE"),
	HX_CSTRING("NONE"),
	HX_CSTRING("NEGATIVE"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TriangleCulling_obj::NEGATIVE,"NEGATIVE");
	HX_MARK_MEMBER_NAME(TriangleCulling_obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(TriangleCulling_obj::POSITIVE,"POSITIVE");
};

static ::String sMemberFields[] = { ::String(null()) };
Class TriangleCulling_obj::__mClass;

Dynamic __Create_TriangleCulling_obj() { return new TriangleCulling_obj; }

void TriangleCulling_obj::__register()
{

Static(__mClass) = hx::RegisterClass(HX_CSTRING("neash.display.TriangleCulling"), hx::TCanCast< TriangleCulling_obj >,sStaticFields,sMemberFields,
	&__Create_TriangleCulling_obj, &__Create,
	&super::__SGetClass(), &CreateTriangleCulling_obj, sMarkStatics);
}

void TriangleCulling_obj::__boot()
{
Static(NEGATIVE) = hx::CreateEnum< TriangleCulling_obj >(HX_CSTRING("NEGATIVE"),2);
Static(NONE) = hx::CreateEnum< TriangleCulling_obj >(HX_CSTRING("NONE"),1);
Static(POSITIVE) = hx::CreateEnum< TriangleCulling_obj >(HX_CSTRING("POSITIVE"),0);
}


} // end namespace neash
} // end namespace display
