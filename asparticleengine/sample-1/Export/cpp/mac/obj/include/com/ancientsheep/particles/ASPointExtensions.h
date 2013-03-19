#ifndef INCLUDED_com_ancientsheep_particles_ASPointExtensions
#define INCLUDED_com_ancientsheep_particles_ASPointExtensions

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,ancientsheep,particles,ASPointExtensions)
HX_DECLARE_CLASS3(com,ancientsheep,particles,ASSize)
HX_DECLARE_CLASS3(com,ancientsheep,particles,CGAffineTransform)
HX_DECLARE_CLASS2(neash,geom,Point)
namespace com{
namespace ancientsheep{
namespace particles{


class ASPointExtensions_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ASPointExtensions_obj OBJ_;
		ASPointExtensions_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ASPointExtensions_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ASPointExtensions_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("ASPointExtensions"); }

		static double kPointEpsilon; /* REM */ 
		static ::neash::geom::Point neg( ::neash::geom::Point v);
		static Dynamic neg_dyn();

		static ::neash::geom::Point add( ::neash::geom::Point v1,::neash::geom::Point v2);
		static Dynamic add_dyn();

		static ::neash::geom::Point sub( ::neash::geom::Point v1,::neash::geom::Point v2);
		static Dynamic sub_dyn();

		static ::neash::geom::Point mult( ::neash::geom::Point v,double s);
		static Dynamic mult_dyn();

		static ::neash::geom::Point compMult( ::neash::geom::Point a,::neash::geom::Point b);
		static Dynamic compMult_dyn();

		static ::neash::geom::Point midpoint( ::neash::geom::Point v1,::neash::geom::Point v2);
		static Dynamic midpoint_dyn();

		static double dot( ::neash::geom::Point v1,::neash::geom::Point v2);
		static Dynamic dot_dyn();

		static double cross( ::neash::geom::Point v1,::neash::geom::Point v2);
		static Dynamic cross_dyn();

		static ::neash::geom::Point perp( ::neash::geom::Point v);
		static Dynamic perp_dyn();

		static ::neash::geom::Point rperp( ::neash::geom::Point v);
		static Dynamic rperp_dyn();

		static ::neash::geom::Point project( ::neash::geom::Point v1,::neash::geom::Point v2);
		static Dynamic project_dyn();

		static ::neash::geom::Point rotate( ::neash::geom::Point v1,::neash::geom::Point v2);
		static Dynamic rotate_dyn();

		static ::neash::geom::Point unrotate( ::neash::geom::Point v1,::neash::geom::Point v2);
		static Dynamic unrotate_dyn();

		static double lengthSQ( ::neash::geom::Point v);
		static Dynamic lengthSQ_dyn();

		static double length( ::neash::geom::Point v);
		static Dynamic length_dyn();

		static double distance( ::neash::geom::Point v1,::neash::geom::Point v2);
		static Dynamic distance_dyn();

		static ::neash::geom::Point normalize( ::neash::geom::Point v);
		static Dynamic normalize_dyn();

		static ::neash::geom::Point forAngle( double a);
		static Dynamic forAngle_dyn();

		static double toAngle( ::neash::geom::Point v);
		static Dynamic toAngle_dyn();

		static ::neash::geom::Point lerp( ::neash::geom::Point a,::neash::geom::Point b,double alpha);
		static Dynamic lerp_dyn();

		static double clampf( double value,double min_inclusive,double max_inclusive);
		static Dynamic clampf_dyn();

		static ::neash::geom::Point clamp( ::neash::geom::Point p,::neash::geom::Point min_inclusive,::neash::geom::Point max_inclusive);
		static Dynamic clamp_dyn();

		static ::neash::geom::Point fromSize( ::com::ancientsheep::particles::ASSize s);
		static Dynamic fromSize_dyn();

		static ::neash::geom::Point compOp( ::neash::geom::Point p,Dynamic opFunc);
		static Dynamic compOp_dyn();

		static bool fuzzyEqual( ::neash::geom::Point a,::neash::geom::Point b,double v);
		static Dynamic fuzzyEqual_dyn();

		static double angleSigned( ::neash::geom::Point a,::neash::geom::Point b);
		static Dynamic angleSigned_dyn();

		static double angle( ::neash::geom::Point a,::neash::geom::Point b);
		static Dynamic angle_dyn();

		static ::neash::geom::Point rotateByAngle( ::neash::geom::Point v,::neash::geom::Point pivot,double angle);
		static Dynamic rotateByAngle_dyn();

		static Dynamic lineIntersect( ::neash::geom::Point A,::neash::geom::Point B,::neash::geom::Point C,::neash::geom::Point D,double S,double T);
		static Dynamic lineIntersect_dyn();

		static bool segmentIntersect( ::neash::geom::Point A,::neash::geom::Point B,::neash::geom::Point C,::neash::geom::Point D);
		static Dynamic segmentIntersect_dyn();

		static ::neash::geom::Point intersectPoint( ::neash::geom::Point A,::neash::geom::Point B,::neash::geom::Point C,::neash::geom::Point D);
		static Dynamic intersectPoint_dyn();

		static bool equalToPoint( ::neash::geom::Point point,::neash::geom::Point newPoint);
		static Dynamic equalToPoint_dyn();

		static ::neash::geom::Point applyAffineTransform( ::neash::geom::Point point,::com::ancientsheep::particles::CGAffineTransform t);
		static Dynamic applyAffineTransform_dyn();

		static ::neash::geom::Point pointFromString( ::String p);
		static Dynamic pointFromString_dyn();

};

} // end namespace com
} // end namespace ancientsheep
} // end namespace particles

#endif /* INCLUDED_com_ancientsheep_particles_ASPointExtensions */ 
