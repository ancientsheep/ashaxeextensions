#include <hxcpp.h>

#ifndef INCLUDED_neash_display_JointStyle
#include <neash/display/JointStyle.h>
#endif
namespace neash{
namespace display{

::neash::display::JointStyle JointStyle_obj::BEVEL;

::neash::display::JointStyle JointStyle_obj::MITER;

::neash::display::JointStyle JointStyle_obj::ROUND;

HX_DEFINE_CREATE_ENUM(JointStyle_obj)

int JointStyle_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("BEVEL")) return 2;
	if (inName==HX_CSTRING("MITER")) return 1;
	if (inName==HX_CSTRING("ROUND")) return 0;
	return super::__FindIndex(inName);
}

int JointStyle_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("BEVEL")) return 0;
	if (inName==HX_CSTRING("MITER")) return 0;
	if (inName==HX_CSTRING("ROUND")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic JointStyle_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("BEVEL")) return BEVEL;
	if (inName==HX_CSTRING("MITER")) return MITER;
	if (inName==HX_CSTRING("ROUND")) return ROUND;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("ROUND"),
	HX_CSTRING("MITER"),
	HX_CSTRING("BEVEL"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(JointStyle_obj::BEVEL,"BEVEL");
	HX_MARK_MEMBER_NAME(JointStyle_obj::MITER,"MITER");
	HX_MARK_MEMBER_NAME(JointStyle_obj::ROUND,"ROUND");
};

static ::String sMemberFields[] = { ::String(null()) };
Class JointStyle_obj::__mClass;

Dynamic __Create_JointStyle_obj() { return new JointStyle_obj; }

void JointStyle_obj::__register()
{

Static(__mClass) = hx::RegisterClass(HX_CSTRING("neash.display.JointStyle"), hx::TCanCast< JointStyle_obj >,sStaticFields,sMemberFields,
	&__Create_JointStyle_obj, &__Create,
	&super::__SGetClass(), &CreateJointStyle_obj, sMarkStatics);
}

void JointStyle_obj::__boot()
{
Static(BEVEL) = hx::CreateEnum< JointStyle_obj >(HX_CSTRING("BEVEL"),2);
Static(MITER) = hx::CreateEnum< JointStyle_obj >(HX_CSTRING("MITER"),1);
Static(ROUND) = hx::CreateEnum< JointStyle_obj >(HX_CSTRING("ROUND"),0);
}


} // end namespace neash
} // end namespace display
