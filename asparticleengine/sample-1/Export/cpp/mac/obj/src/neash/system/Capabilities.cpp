#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_neash_Loader
#include <neash/Loader.h>
#endif
#ifndef INCLUDED_neash_system_Capabilities
#include <neash/system/Capabilities.h>
#endif
namespace neash{
namespace system{

Void Capabilities_obj::__construct()
{
	return null();
}

Capabilities_obj::~Capabilities_obj() { }

Dynamic Capabilities_obj::__CreateEmpty() { return  new Capabilities_obj; }
hx::ObjectPtr< Capabilities_obj > Capabilities_obj::__new()
{  hx::ObjectPtr< Capabilities_obj > result = new Capabilities_obj();
	result->__construct();
	return result;}

Dynamic Capabilities_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Capabilities_obj > result = new Capabilities_obj();
	result->__construct();
	return result;}

double Capabilities_obj::pixelAspectRatio;

double Capabilities_obj::screenDPI;

double Capabilities_obj::screenResolutionX;

double Capabilities_obj::screenResolutionY;

Array< Array< int > > Capabilities_obj::screenResolutions;

::String Capabilities_obj::language;

double Capabilities_obj::nmeGetPixelAspectRatio( ){
	HX_SOURCE_PUSH("Capabilities_obj::nmeGetPixelAspectRatio")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/system/Capabilities.hx",26)
	return ::neash::system::Capabilities_obj::nme_capabilities_get_pixel_aspect_ratio();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Capabilities_obj,nmeGetPixelAspectRatio,return )

double Capabilities_obj::nmeGetScreenDPI( ){
	HX_SOURCE_PUSH("Capabilities_obj::nmeGetScreenDPI")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/system/Capabilities.hx",27)
	return ::neash::system::Capabilities_obj::nme_capabilities_get_screen_dpi();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Capabilities_obj,nmeGetScreenDPI,return )

double Capabilities_obj::nmeGetScreenResolutionX( ){
	HX_SOURCE_PUSH("Capabilities_obj::nmeGetScreenResolutionX")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/system/Capabilities.hx",28)
	return ::neash::system::Capabilities_obj::nme_capabilities_get_screen_resolution_x();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Capabilities_obj,nmeGetScreenResolutionX,return )

double Capabilities_obj::nmeGetScreenResolutionY( ){
	HX_SOURCE_PUSH("Capabilities_obj::nmeGetScreenResolutionY")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/system/Capabilities.hx",29)
	return ::neash::system::Capabilities_obj::nme_capabilities_get_screen_resolution_y();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Capabilities_obj,nmeGetScreenResolutionY,return )

::String Capabilities_obj::nmeGetLanguage( ){
	HX_SOURCE_PUSH("Capabilities_obj::nmeGetLanguage")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/system/Capabilities.hx",34)
	::String locale = ::neash::system::Capabilities_obj::nme_capabilities_get_language();
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/system/Capabilities.hx",36)
	if (((bool((bool((bool((locale == null())) || bool((locale == HX_CSTRING(""))))) || bool((locale == HX_CSTRING("C"))))) || bool((locale == HX_CSTRING("POSIX")))))){
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/system/Capabilities.hx",36)
		return HX_CSTRING("en-US");
	}
	else{
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/system/Capabilities.hx",42)
		::String formattedLocale = HX_CSTRING("");
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/system/Capabilities.hx",43)
		int length = locale.length;
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/system/Capabilities.hx",45)
		if (((length > (int)5))){
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/system/Capabilities.hx",45)
			length = (int)5;
		}
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/system/Capabilities.hx",51)
		{
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/system/Capabilities.hx",51)
			int _g = (int)0;
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/system/Capabilities.hx",51)
			while(((_g < length))){
				HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/system/Capabilities.hx",51)
				int i = (_g)++;
				HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/system/Capabilities.hx",53)
				::String _char = locale.charAt(i);
				HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/system/Capabilities.hx",55)
				if (((i < (int)2))){
					HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/system/Capabilities.hx",55)
					hx::AddEq(formattedLocale,_char.toLowerCase());
				}
				else{
					HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/system/Capabilities.hx",59)
					if (((i == (int)2))){
						HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/system/Capabilities.hx",59)
						hx::AddEq(formattedLocale,HX_CSTRING("-"));
					}
					else{
						HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/system/Capabilities.hx",63)
						hx::AddEq(formattedLocale,_char.toUpperCase());
					}
				}
			}
		}
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/system/Capabilities.hx",71)
		return formattedLocale;
	}
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/system/Capabilities.hx",36)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Capabilities_obj,nmeGetLanguage,return )

Array< Array< int > > Capabilities_obj::nmeGetScreenResolutions( ){
	HX_SOURCE_PUSH("Capabilities_obj::nmeGetScreenResolutions")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/system/Capabilities.hx",80)
	Array< int > res = ::neash::system::Capabilities_obj::nme_capabilities_get_screen_resolutions();
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/system/Capabilities.hx",82)
	if (((res == null()))){
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/system/Capabilities.hx",83)
		return Array_obj< Array< int > >::__new();
	}
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/system/Capabilities.hx",85)
	Array< Array< int > > out = Array_obj< Array< int > >::__new();
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/system/Capabilities.hx",87)
	{
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/system/Capabilities.hx",87)
		int _g1 = (int)0;
		int _g = ::Std_obj::_int((double(res->length) / double((int)2)));
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/system/Capabilities.hx",87)
		while(((_g1 < _g))){
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/system/Capabilities.hx",87)
			int c = (_g1)++;
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/system/Capabilities.hx",89)
			out->push(Array_obj< int >::__new().Add(res->__get((c * (int)2))).Add(res->__get(((c * (int)2) + (int)1))));
		}
	}
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/system/Capabilities.hx",92)
	return out;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Capabilities_obj,nmeGetScreenResolutions,return )

Dynamic Capabilities_obj::nme_capabilities_get_pixel_aspect_ratio;

Dynamic Capabilities_obj::nme_capabilities_get_screen_dpi;

Dynamic Capabilities_obj::nme_capabilities_get_screen_resolution_x;

Dynamic Capabilities_obj::nme_capabilities_get_screen_resolution_y;

Dynamic Capabilities_obj::nme_capabilities_get_screen_resolutions;

Dynamic Capabilities_obj::nme_capabilities_get_language;


Capabilities_obj::Capabilities_obj()
{
}

void Capabilities_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Capabilities);
	HX_MARK_END_CLASS();
}

Dynamic Capabilities_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"language") ) { return inCallProp ? nmeGetLanguage() : language; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"screenDPI") ) { return inCallProp ? nmeGetScreenDPI() : screenDPI; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"nmeGetLanguage") ) { return nmeGetLanguage_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"nmeGetScreenDPI") ) { return nmeGetScreenDPI_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"pixelAspectRatio") ) { return inCallProp ? nmeGetPixelAspectRatio() : pixelAspectRatio; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"screenResolutionX") ) { return inCallProp ? nmeGetScreenResolutionX() : screenResolutionX; }
		if (HX_FIELD_EQ(inName,"screenResolutionY") ) { return inCallProp ? nmeGetScreenResolutionY() : screenResolutionY; }
		if (HX_FIELD_EQ(inName,"screenResolutions") ) { return inCallProp ? nmeGetScreenResolutions() : screenResolutions; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"nmeGetPixelAspectRatio") ) { return nmeGetPixelAspectRatio_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"nmeGetScreenResolutionX") ) { return nmeGetScreenResolutionX_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeGetScreenResolutionY") ) { return nmeGetScreenResolutionY_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeGetScreenResolutions") ) { return nmeGetScreenResolutions_dyn(); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"nme_capabilities_get_language") ) { return nme_capabilities_get_language; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"nme_capabilities_get_screen_dpi") ) { return nme_capabilities_get_screen_dpi; }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"nme_capabilities_get_pixel_aspect_ratio") ) { return nme_capabilities_get_pixel_aspect_ratio; }
		if (HX_FIELD_EQ(inName,"nme_capabilities_get_screen_resolutions") ) { return nme_capabilities_get_screen_resolutions; }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"nme_capabilities_get_screen_resolution_x") ) { return nme_capabilities_get_screen_resolution_x; }
		if (HX_FIELD_EQ(inName,"nme_capabilities_get_screen_resolution_y") ) { return nme_capabilities_get_screen_resolution_y; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Capabilities_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"language") ) { language=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"screenDPI") ) { screenDPI=inValue.Cast< double >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"pixelAspectRatio") ) { pixelAspectRatio=inValue.Cast< double >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"screenResolutionX") ) { screenResolutionX=inValue.Cast< double >(); return inValue; }
		if (HX_FIELD_EQ(inName,"screenResolutionY") ) { screenResolutionY=inValue.Cast< double >(); return inValue; }
		if (HX_FIELD_EQ(inName,"screenResolutions") ) { screenResolutions=inValue.Cast< Array< Array< int > > >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"nme_capabilities_get_language") ) { nme_capabilities_get_language=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"nme_capabilities_get_screen_dpi") ) { nme_capabilities_get_screen_dpi=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"nme_capabilities_get_pixel_aspect_ratio") ) { nme_capabilities_get_pixel_aspect_ratio=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_capabilities_get_screen_resolutions") ) { nme_capabilities_get_screen_resolutions=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"nme_capabilities_get_screen_resolution_x") ) { nme_capabilities_get_screen_resolution_x=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_capabilities_get_screen_resolution_y") ) { nme_capabilities_get_screen_resolution_y=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Capabilities_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("pixelAspectRatio"),
	HX_CSTRING("screenDPI"),
	HX_CSTRING("screenResolutionX"),
	HX_CSTRING("screenResolutionY"),
	HX_CSTRING("screenResolutions"),
	HX_CSTRING("language"),
	HX_CSTRING("nmeGetPixelAspectRatio"),
	HX_CSTRING("nmeGetScreenDPI"),
	HX_CSTRING("nmeGetScreenResolutionX"),
	HX_CSTRING("nmeGetScreenResolutionY"),
	HX_CSTRING("nmeGetLanguage"),
	HX_CSTRING("nmeGetScreenResolutions"),
	HX_CSTRING("nme_capabilities_get_pixel_aspect_ratio"),
	HX_CSTRING("nme_capabilities_get_screen_dpi"),
	HX_CSTRING("nme_capabilities_get_screen_resolution_x"),
	HX_CSTRING("nme_capabilities_get_screen_resolution_y"),
	HX_CSTRING("nme_capabilities_get_screen_resolutions"),
	HX_CSTRING("nme_capabilities_get_language"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Capabilities_obj::pixelAspectRatio,"pixelAspectRatio");
	HX_MARK_MEMBER_NAME(Capabilities_obj::screenDPI,"screenDPI");
	HX_MARK_MEMBER_NAME(Capabilities_obj::screenResolutionX,"screenResolutionX");
	HX_MARK_MEMBER_NAME(Capabilities_obj::screenResolutionY,"screenResolutionY");
	HX_MARK_MEMBER_NAME(Capabilities_obj::screenResolutions,"screenResolutions");
	HX_MARK_MEMBER_NAME(Capabilities_obj::language,"language");
	HX_MARK_MEMBER_NAME(Capabilities_obj::nme_capabilities_get_pixel_aspect_ratio,"nme_capabilities_get_pixel_aspect_ratio");
	HX_MARK_MEMBER_NAME(Capabilities_obj::nme_capabilities_get_screen_dpi,"nme_capabilities_get_screen_dpi");
	HX_MARK_MEMBER_NAME(Capabilities_obj::nme_capabilities_get_screen_resolution_x,"nme_capabilities_get_screen_resolution_x");
	HX_MARK_MEMBER_NAME(Capabilities_obj::nme_capabilities_get_screen_resolution_y,"nme_capabilities_get_screen_resolution_y");
	HX_MARK_MEMBER_NAME(Capabilities_obj::nme_capabilities_get_screen_resolutions,"nme_capabilities_get_screen_resolutions");
	HX_MARK_MEMBER_NAME(Capabilities_obj::nme_capabilities_get_language,"nme_capabilities_get_language");
};

Class Capabilities_obj::__mClass;

void Capabilities_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("neash.system.Capabilities"), hx::TCanCast< Capabilities_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Capabilities_obj::__boot()
{
	hx::Static(pixelAspectRatio);
	hx::Static(screenDPI);
	hx::Static(screenResolutionX);
	hx::Static(screenResolutionY);
	hx::Static(screenResolutions);
	hx::Static(language);
	hx::Static(nme_capabilities_get_pixel_aspect_ratio) = ::neash::Loader_obj::load(HX_CSTRING("nme_capabilities_get_pixel_aspect_ratio"),(int)0);
	hx::Static(nme_capabilities_get_screen_dpi) = ::neash::Loader_obj::load(HX_CSTRING("nme_capabilities_get_screen_dpi"),(int)0);
	hx::Static(nme_capabilities_get_screen_resolution_x) = ::neash::Loader_obj::load(HX_CSTRING("nme_capabilities_get_screen_resolution_x"),(int)0);
	hx::Static(nme_capabilities_get_screen_resolution_y) = ::neash::Loader_obj::load(HX_CSTRING("nme_capabilities_get_screen_resolution_y"),(int)0);
	hx::Static(nme_capabilities_get_screen_resolutions) = ::neash::Loader_obj::load(HX_CSTRING("nme_capabilities_get_screen_resolutions"),(int)0);
	hx::Static(nme_capabilities_get_language) = ::neash::Loader_obj::load(HX_CSTRING("nme_capabilities_get_language"),(int)0);
}

} // end namespace neash
} // end namespace system
