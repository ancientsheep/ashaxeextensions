#ifndef INCLUDED_com_ancientsheep_particles_ASSize
#define INCLUDED_com_ancientsheep_particles_ASSize

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,ancientsheep,particles,ASSize)
namespace com{
namespace ancientsheep{
namespace particles{


class ASSize_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ASSize_obj OBJ_;
		ASSize_obj();
		Void __construct(hx::Null< double >  __o_w,hx::Null< double >  __o_h);

	public:
		static hx::ObjectPtr< ASSize_obj > __new(hx::Null< double >  __o_w,hx::Null< double >  __o_h);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ASSize_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("ASSize"); }

		double width; /* REM */ 
		double height; /* REM */ 
		virtual ::String toString( );
		Dynamic toString_dyn();

};

} // end namespace com
} // end namespace ancientsheep
} // end namespace particles

#endif /* INCLUDED_com_ancientsheep_particles_ASSize */ 
