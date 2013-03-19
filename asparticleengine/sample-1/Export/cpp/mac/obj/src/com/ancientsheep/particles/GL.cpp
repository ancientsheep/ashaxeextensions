#include <hxcpp.h>

#ifndef INCLUDED_com_ancientsheep_particles_GL
#include <com/ancientsheep/particles/GL.h>
#endif
namespace com{
namespace ancientsheep{
namespace particles{

::com::ancientsheep::particles::GL GL_obj::CLAMP_TO_EDGE;

::com::ancientsheep::particles::GL GL_obj::FLOAT;

::com::ancientsheep::particles::GL GL_obj::LINEAR;

::com::ancientsheep::particles::GL GL_obj::NEAREST;

::com::ancientsheep::particles::GL GL_obj::ONE;

::com::ancientsheep::particles::GL GL_obj::ONE_MINUS_SRC_ALPHA;

::com::ancientsheep::particles::GL GL_obj::REPEAT;

::com::ancientsheep::particles::GL GL_obj::SRC_ALPHA;

::com::ancientsheep::particles::GL GL_obj::TRIANGLES;

::com::ancientsheep::particles::GL GL_obj::UNSIGNED_BYTE;

::com::ancientsheep::particles::GL GL_obj::UNSIGNED_SHORT;

HX_DEFINE_CREATE_ENUM(GL_obj)

int GL_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("CLAMP_TO_EDGE")) return 4;
	if (inName==HX_CSTRING("FLOAT")) return 6;
	if (inName==HX_CSTRING("LINEAR")) return 2;
	if (inName==HX_CSTRING("NEAREST")) return 5;
	if (inName==HX_CSTRING("ONE")) return 10;
	if (inName==HX_CSTRING("ONE_MINUS_SRC_ALPHA")) return 1;
	if (inName==HX_CSTRING("REPEAT")) return 3;
	if (inName==HX_CSTRING("SRC_ALPHA")) return 0;
	if (inName==HX_CSTRING("TRIANGLES")) return 9;
	if (inName==HX_CSTRING("UNSIGNED_BYTE")) return 7;
	if (inName==HX_CSTRING("UNSIGNED_SHORT")) return 8;
	return super::__FindIndex(inName);
}

int GL_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("CLAMP_TO_EDGE")) return 0;
	if (inName==HX_CSTRING("FLOAT")) return 0;
	if (inName==HX_CSTRING("LINEAR")) return 0;
	if (inName==HX_CSTRING("NEAREST")) return 0;
	if (inName==HX_CSTRING("ONE")) return 0;
	if (inName==HX_CSTRING("ONE_MINUS_SRC_ALPHA")) return 0;
	if (inName==HX_CSTRING("REPEAT")) return 0;
	if (inName==HX_CSTRING("SRC_ALPHA")) return 0;
	if (inName==HX_CSTRING("TRIANGLES")) return 0;
	if (inName==HX_CSTRING("UNSIGNED_BYTE")) return 0;
	if (inName==HX_CSTRING("UNSIGNED_SHORT")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic GL_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("CLAMP_TO_EDGE")) return CLAMP_TO_EDGE;
	if (inName==HX_CSTRING("FLOAT")) return FLOAT;
	if (inName==HX_CSTRING("LINEAR")) return LINEAR;
	if (inName==HX_CSTRING("NEAREST")) return NEAREST;
	if (inName==HX_CSTRING("ONE")) return ONE;
	if (inName==HX_CSTRING("ONE_MINUS_SRC_ALPHA")) return ONE_MINUS_SRC_ALPHA;
	if (inName==HX_CSTRING("REPEAT")) return REPEAT;
	if (inName==HX_CSTRING("SRC_ALPHA")) return SRC_ALPHA;
	if (inName==HX_CSTRING("TRIANGLES")) return TRIANGLES;
	if (inName==HX_CSTRING("UNSIGNED_BYTE")) return UNSIGNED_BYTE;
	if (inName==HX_CSTRING("UNSIGNED_SHORT")) return UNSIGNED_SHORT;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("SRC_ALPHA"),
	HX_CSTRING("ONE_MINUS_SRC_ALPHA"),
	HX_CSTRING("LINEAR"),
	HX_CSTRING("REPEAT"),
	HX_CSTRING("CLAMP_TO_EDGE"),
	HX_CSTRING("NEAREST"),
	HX_CSTRING("FLOAT"),
	HX_CSTRING("UNSIGNED_BYTE"),
	HX_CSTRING("UNSIGNED_SHORT"),
	HX_CSTRING("TRIANGLES"),
	HX_CSTRING("ONE"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GL_obj::CLAMP_TO_EDGE,"CLAMP_TO_EDGE");
	HX_MARK_MEMBER_NAME(GL_obj::FLOAT,"FLOAT");
	HX_MARK_MEMBER_NAME(GL_obj::LINEAR,"LINEAR");
	HX_MARK_MEMBER_NAME(GL_obj::NEAREST,"NEAREST");
	HX_MARK_MEMBER_NAME(GL_obj::ONE,"ONE");
	HX_MARK_MEMBER_NAME(GL_obj::ONE_MINUS_SRC_ALPHA,"ONE_MINUS_SRC_ALPHA");
	HX_MARK_MEMBER_NAME(GL_obj::REPEAT,"REPEAT");
	HX_MARK_MEMBER_NAME(GL_obj::SRC_ALPHA,"SRC_ALPHA");
	HX_MARK_MEMBER_NAME(GL_obj::TRIANGLES,"TRIANGLES");
	HX_MARK_MEMBER_NAME(GL_obj::UNSIGNED_BYTE,"UNSIGNED_BYTE");
	HX_MARK_MEMBER_NAME(GL_obj::UNSIGNED_SHORT,"UNSIGNED_SHORT");
};

static ::String sMemberFields[] = { ::String(null()) };
Class GL_obj::__mClass;

Dynamic __Create_GL_obj() { return new GL_obj; }

void GL_obj::__register()
{

Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.ancientsheep.particles.GL"), hx::TCanCast< GL_obj >,sStaticFields,sMemberFields,
	&__Create_GL_obj, &__Create,
	&super::__SGetClass(), &CreateGL_obj, sMarkStatics);
}

void GL_obj::__boot()
{
Static(CLAMP_TO_EDGE) = hx::CreateEnum< GL_obj >(HX_CSTRING("CLAMP_TO_EDGE"),4);
Static(FLOAT) = hx::CreateEnum< GL_obj >(HX_CSTRING("FLOAT"),6);
Static(LINEAR) = hx::CreateEnum< GL_obj >(HX_CSTRING("LINEAR"),2);
Static(NEAREST) = hx::CreateEnum< GL_obj >(HX_CSTRING("NEAREST"),5);
Static(ONE) = hx::CreateEnum< GL_obj >(HX_CSTRING("ONE"),10);
Static(ONE_MINUS_SRC_ALPHA) = hx::CreateEnum< GL_obj >(HX_CSTRING("ONE_MINUS_SRC_ALPHA"),1);
Static(REPEAT) = hx::CreateEnum< GL_obj >(HX_CSTRING("REPEAT"),3);
Static(SRC_ALPHA) = hx::CreateEnum< GL_obj >(HX_CSTRING("SRC_ALPHA"),0);
Static(TRIANGLES) = hx::CreateEnum< GL_obj >(HX_CSTRING("TRIANGLES"),9);
Static(UNSIGNED_BYTE) = hx::CreateEnum< GL_obj >(HX_CSTRING("UNSIGNED_BYTE"),7);
Static(UNSIGNED_SHORT) = hx::CreateEnum< GL_obj >(HX_CSTRING("UNSIGNED_SHORT"),8);
}


} // end namespace com
} // end namespace ancientsheep
} // end namespace particles
