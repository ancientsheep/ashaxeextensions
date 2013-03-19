#ifndef INCLUDED_neash_system_Capabilities
#define INCLUDED_neash_system_Capabilities

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(neash,system,Capabilities)
namespace neash{
namespace system{


class Capabilities_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Capabilities_obj OBJ_;
		Capabilities_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Capabilities_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Capabilities_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("Capabilities"); }

		static double pixelAspectRatio; /* REM */ 
		static double screenDPI; /* REM */ 
		static double screenResolutionX; /* REM */ 
		static double screenResolutionY; /* REM */ 
		static Array< Array< int > > screenResolutions; /* REM */ 
		static ::String language; /* REM */ 
		static double nmeGetPixelAspectRatio( );
		static Dynamic nmeGetPixelAspectRatio_dyn();

		static double nmeGetScreenDPI( );
		static Dynamic nmeGetScreenDPI_dyn();

		static double nmeGetScreenResolutionX( );
		static Dynamic nmeGetScreenResolutionX_dyn();

		static double nmeGetScreenResolutionY( );
		static Dynamic nmeGetScreenResolutionY_dyn();

		static ::String nmeGetLanguage( );
		static Dynamic nmeGetLanguage_dyn();

		static Array< Array< int > > nmeGetScreenResolutions( );
		static Dynamic nmeGetScreenResolutions_dyn();

		static Dynamic nme_capabilities_get_pixel_aspect_ratio; /* REM */ 
		static Dynamic &nme_capabilities_get_pixel_aspect_ratio_dyn() { return nme_capabilities_get_pixel_aspect_ratio;}
		static Dynamic nme_capabilities_get_screen_dpi; /* REM */ 
		static Dynamic &nme_capabilities_get_screen_dpi_dyn() { return nme_capabilities_get_screen_dpi;}
		static Dynamic nme_capabilities_get_screen_resolution_x; /* REM */ 
		static Dynamic &nme_capabilities_get_screen_resolution_x_dyn() { return nme_capabilities_get_screen_resolution_x;}
		static Dynamic nme_capabilities_get_screen_resolution_y; /* REM */ 
		static Dynamic &nme_capabilities_get_screen_resolution_y_dyn() { return nme_capabilities_get_screen_resolution_y;}
		static Dynamic nme_capabilities_get_screen_resolutions; /* REM */ 
		static Dynamic &nme_capabilities_get_screen_resolutions_dyn() { return nme_capabilities_get_screen_resolutions;}
		static Dynamic nme_capabilities_get_language; /* REM */ 
		static Dynamic &nme_capabilities_get_language_dyn() { return nme_capabilities_get_language;}
};

} // end namespace neash
} // end namespace system

#endif /* INCLUDED_neash_system_Capabilities */ 
