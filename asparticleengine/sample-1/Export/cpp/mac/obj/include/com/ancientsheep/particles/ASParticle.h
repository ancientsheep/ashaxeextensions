#ifndef INCLUDED_com_ancientsheep_particles_ASParticle
#define INCLUDED_com_ancientsheep_particles_ASParticle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,ancientsheep,particles,ASParticle)
HX_DECLARE_CLASS2(neash,geom,Point)
namespace com{
namespace ancientsheep{
namespace particles{


class ASParticle_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ASParticle_obj OBJ_;
		ASParticle_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ASParticle_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ASParticle_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("ASParticle"); }

		::neash::geom::Point pos; /* REM */ 
		::neash::geom::Point startPos; /* REM */ 
		Dynamic color; /* REM */ 
		Dynamic deltaColor; /* REM */ 
		double size; /* REM */ 
		double deltaSize; /* REM */ 
		double rotation; /* REM */ 
		double deltaRotation; /* REM */ 
		double timeToLive; /* REM */ 
		Dynamic mode; /* REM */ 
};

} // end namespace com
} // end namespace ancientsheep
} // end namespace particles

#endif /* INCLUDED_com_ancientsheep_particles_ASParticle */ 
