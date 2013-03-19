#ifndef INCLUDED_com_ancientsheep_particles_ASMacros
#define INCLUDED_com_ancientsheep_particles_ASMacros

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,ancientsheep,particles,ASMacros)
HX_DECLARE_CLASS2(neash,geom,Rectangle)
namespace com{
namespace ancientsheep{
namespace particles{


class ASMacros_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ASMacros_obj OBJ_;
		ASMacros_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ASMacros_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ASMacros_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("ASMacros"); }

		static Dynamic ASSWAP( Dynamic x,Dynamic y);
		static Dynamic ASSWAP_dyn();

		static double RANDOM_MINUS1_1( );
		static Dynamic RANDOM_MINUS1_1_dyn();

		static double RANDOM_0_1( );
		static Dynamic RANDOM_0_1_dyn();

		static double ASDEGREES_TO_RADIANS( double angle);
		static Dynamic ASDEGREES_TO_RADIANS_dyn();

		static double ASRADIANS_TO_DEGREES( double angle);
		static Dynamic ASRADIANS_TO_DEGREES_dyn();

		static ::neash::geom::Rectangle ASRectangle_PIXELS_TO_POINTS( ::neash::geom::Rectangle pixels);
		static Dynamic ASRectangle_PIXELS_TO_POINTS_dyn();

		static ::neash::geom::Rectangle ASRectangle_POINTS_TO_PIXELS( ::neash::geom::Rectangle points);
		static Dynamic ASRectangle_POINTS_TO_PIXELS_dyn();

};

} // end namespace com
} // end namespace ancientsheep
} // end namespace particles

#endif /* INCLUDED_com_ancientsheep_particles_ASMacros */ 
