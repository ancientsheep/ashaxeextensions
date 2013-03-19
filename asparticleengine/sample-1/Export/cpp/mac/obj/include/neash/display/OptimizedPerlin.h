#ifndef INCLUDED_neash_display_OptimizedPerlin
#define INCLUDED_neash_display_OptimizedPerlin

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(neash,display,BitmapData)
HX_DECLARE_CLASS2(neash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(neash,display,OptimizedPerlin)
namespace neash{
namespace display{


class OptimizedPerlin_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef OptimizedPerlin_obj OBJ_;
		OptimizedPerlin_obj();
		Void __construct(hx::Null< int >  __o_seed,hx::Null< int >  __o_octaves,hx::Null< double >  __o_falloff);

	public:
		static hx::ObjectPtr< OptimizedPerlin_obj > __new(hx::Null< int >  __o_seed,hx::Null< int >  __o_octaves,hx::Null< double >  __o_falloff);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~OptimizedPerlin_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("OptimizedPerlin"); }

		int octaves; /* REM */ 
		Array< double > aOctFreq; /* REM */ 
		Array< double > aOctPers; /* REM */ 
		double fPersMax; /* REM */ 
		double iXoffset; /* REM */ 
		double iYoffset; /* REM */ 
		double iZoffset; /* REM */ 
		double baseFactor; /* REM */ 
		virtual Void fill( ::neash::display::BitmapData bitmap,double _x,double _y,double _z,Dynamic _);
		Dynamic fill_dyn();

		virtual Void octFreqPers( double fPersistence);
		Dynamic octFreqPers_dyn();

		virtual Void seedOffset( int iSeed);
		Dynamic seedOffset_dyn();

		static Array< int > P; /* REM */ 
};

} // end namespace neash
} // end namespace display

#endif /* INCLUDED_neash_display_OptimizedPerlin */ 
