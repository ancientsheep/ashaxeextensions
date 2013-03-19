#ifndef INCLUDED_com_ancientsheep_particles_ASConfig
#define INCLUDED_com_ancientsheep_particles_ASConfig

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,ancientsheep,particles,ASConfig)
namespace com{
namespace ancientsheep{
namespace particles{


class ASConfig_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ASConfig_obj OBJ_;
		ASConfig_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ASConfig_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ASConfig_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("ASConfig"); }

		static bool ASFIX_ARTIFACTS_BY_STRECHING_TEXEL; /* REM */ 
		static bool ASFONT_LABEL_SUPPORT; /* REM */ 
		static bool ASDIRECTOR_FAST_FPS; /* REM */ 
		static double ASDIRECTOR_FPS_INTERVAL; /* REM */ 
		static bool ASDIRECTOR_DISPATCH_FAST_EVENTS; /* REM */ 
		static bool ASCOCOSNODE_RENDER_SUBPIXEL; /* REM */ 
		static bool ASSPRITEBATCHNODE_RENDER_SUBPIXEL; /* REM */ 
		static bool ASUSES_VBO; /* REM */ 
		static bool ASNODE_TRANSFORM_USING_AFFINE_MATRIX; /* REM */ 
		static bool ASOPTIMIZE_BLEND_FUNC_FOR_PREMULTIPLIED_ALPHA; /* REM */ 
		static bool ASTEXTURE_ATLAS_USE_TRIANGLE_STRIP; /* REM */ 
		static bool ASTEXTURE_NPOT_SUPPORT; /* REM */ 
		static bool ASRETINA_DISPLAY_SUPPORT; /* REM */ 
		static ::String ASRETINA_DISPLAY_FILENAME_SUFFIX; /* REM */ 
		static bool ASUSE_LA88_LABELS_ON_NEON_ARCH; /* REM */ 
		static bool ASSPRITE_DEBUG_DRAW; /* REM */ 
		static bool ASSPRITEBATCHNODE_DEBUG_DRAW; /* REM */ 
		static bool ASLABELBMFONT_DEBUG_DRAW; /* REM */ 
		static bool ASLABELATLAS_DEBUG_DRAW; /* REM */ 
		static bool ASENABLE_PROFILERS; /* REM */ 
		static bool ASIS_RETINA_DISPLAY_SUPPORTED; /* REM */ 
		static int ASCONTENT_SCALE_FACTOR; /* REM */ 
};

} // end namespace com
} // end namespace ancientsheep
} // end namespace particles

#endif /* INCLUDED_com_ancientsheep_particles_ASConfig */ 
