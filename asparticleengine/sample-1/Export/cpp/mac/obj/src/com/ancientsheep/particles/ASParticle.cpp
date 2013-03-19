#include <hxcpp.h>

#ifndef INCLUDED_com_ancientsheep_particles_ASParticle
#include <com/ancientsheep/particles/ASParticle.h>
#endif
#ifndef INCLUDED_neash_geom_Point
#include <neash/geom/Point.h>
#endif
namespace com{
namespace ancientsheep{
namespace particles{

Void ASParticle_obj::__construct()
{
{
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticle.hx",29)
	this->pos = ::neash::geom::Point_obj::__new(null(),null());
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticle.hx",30)
	this->startPos = ::neash::geom::Point_obj::__new(null(),null());
	struct _Function_1_1{
		inline static Dynamic Block( ){
			{
				hx::Anon __result = hx::Anon_obj::Create();
				struct _Function_2_1{
					inline static Dynamic Block( ){
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("gravity") , ::neash::geom::Point_obj::__new(null(),null()),false);
							__result->Add(HX_CSTRING("dir") , ::neash::geom::Point_obj::__new(null(),null()),false);
							__result->Add(HX_CSTRING("speed") , .0,false);
							__result->Add(HX_CSTRING("speedVar") , .0,false);
							__result->Add(HX_CSTRING("tangentialAccel") , .0,false);
							__result->Add(HX_CSTRING("tangentialAccelVar") , .0,false);
							__result->Add(HX_CSTRING("radialAccel") , .0,false);
							__result->Add(HX_CSTRING("radialAccelVar") , .0,false);
							return __result;
						}
						return null();
					}
				};
				__result->Add(HX_CSTRING("A") , _Function_2_1::Block(),false);
				struct _Function_2_2{
					inline static Dynamic Block( ){
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("startRadius") , .0,false);
							__result->Add(HX_CSTRING("startRadiusVar") , .0,false);
							__result->Add(HX_CSTRING("endRadius") , .0,false);
							__result->Add(HX_CSTRING("endRadiusVar") , .0,false);
							__result->Add(HX_CSTRING("rotatePerSecond") , .0,false);
							__result->Add(HX_CSTRING("rotatePerSecondVar") , .0,false);
							__result->Add(HX_CSTRING("deltaRadius") , .0,false);
							__result->Add(HX_CSTRING("angle") , .0,false);
							__result->Add(HX_CSTRING("degreesPerSecond") , .0,false);
							__result->Add(HX_CSTRING("radius") , .0,false);
							return __result;
						}
						return null();
					}
				};
				__result->Add(HX_CSTRING("B") , _Function_2_2::Block(),false);
				return __result;
			}
			return null();
		}
	};
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticle.hx",33)
	this->mode = _Function_1_1::Block();
}
;
	return null();
}

ASParticle_obj::~ASParticle_obj() { }

Dynamic ASParticle_obj::__CreateEmpty() { return  new ASParticle_obj; }
hx::ObjectPtr< ASParticle_obj > ASParticle_obj::__new()
{  hx::ObjectPtr< ASParticle_obj > result = new ASParticle_obj();
	result->__construct();
	return result;}

Dynamic ASParticle_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ASParticle_obj > result = new ASParticle_obj();
	result->__construct();
	return result;}


ASParticle_obj::ASParticle_obj()
{
}

void ASParticle_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ASParticle);
	HX_MARK_MEMBER_NAME(pos,"pos");
	HX_MARK_MEMBER_NAME(startPos,"startPos");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(deltaColor,"deltaColor");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(deltaSize,"deltaSize");
	HX_MARK_MEMBER_NAME(rotation,"rotation");
	HX_MARK_MEMBER_NAME(deltaRotation,"deltaRotation");
	HX_MARK_MEMBER_NAME(timeToLive,"timeToLive");
	HX_MARK_MEMBER_NAME(mode,"mode");
	HX_MARK_END_CLASS();
}

Dynamic ASParticle_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { return pos; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { return size; }
		if (HX_FIELD_EQ(inName,"mode") ) { return mode; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"startPos") ) { return startPos; }
		if (HX_FIELD_EQ(inName,"rotation") ) { return rotation; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"deltaSize") ) { return deltaSize; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"deltaColor") ) { return deltaColor; }
		if (HX_FIELD_EQ(inName,"timeToLive") ) { return timeToLive; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"deltaRotation") ) { return deltaRotation; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ASParticle_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { pos=inValue.Cast< ::neash::geom::Point >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast< double >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mode") ) { mode=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"startPos") ) { startPos=inValue.Cast< ::neash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rotation") ) { rotation=inValue.Cast< double >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"deltaSize") ) { deltaSize=inValue.Cast< double >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"deltaColor") ) { deltaColor=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"timeToLive") ) { timeToLive=inValue.Cast< double >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"deltaRotation") ) { deltaRotation=inValue.Cast< double >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ASParticle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("pos"));
	outFields->push(HX_CSTRING("startPos"));
	outFields->push(HX_CSTRING("color"));
	outFields->push(HX_CSTRING("deltaColor"));
	outFields->push(HX_CSTRING("size"));
	outFields->push(HX_CSTRING("deltaSize"));
	outFields->push(HX_CSTRING("rotation"));
	outFields->push(HX_CSTRING("deltaRotation"));
	outFields->push(HX_CSTRING("timeToLive"));
	outFields->push(HX_CSTRING("mode"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("pos"),
	HX_CSTRING("startPos"),
	HX_CSTRING("color"),
	HX_CSTRING("deltaColor"),
	HX_CSTRING("size"),
	HX_CSTRING("deltaSize"),
	HX_CSTRING("rotation"),
	HX_CSTRING("deltaRotation"),
	HX_CSTRING("timeToLive"),
	HX_CSTRING("mode"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class ASParticle_obj::__mClass;

void ASParticle_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.ancientsheep.particles.ASParticle"), hx::TCanCast< ASParticle_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void ASParticle_obj::__boot()
{
}

} // end namespace com
} // end namespace ancientsheep
} // end namespace particles
