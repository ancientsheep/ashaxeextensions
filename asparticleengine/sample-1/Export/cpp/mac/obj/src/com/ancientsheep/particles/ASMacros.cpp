#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_com_ancientsheep_particles_ASMacros
#include <com/ancientsheep/particles/ASMacros.h>
#endif
#ifndef INCLUDED_neash_geom_Rectangle
#include <neash/geom/Rectangle.h>
#endif
namespace com{
namespace ancientsheep{
namespace particles{

Void ASMacros_obj::__construct()
{
	return null();
}

ASMacros_obj::~ASMacros_obj() { }

Dynamic ASMacros_obj::__CreateEmpty() { return  new ASMacros_obj; }
hx::ObjectPtr< ASMacros_obj > ASMacros_obj::__new()
{  hx::ObjectPtr< ASMacros_obj > result = new ASMacros_obj();
	result->__construct();
	return result;}

Dynamic ASMacros_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ASMacros_obj > result = new ASMacros_obj();
	result->__construct();
	return result;}

Dynamic ASMacros_obj::ASSWAP( Dynamic x,Dynamic y){
	HX_SOURCE_PUSH("ASMacros_obj::ASSWAP")
	struct _Function_1_1{
		inline static Dynamic Block( Dynamic &y,Dynamic &x){
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("x") , y,false);
				__result->Add(HX_CSTRING("y") , x,false);
				return __result;
			}
			return null();
		}
	};
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASMacros.hx",17)
	return _Function_1_1::Block(y,x);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ASMacros_obj,ASSWAP,return )

double ASMacros_obj::RANDOM_MINUS1_1( ){
	HX_SOURCE_PUSH("ASMacros_obj::RANDOM_MINUS1_1")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASMacros.hx",24)
	return ((::Math_obj::random() * 2.0) - 1.0);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ASMacros_obj,RANDOM_MINUS1_1,return )

double ASMacros_obj::RANDOM_0_1( ){
	HX_SOURCE_PUSH("ASMacros_obj::RANDOM_0_1")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASMacros.hx",31)
	return ::Math_obj::random();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ASMacros_obj,RANDOM_0_1,return )

double ASMacros_obj::ASDEGREES_TO_RADIANS( double angle){
	HX_SOURCE_PUSH("ASMacros_obj::ASDEGREES_TO_RADIANS")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASMacros.hx",38)
	return (angle * 0.01745329252);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ASMacros_obj,ASDEGREES_TO_RADIANS,return )

double ASMacros_obj::ASRADIANS_TO_DEGREES( double angle){
	HX_SOURCE_PUSH("ASMacros_obj::ASRADIANS_TO_DEGREES")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASMacros.hx",45)
	return (angle * 57.29577951);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ASMacros_obj,ASRADIANS_TO_DEGREES,return )

::neash::geom::Rectangle ASMacros_obj::ASRectangle_PIXELS_TO_POINTS( ::neash::geom::Rectangle pixels){
	HX_SOURCE_PUSH("ASMacros_obj::ASRectangle_PIXELS_TO_POINTS")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASMacros.hx",81)
	return pixels;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ASMacros_obj,ASRectangle_PIXELS_TO_POINTS,return )

::neash::geom::Rectangle ASMacros_obj::ASRectangle_POINTS_TO_PIXELS( ::neash::geom::Rectangle points){
	HX_SOURCE_PUSH("ASMacros_obj::ASRectangle_POINTS_TO_PIXELS")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASMacros.hx",82)
	return points;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ASMacros_obj,ASRectangle_POINTS_TO_PIXELS,return )


ASMacros_obj::ASMacros_obj()
{
}

void ASMacros_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ASMacros);
	HX_MARK_END_CLASS();
}

Dynamic ASMacros_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"ASSWAP") ) { return ASSWAP_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"RANDOM_0_1") ) { return RANDOM_0_1_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"RANDOM_MINUS1_1") ) { return RANDOM_MINUS1_1_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"ASDEGREES_TO_RADIANS") ) { return ASDEGREES_TO_RADIANS_dyn(); }
		if (HX_FIELD_EQ(inName,"ASRADIANS_TO_DEGREES") ) { return ASRADIANS_TO_DEGREES_dyn(); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"ASRectangle_PIXELS_TO_POINTS") ) { return ASRectangle_PIXELS_TO_POINTS_dyn(); }
		if (HX_FIELD_EQ(inName,"ASRectangle_POINTS_TO_PIXELS") ) { return ASRectangle_POINTS_TO_PIXELS_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ASMacros_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void ASMacros_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("ASSWAP"),
	HX_CSTRING("RANDOM_MINUS1_1"),
	HX_CSTRING("RANDOM_0_1"),
	HX_CSTRING("ASDEGREES_TO_RADIANS"),
	HX_CSTRING("ASRADIANS_TO_DEGREES"),
	HX_CSTRING("ASRectangle_PIXELS_TO_POINTS"),
	HX_CSTRING("ASRectangle_POINTS_TO_PIXELS"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class ASMacros_obj::__mClass;

void ASMacros_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.ancientsheep.particles.ASMacros"), hx::TCanCast< ASMacros_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void ASMacros_obj::__boot()
{
}

} // end namespace com
} // end namespace ancientsheep
} // end namespace particles
