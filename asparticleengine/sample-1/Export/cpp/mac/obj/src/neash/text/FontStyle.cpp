#include <hxcpp.h>

#ifndef INCLUDED_neash_text_FontStyle
#include <neash/text/FontStyle.h>
#endif
namespace neash{
namespace text{

::neash::text::FontStyle FontStyle_obj::BOLD;

::neash::text::FontStyle FontStyle_obj::BOLD_ITALIC;

::neash::text::FontStyle FontStyle_obj::ITALIC;

::neash::text::FontStyle FontStyle_obj::REGULAR;

HX_DEFINE_CREATE_ENUM(FontStyle_obj)

int FontStyle_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("BOLD")) return 0;
	if (inName==HX_CSTRING("BOLD_ITALIC")) return 1;
	if (inName==HX_CSTRING("ITALIC")) return 2;
	if (inName==HX_CSTRING("REGULAR")) return 3;
	return super::__FindIndex(inName);
}

int FontStyle_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("BOLD")) return 0;
	if (inName==HX_CSTRING("BOLD_ITALIC")) return 0;
	if (inName==HX_CSTRING("ITALIC")) return 0;
	if (inName==HX_CSTRING("REGULAR")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic FontStyle_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("BOLD")) return BOLD;
	if (inName==HX_CSTRING("BOLD_ITALIC")) return BOLD_ITALIC;
	if (inName==HX_CSTRING("ITALIC")) return ITALIC;
	if (inName==HX_CSTRING("REGULAR")) return REGULAR;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("BOLD"),
	HX_CSTRING("BOLD_ITALIC"),
	HX_CSTRING("ITALIC"),
	HX_CSTRING("REGULAR"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FontStyle_obj::BOLD,"BOLD");
	HX_MARK_MEMBER_NAME(FontStyle_obj::BOLD_ITALIC,"BOLD_ITALIC");
	HX_MARK_MEMBER_NAME(FontStyle_obj::ITALIC,"ITALIC");
	HX_MARK_MEMBER_NAME(FontStyle_obj::REGULAR,"REGULAR");
};

static ::String sMemberFields[] = { ::String(null()) };
Class FontStyle_obj::__mClass;

Dynamic __Create_FontStyle_obj() { return new FontStyle_obj; }

void FontStyle_obj::__register()
{

Static(__mClass) = hx::RegisterClass(HX_CSTRING("neash.text.FontStyle"), hx::TCanCast< FontStyle_obj >,sStaticFields,sMemberFields,
	&__Create_FontStyle_obj, &__Create,
	&super::__SGetClass(), &CreateFontStyle_obj, sMarkStatics);
}

void FontStyle_obj::__boot()
{
Static(BOLD) = hx::CreateEnum< FontStyle_obj >(HX_CSTRING("BOLD"),0);
Static(BOLD_ITALIC) = hx::CreateEnum< FontStyle_obj >(HX_CSTRING("BOLD_ITALIC"),1);
Static(ITALIC) = hx::CreateEnum< FontStyle_obj >(HX_CSTRING("ITALIC"),2);
Static(REGULAR) = hx::CreateEnum< FontStyle_obj >(HX_CSTRING("REGULAR"),3);
}


} // end namespace neash
} // end namespace text
