#ifndef INCLUDED_com_ancientsheep_particles_CGAffineTransform
#define INCLUDED_com_ancientsheep_particles_CGAffineTransform

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,ancientsheep,particles,CGAffineTransform)
HX_DECLARE_CLASS2(neash,geom,Point)
namespace com{
namespace ancientsheep{
namespace particles{


class CGAffineTransform_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CGAffineTransform_obj OBJ_;
		CGAffineTransform_obj();
		Void __construct(hx::Null< double >  __o_a,hx::Null< double >  __o_b,hx::Null< double >  __o_c,hx::Null< double >  __o_d,hx::Null< double >  __o_tx,hx::Null< double >  __o_ty);

	public:
		static hx::ObjectPtr< CGAffineTransform_obj > __new(hx::Null< double >  __o_a,hx::Null< double >  __o_b,hx::Null< double >  __o_c,hx::Null< double >  __o_d,hx::Null< double >  __o_tx,hx::Null< double >  __o_ty);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~CGAffineTransform_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("CGAffineTransform"); }

		double a; /* REM */ 
		double b; /* REM */ 
		double c; /* REM */ 
		double d; /* REM */ 
		double tx; /* REM */ 
		double ty; /* REM */ 
		virtual ::com::ancientsheep::particles::CGAffineTransform clone( );
		Dynamic clone_dyn();

		virtual Void concat( ::com::ancientsheep::particles::CGAffineTransform m);
		Dynamic concat_dyn();

		virtual ::com::ancientsheep::particles::CGAffineTransform identity( );
		Dynamic identity_dyn();

		virtual Void invert( );
		Dynamic invert_dyn();

		virtual Void rotate( double angle);
		Dynamic rotate_dyn();

		virtual Void scale( double sx,double sy);
		Dynamic scale_dyn();

		virtual Void setTo( double aa,double ba,double ca,double da,double txa,double tya);
		Dynamic setTo_dyn();

		virtual ::neash::geom::Point transformPoint( ::neash::geom::Point point);
		Dynamic transformPoint_dyn();

		virtual Void translate( double dx,double dy);
		Dynamic translate_dyn();

};

} // end namespace com
} // end namespace ancientsheep
} // end namespace particles

#endif /* INCLUDED_com_ancientsheep_particles_CGAffineTransform */ 
