#include <hxcpp.h>

#ifndef INCLUDED_com_ancientsheep_particles_ASConfig
#include <com/ancientsheep/particles/ASConfig.h>
#endif
namespace com{
namespace ancientsheep{
namespace particles{

Void ASConfig_obj::__construct()
{
	return null();
}

ASConfig_obj::~ASConfig_obj() { }

Dynamic ASConfig_obj::__CreateEmpty() { return  new ASConfig_obj; }
hx::ObjectPtr< ASConfig_obj > ASConfig_obj::__new()
{  hx::ObjectPtr< ASConfig_obj > result = new ASConfig_obj();
	result->__construct();
	return result;}

Dynamic ASConfig_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ASConfig_obj > result = new ASConfig_obj();
	result->__construct();
	return result;}

bool ASConfig_obj::ASFIX_ARTIFACTS_BY_STRECHING_TEXEL;

bool ASConfig_obj::ASFONT_LABEL_SUPPORT;

bool ASConfig_obj::ASDIRECTOR_FAST_FPS;

double ASConfig_obj::ASDIRECTOR_FPS_INTERVAL;

bool ASConfig_obj::ASDIRECTOR_DISPATCH_FAST_EVENTS;

bool ASConfig_obj::ASCOCOSNODE_RENDER_SUBPIXEL;

bool ASConfig_obj::ASSPRITEBATCHNODE_RENDER_SUBPIXEL;

bool ASConfig_obj::ASUSES_VBO;

bool ASConfig_obj::ASNODE_TRANSFORM_USING_AFFINE_MATRIX;

bool ASConfig_obj::ASOPTIMIZE_BLEND_FUNC_FOR_PREMULTIPLIED_ALPHA;

bool ASConfig_obj::ASTEXTURE_ATLAS_USE_TRIANGLE_STRIP;

bool ASConfig_obj::ASTEXTURE_NPOT_SUPPORT;

bool ASConfig_obj::ASRETINA_DISPLAY_SUPPORT;

::String ASConfig_obj::ASRETINA_DISPLAY_FILENAME_SUFFIX;

bool ASConfig_obj::ASUSE_LA88_LABELS_ON_NEON_ARCH;

bool ASConfig_obj::ASSPRITE_DEBUG_DRAW;

bool ASConfig_obj::ASSPRITEBATCHNODE_DEBUG_DRAW;

bool ASConfig_obj::ASLABELBMFONT_DEBUG_DRAW;

bool ASConfig_obj::ASLABELATLAS_DEBUG_DRAW;

bool ASConfig_obj::ASENABLE_PROFILERS;

bool ASConfig_obj::ASIS_RETINA_DISPLAY_SUPPORTED;

int ASConfig_obj::ASCONTENT_SCALE_FACTOR;


ASConfig_obj::ASConfig_obj()
{
}

void ASConfig_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ASConfig);
	HX_MARK_END_CLASS();
}

Dynamic ASConfig_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"ASUSES_VBO") ) { return ASUSES_VBO; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"ASENABLE_PROFILERS") ) { return ASENABLE_PROFILERS; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"ASDIRECTOR_FAST_FPS") ) { return ASDIRECTOR_FAST_FPS; }
		if (HX_FIELD_EQ(inName,"ASSPRITE_DEBUG_DRAW") ) { return ASSPRITE_DEBUG_DRAW; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"ASFONT_LABEL_SUPPORT") ) { return ASFONT_LABEL_SUPPORT; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"ASTEXTURE_NPOT_SUPPORT") ) { return ASTEXTURE_NPOT_SUPPORT; }
		if (HX_FIELD_EQ(inName,"ASCONTENT_SCALE_FACTOR") ) { return ASCONTENT_SCALE_FACTOR; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"ASDIRECTOR_FPS_INTERVAL") ) { return ASDIRECTOR_FPS_INTERVAL; }
		if (HX_FIELD_EQ(inName,"ASLABELATLAS_DEBUG_DRAW") ) { return ASLABELATLAS_DEBUG_DRAW; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"ASRETINA_DISPLAY_SUPPORT") ) { return ASRETINA_DISPLAY_SUPPORT; }
		if (HX_FIELD_EQ(inName,"ASLABELBMFONT_DEBUG_DRAW") ) { return ASLABELBMFONT_DEBUG_DRAW; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"ASCOCOSNODE_RENDER_SUBPIXEL") ) { return ASCOCOSNODE_RENDER_SUBPIXEL; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"ASSPRITEBATCHNODE_DEBUG_DRAW") ) { return ASSPRITEBATCHNODE_DEBUG_DRAW; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"ASIS_RETINA_DISPLAY_SUPPORTED") ) { return ASIS_RETINA_DISPLAY_SUPPORTED; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"ASUSE_LA88_LABELS_ON_NEON_ARCH") ) { return ASUSE_LA88_LABELS_ON_NEON_ARCH; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"ASDIRECTOR_DISPATCH_FAST_EVENTS") ) { return ASDIRECTOR_DISPATCH_FAST_EVENTS; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"ASRETINA_DISPLAY_FILENAME_SUFFIX") ) { return ASRETINA_DISPLAY_FILENAME_SUFFIX; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"ASSPRITEBATCHNODE_RENDER_SUBPIXEL") ) { return ASSPRITEBATCHNODE_RENDER_SUBPIXEL; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"ASFIX_ARTIFACTS_BY_STRECHING_TEXEL") ) { return ASFIX_ARTIFACTS_BY_STRECHING_TEXEL; }
		if (HX_FIELD_EQ(inName,"ASTEXTURE_ATLAS_USE_TRIANGLE_STRIP") ) { return ASTEXTURE_ATLAS_USE_TRIANGLE_STRIP; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"ASNODE_TRANSFORM_USING_AFFINE_MATRIX") ) { return ASNODE_TRANSFORM_USING_AFFINE_MATRIX; }
		break;
	case 45:
		if (HX_FIELD_EQ(inName,"ASOPTIMIZE_BLEND_FUNC_FOR_PREMULTIPLIED_ALPHA") ) { return ASOPTIMIZE_BLEND_FUNC_FOR_PREMULTIPLIED_ALPHA; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ASConfig_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"ASUSES_VBO") ) { ASUSES_VBO=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"ASENABLE_PROFILERS") ) { ASENABLE_PROFILERS=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"ASDIRECTOR_FAST_FPS") ) { ASDIRECTOR_FAST_FPS=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ASSPRITE_DEBUG_DRAW") ) { ASSPRITE_DEBUG_DRAW=inValue.Cast< bool >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"ASFONT_LABEL_SUPPORT") ) { ASFONT_LABEL_SUPPORT=inValue.Cast< bool >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"ASTEXTURE_NPOT_SUPPORT") ) { ASTEXTURE_NPOT_SUPPORT=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ASCONTENT_SCALE_FACTOR") ) { ASCONTENT_SCALE_FACTOR=inValue.Cast< int >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"ASDIRECTOR_FPS_INTERVAL") ) { ASDIRECTOR_FPS_INTERVAL=inValue.Cast< double >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ASLABELATLAS_DEBUG_DRAW") ) { ASLABELATLAS_DEBUG_DRAW=inValue.Cast< bool >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"ASRETINA_DISPLAY_SUPPORT") ) { ASRETINA_DISPLAY_SUPPORT=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ASLABELBMFONT_DEBUG_DRAW") ) { ASLABELBMFONT_DEBUG_DRAW=inValue.Cast< bool >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"ASCOCOSNODE_RENDER_SUBPIXEL") ) { ASCOCOSNODE_RENDER_SUBPIXEL=inValue.Cast< bool >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"ASSPRITEBATCHNODE_DEBUG_DRAW") ) { ASSPRITEBATCHNODE_DEBUG_DRAW=inValue.Cast< bool >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"ASIS_RETINA_DISPLAY_SUPPORTED") ) { ASIS_RETINA_DISPLAY_SUPPORTED=inValue.Cast< bool >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"ASUSE_LA88_LABELS_ON_NEON_ARCH") ) { ASUSE_LA88_LABELS_ON_NEON_ARCH=inValue.Cast< bool >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"ASDIRECTOR_DISPATCH_FAST_EVENTS") ) { ASDIRECTOR_DISPATCH_FAST_EVENTS=inValue.Cast< bool >(); return inValue; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"ASRETINA_DISPLAY_FILENAME_SUFFIX") ) { ASRETINA_DISPLAY_FILENAME_SUFFIX=inValue.Cast< ::String >(); return inValue; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"ASSPRITEBATCHNODE_RENDER_SUBPIXEL") ) { ASSPRITEBATCHNODE_RENDER_SUBPIXEL=inValue.Cast< bool >(); return inValue; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"ASFIX_ARTIFACTS_BY_STRECHING_TEXEL") ) { ASFIX_ARTIFACTS_BY_STRECHING_TEXEL=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ASTEXTURE_ATLAS_USE_TRIANGLE_STRIP") ) { ASTEXTURE_ATLAS_USE_TRIANGLE_STRIP=inValue.Cast< bool >(); return inValue; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"ASNODE_TRANSFORM_USING_AFFINE_MATRIX") ) { ASNODE_TRANSFORM_USING_AFFINE_MATRIX=inValue.Cast< bool >(); return inValue; }
		break;
	case 45:
		if (HX_FIELD_EQ(inName,"ASOPTIMIZE_BLEND_FUNC_FOR_PREMULTIPLIED_ALPHA") ) { ASOPTIMIZE_BLEND_FUNC_FOR_PREMULTIPLIED_ALPHA=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ASConfig_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("ASFIX_ARTIFACTS_BY_STRECHING_TEXEL"),
	HX_CSTRING("ASFONT_LABEL_SUPPORT"),
	HX_CSTRING("ASDIRECTOR_FAST_FPS"),
	HX_CSTRING("ASDIRECTOR_FPS_INTERVAL"),
	HX_CSTRING("ASDIRECTOR_DISPATCH_FAST_EVENTS"),
	HX_CSTRING("ASCOCOSNODE_RENDER_SUBPIXEL"),
	HX_CSTRING("ASSPRITEBATCHNODE_RENDER_SUBPIXEL"),
	HX_CSTRING("ASUSES_VBO"),
	HX_CSTRING("ASNODE_TRANSFORM_USING_AFFINE_MATRIX"),
	HX_CSTRING("ASOPTIMIZE_BLEND_FUNC_FOR_PREMULTIPLIED_ALPHA"),
	HX_CSTRING("ASTEXTURE_ATLAS_USE_TRIANGLE_STRIP"),
	HX_CSTRING("ASTEXTURE_NPOT_SUPPORT"),
	HX_CSTRING("ASRETINA_DISPLAY_SUPPORT"),
	HX_CSTRING("ASRETINA_DISPLAY_FILENAME_SUFFIX"),
	HX_CSTRING("ASUSE_LA88_LABELS_ON_NEON_ARCH"),
	HX_CSTRING("ASSPRITE_DEBUG_DRAW"),
	HX_CSTRING("ASSPRITEBATCHNODE_DEBUG_DRAW"),
	HX_CSTRING("ASLABELBMFONT_DEBUG_DRAW"),
	HX_CSTRING("ASLABELATLAS_DEBUG_DRAW"),
	HX_CSTRING("ASENABLE_PROFILERS"),
	HX_CSTRING("ASIS_RETINA_DISPLAY_SUPPORTED"),
	HX_CSTRING("ASCONTENT_SCALE_FACTOR"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ASConfig_obj::ASFIX_ARTIFACTS_BY_STRECHING_TEXEL,"ASFIX_ARTIFACTS_BY_STRECHING_TEXEL");
	HX_MARK_MEMBER_NAME(ASConfig_obj::ASFONT_LABEL_SUPPORT,"ASFONT_LABEL_SUPPORT");
	HX_MARK_MEMBER_NAME(ASConfig_obj::ASDIRECTOR_FAST_FPS,"ASDIRECTOR_FAST_FPS");
	HX_MARK_MEMBER_NAME(ASConfig_obj::ASDIRECTOR_FPS_INTERVAL,"ASDIRECTOR_FPS_INTERVAL");
	HX_MARK_MEMBER_NAME(ASConfig_obj::ASDIRECTOR_DISPATCH_FAST_EVENTS,"ASDIRECTOR_DISPATCH_FAST_EVENTS");
	HX_MARK_MEMBER_NAME(ASConfig_obj::ASCOCOSNODE_RENDER_SUBPIXEL,"ASCOCOSNODE_RENDER_SUBPIXEL");
	HX_MARK_MEMBER_NAME(ASConfig_obj::ASSPRITEBATCHNODE_RENDER_SUBPIXEL,"ASSPRITEBATCHNODE_RENDER_SUBPIXEL");
	HX_MARK_MEMBER_NAME(ASConfig_obj::ASUSES_VBO,"ASUSES_VBO");
	HX_MARK_MEMBER_NAME(ASConfig_obj::ASNODE_TRANSFORM_USING_AFFINE_MATRIX,"ASNODE_TRANSFORM_USING_AFFINE_MATRIX");
	HX_MARK_MEMBER_NAME(ASConfig_obj::ASOPTIMIZE_BLEND_FUNC_FOR_PREMULTIPLIED_ALPHA,"ASOPTIMIZE_BLEND_FUNC_FOR_PREMULTIPLIED_ALPHA");
	HX_MARK_MEMBER_NAME(ASConfig_obj::ASTEXTURE_ATLAS_USE_TRIANGLE_STRIP,"ASTEXTURE_ATLAS_USE_TRIANGLE_STRIP");
	HX_MARK_MEMBER_NAME(ASConfig_obj::ASTEXTURE_NPOT_SUPPORT,"ASTEXTURE_NPOT_SUPPORT");
	HX_MARK_MEMBER_NAME(ASConfig_obj::ASRETINA_DISPLAY_SUPPORT,"ASRETINA_DISPLAY_SUPPORT");
	HX_MARK_MEMBER_NAME(ASConfig_obj::ASRETINA_DISPLAY_FILENAME_SUFFIX,"ASRETINA_DISPLAY_FILENAME_SUFFIX");
	HX_MARK_MEMBER_NAME(ASConfig_obj::ASUSE_LA88_LABELS_ON_NEON_ARCH,"ASUSE_LA88_LABELS_ON_NEON_ARCH");
	HX_MARK_MEMBER_NAME(ASConfig_obj::ASSPRITE_DEBUG_DRAW,"ASSPRITE_DEBUG_DRAW");
	HX_MARK_MEMBER_NAME(ASConfig_obj::ASSPRITEBATCHNODE_DEBUG_DRAW,"ASSPRITEBATCHNODE_DEBUG_DRAW");
	HX_MARK_MEMBER_NAME(ASConfig_obj::ASLABELBMFONT_DEBUG_DRAW,"ASLABELBMFONT_DEBUG_DRAW");
	HX_MARK_MEMBER_NAME(ASConfig_obj::ASLABELATLAS_DEBUG_DRAW,"ASLABELATLAS_DEBUG_DRAW");
	HX_MARK_MEMBER_NAME(ASConfig_obj::ASENABLE_PROFILERS,"ASENABLE_PROFILERS");
	HX_MARK_MEMBER_NAME(ASConfig_obj::ASIS_RETINA_DISPLAY_SUPPORTED,"ASIS_RETINA_DISPLAY_SUPPORTED");
	HX_MARK_MEMBER_NAME(ASConfig_obj::ASCONTENT_SCALE_FACTOR,"ASCONTENT_SCALE_FACTOR");
};

Class ASConfig_obj::__mClass;

void ASConfig_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.ancientsheep.particles.ASConfig"), hx::TCanCast< ASConfig_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void ASConfig_obj::__boot()
{
	hx::Static(ASFIX_ARTIFACTS_BY_STRECHING_TEXEL) = false;
	hx::Static(ASFONT_LABEL_SUPPORT) = true;
	hx::Static(ASDIRECTOR_FAST_FPS) = true;
	hx::Static(ASDIRECTOR_FPS_INTERVAL) = 0.1;
	hx::Static(ASDIRECTOR_DISPATCH_FAST_EVENTS) = false;
	hx::Static(ASCOCOSNODE_RENDER_SUBPIXEL) = true;
	hx::Static(ASSPRITEBATCHNODE_RENDER_SUBPIXEL) = true;
	hx::Static(ASUSES_VBO) = true;
	hx::Static(ASNODE_TRANSFORM_USING_AFFINE_MATRIX) = true;
	hx::Static(ASOPTIMIZE_BLEND_FUNC_FOR_PREMULTIPLIED_ALPHA) = true;
	hx::Static(ASTEXTURE_ATLAS_USE_TRIANGLE_STRIP) = false;
	hx::Static(ASTEXTURE_NPOT_SUPPORT) = false;
	hx::Static(ASRETINA_DISPLAY_SUPPORT) = true;
	hx::Static(ASRETINA_DISPLAY_FILENAME_SUFFIX) = HX_CSTRING("-hd");
	hx::Static(ASUSE_LA88_LABELS_ON_NEON_ARCH) = false;
	hx::Static(ASSPRITE_DEBUG_DRAW) = false;
	hx::Static(ASSPRITEBATCHNODE_DEBUG_DRAW) = false;
	hx::Static(ASLABELBMFONT_DEBUG_DRAW) = false;
	hx::Static(ASLABELATLAS_DEBUG_DRAW) = false;
	hx::Static(ASENABLE_PROFILERS) = false;
	hx::Static(ASIS_RETINA_DISPLAY_SUPPORTED) = false;
	hx::Static(ASCONTENT_SCALE_FACTOR) = (int)1;
}

} // end namespace com
} // end namespace ancientsheep
} // end namespace particles
