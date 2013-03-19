#ifndef INCLUDED_com_ancientsheep_particles_CCTypes
#define INCLUDED_com_ancientsheep_particles_CCTypes

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,ancientsheep,particles,CCTypes)
namespace com{
namespace ancientsheep{
namespace particles{


class CCTypes_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CCTypes_obj OBJ_;
		CCTypes_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< CCTypes_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~CCTypes_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("CCTypes"); }

		static Dynamic ccWHITE; /* REM */ 
		static Dynamic ccYELLOW; /* REM */ 
		static Dynamic ccBLUE; /* REM */ 
		static Dynamic ccGREEN; /* REM */ 
		static Dynamic ccRED; /* REM */ 
		static Dynamic ccMAGENTA; /* REM */ 
		static Dynamic ccBLACK; /* REM */ 
		static Dynamic ccORANGE; /* REM */ 
		static Dynamic ccGRAY; /* REM */ 
		static Dynamic ccc3( int r,int g,int b);
		static Dynamic ccc3_dyn();

		static Dynamic ccc4FFromccc3B( Dynamic c);
		static Dynamic ccc4FFromccc3B_dyn();

		static Dynamic ccc4FFromccc4B( Dynamic c);
		static Dynamic ccc4FFromccc4B_dyn();

		static bool ccc4FEqual( Dynamic a,Dynamic b);
		static Dynamic ccc4FEqual_dyn();

		static Dynamic ccc4( int r,int g,int b,int a);
		static Dynamic ccc4_dyn();

		static Dynamic ASGridSizeMake( int x,int y);
		static Dynamic ASGridSizeMake_dyn();

};

} // end namespace com
} // end namespace ancientsheep
} // end namespace particles

#endif /* INCLUDED_com_ancientsheep_particles_CCTypes */ 
