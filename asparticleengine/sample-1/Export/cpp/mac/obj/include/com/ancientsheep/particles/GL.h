#ifndef INCLUDED_com_ancientsheep_particles_GL
#define INCLUDED_com_ancientsheep_particles_GL

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,ancientsheep,particles,GL)
namespace com{
namespace ancientsheep{
namespace particles{


class GL_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef GL_obj OBJ_;

	public:
		GL_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("com.ancientsheep.particles.GL"); }
		::String __ToString() const { return HX_CSTRING("GL.") + tag; }

		static ::com::ancientsheep::particles::GL CLAMP_TO_EDGE;
		static inline ::com::ancientsheep::particles::GL CLAMP_TO_EDGE_dyn() { return CLAMP_TO_EDGE; }
		static ::com::ancientsheep::particles::GL FLOAT;
		static inline ::com::ancientsheep::particles::GL FLOAT_dyn() { return FLOAT; }
		static ::com::ancientsheep::particles::GL LINEAR;
		static inline ::com::ancientsheep::particles::GL LINEAR_dyn() { return LINEAR; }
		static ::com::ancientsheep::particles::GL NEAREST;
		static inline ::com::ancientsheep::particles::GL NEAREST_dyn() { return NEAREST; }
		static ::com::ancientsheep::particles::GL ONE;
		static inline ::com::ancientsheep::particles::GL ONE_dyn() { return ONE; }
		static ::com::ancientsheep::particles::GL ONE_MINUS_SRC_ALPHA;
		static inline ::com::ancientsheep::particles::GL ONE_MINUS_SRC_ALPHA_dyn() { return ONE_MINUS_SRC_ALPHA; }
		static ::com::ancientsheep::particles::GL REPEAT;
		static inline ::com::ancientsheep::particles::GL REPEAT_dyn() { return REPEAT; }
		static ::com::ancientsheep::particles::GL SRC_ALPHA;
		static inline ::com::ancientsheep::particles::GL SRC_ALPHA_dyn() { return SRC_ALPHA; }
		static ::com::ancientsheep::particles::GL TRIANGLES;
		static inline ::com::ancientsheep::particles::GL TRIANGLES_dyn() { return TRIANGLES; }
		static ::com::ancientsheep::particles::GL UNSIGNED_BYTE;
		static inline ::com::ancientsheep::particles::GL UNSIGNED_BYTE_dyn() { return UNSIGNED_BYTE; }
		static ::com::ancientsheep::particles::GL UNSIGNED_SHORT;
		static inline ::com::ancientsheep::particles::GL UNSIGNED_SHORT_dyn() { return UNSIGNED_SHORT; }
};

} // end namespace com
} // end namespace ancientsheep
} // end namespace particles

#endif /* INCLUDED_com_ancientsheep_particles_GL */ 
