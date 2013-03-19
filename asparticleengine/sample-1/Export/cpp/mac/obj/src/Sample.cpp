#include <hxcpp.h>

#ifndef INCLUDED_Sample
#include <Sample.h>
#endif
#ifndef INCLUDED_com_ancientsheep_particles_ASParticleSystem
#include <com/ancientsheep/particles/ASParticleSystem.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_neash_display_DisplayObject
#include <neash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_neash_display_DisplayObjectContainer
#include <neash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_neash_display_Graphics
#include <neash/display/Graphics.h>
#endif
#ifndef INCLUDED_neash_display_IBitmapDrawable
#include <neash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_neash_display_InteractiveObject
#include <neash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_neash_display_MovieClip
#include <neash/display/MovieClip.h>
#endif
#ifndef INCLUDED_neash_display_Sprite
#include <neash/display/Sprite.h>
#endif
#ifndef INCLUDED_neash_display_Stage
#include <neash/display/Stage.h>
#endif
#ifndef INCLUDED_neash_display_StageAlign
#include <neash/display/StageAlign.h>
#endif
#ifndef INCLUDED_neash_display_StageScaleMode
#include <neash/display/StageScaleMode.h>
#endif
#ifndef INCLUDED_neash_events_Event
#include <neash/events/Event.h>
#endif
#ifndef INCLUDED_neash_events_EventDispatcher
#include <neash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_neash_events_IEventDispatcher
#include <neash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_neash_events_KeyboardEvent
#include <neash/events/KeyboardEvent.h>
#endif
#ifndef INCLUDED_neash_events_MouseEvent
#include <neash/events/MouseEvent.h>
#endif
#ifndef INCLUDED_neash_geom_Point
#include <neash/geom/Point.h>
#endif
#ifndef INCLUDED_nme_Lib
#include <nme/Lib.h>
#endif

Void Sample_obj::__construct()
{
{
	HX_SOURCE_POS("Source/Sample.hx",29)
	super::__construct();
	HX_SOURCE_POS("Source/Sample.hx",31)
	this->currIndex = (int)0;
	HX_SOURCE_POS("Source/Sample.hx",32)
	this->systems = Array_obj< ::String >::__new();
	HX_SOURCE_POS("Source/Sample.hx",33)
	this->systems->push(HX_CSTRING("comet.plist"));
	HX_SOURCE_POS("Source/Sample.hx",34)
	this->systems->push(HX_CSTRING("crazy.plist"));
	HX_SOURCE_POS("Source/Sample.hx",35)
	this->systems->push(HX_CSTRING("electrons.plist"));
	HX_SOURCE_POS("Source/Sample.hx",36)
	this->systems->push(HX_CSTRING("galaxy.plist"));
	HX_SOURCE_POS("Source/Sample.hx",37)
	this->systems->push(HX_CSTRING("airStars.plist"));
	HX_SOURCE_POS("Source/Sample.hx",38)
	this->systems->push(HX_CSTRING("boil.plist"));
	HX_SOURCE_POS("Source/Sample.hx",39)
	this->systems->push(HX_CSTRING("emit.plist"));
	HX_SOURCE_POS("Source/Sample.hx",40)
	this->systems->push(HX_CSTRING("fire.plist"));
	HX_SOURCE_POS("Source/Sample.hx",41)
	this->systems->push(HX_CSTRING("fireForest.plist"));
	HX_SOURCE_POS("Source/Sample.hx",42)
	this->systems->push(HX_CSTRING("Firework.plist"));
	HX_SOURCE_POS("Source/Sample.hx",43)
	this->systems->push(HX_CSTRING("pinkStream.plist"));
	HX_SOURCE_POS("Source/Sample.hx",44)
	this->systems->push(HX_CSTRING("pop.plist"));
	HX_SOURCE_POS("Source/Sample.hx",45)
	this->systems->push(HX_CSTRING("space.plist"));
	HX_SOURCE_POS("Source/Sample.hx",46)
	this->systems->push(HX_CSTRING("starLines.plist"));
	HX_SOURCE_POS("Source/Sample.hx",47)
	this->systems->push(HX_CSTRING("tourni.plist"));
	HX_SOURCE_POS("Source/Sample.hx",48)
	this->systems->push(HX_CSTRING("waterfall.plist"));
	HX_SOURCE_POS("Source/Sample.hx",52)
	this->init();
	HX_SOURCE_POS("Source/Sample.hx",54)
	this->addEventListener(::neash::events::Event_obj::ADDED_TO_STAGE,this->addToStage_dyn(),null(),null(),null());
}
;
	return null();
}

Sample_obj::~Sample_obj() { }

Dynamic Sample_obj::__CreateEmpty() { return  new Sample_obj; }
hx::ObjectPtr< Sample_obj > Sample_obj::__new()
{  hx::ObjectPtr< Sample_obj > result = new Sample_obj();
	result->__construct();
	return result;}

Dynamic Sample_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Sample_obj > result = new Sample_obj();
	result->__construct();
	return result;}

Void Sample_obj::init( ){
{
		HX_SOURCE_PUSH("Sample_obj::init")
		HX_SOURCE_POS("Source/Sample.hx",59)
		::nme::Lib_obj::nmeGetCurrent()->nmeGetStage()->nmeSetAlign(::neash::display::StageAlign_obj::TOP_LEFT_dyn());
		HX_SOURCE_POS("Source/Sample.hx",60)
		::nme::Lib_obj::nmeGetCurrent()->nmeGetStage()->nmeSetScaleMode(::neash::display::StageScaleMode_obj::NO_SCALE_dyn());
		HX_SOURCE_POS("Source/Sample.hx",61)
		::nme::Lib_obj::nmeGetCurrent()->nmeGetStage()->addEventListener(::neash::events::Event_obj::ACTIVATE,this->stage_onActivate_dyn(),null(),null(),null());
		HX_SOURCE_POS("Source/Sample.hx",62)
		::nme::Lib_obj::nmeGetCurrent()->nmeGetStage()->addEventListener(::neash::events::Event_obj::DEACTIVATE,this->stage_onDeactivate_dyn(),null(),null(),null());
		HX_SOURCE_POS("Source/Sample.hx",65)
		::neash::display::Sprite bk = ::neash::display::Sprite_obj::__new();
		HX_SOURCE_POS("Source/Sample.hx",66)
		bk->nmeGetGraphics()->beginFill((int)0,null());
		HX_SOURCE_POS("Source/Sample.hx",67)
		bk->nmeGetGraphics()->drawRect((int)0,(int)0,::nme::Lib_obj::nmeGetCurrent()->nmeGetStage()->nmeGetStageWidth(),::nme::Lib_obj::nmeGetCurrent()->nmeGetStage()->nmeGetStageHeight());
		HX_SOURCE_POS("Source/Sample.hx",68)
		bk->nmeGetGraphics()->endFill();
		HX_SOURCE_POS("Source/Sample.hx",69)
		this->addChild(bk);
		HX_SOURCE_POS("Source/Sample.hx",79)
		this->particleSystem = ::com::ancientsheep::particles::ASParticleSystem_obj::particleWithFile(HX_CSTRING("galaxy.plist"),HX_CSTRING("assets/particles/"));
		HX_SOURCE_POS("Source/Sample.hx",80)
		this->addChild(this->particleSystem);
		HX_SOURCE_POS("Source/Sample.hx",83)
		this->addEventListener(::neash::events::MouseEvent_obj::MOUSE_MOVE,this->mMove_dyn(),null(),null(),null());
		HX_SOURCE_POS("Source/Sample.hx",84)
		this->addEventListener(::neash::events::MouseEvent_obj::CLICK,this->firework_dyn(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Sample_obj,init,(void))

Void Sample_obj::addToStage( ::neash::events::KeyboardEvent evt){
{
		HX_SOURCE_PUSH("Sample_obj::addToStage")
		HX_SOURCE_POS("Source/Sample.hx",91)
		this->removeEventListener(::neash::events::Event_obj::ADDED_TO_STAGE,this->addToStage_dyn(),null());
		HX_SOURCE_POS("Source/Sample.hx",92)
		this->nmeGetStage()->addEventListener(::neash::events::KeyboardEvent_obj::KEY_DOWN,this->switchParticles_dyn(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Sample_obj,addToStage,(void))

Void Sample_obj::switchParticles( ::neash::events::KeyboardEvent key){
{
		HX_SOURCE_PUSH("Sample_obj::switchParticles")
		HX_SOURCE_POS("Source/Sample.hx",97)
		::haxe::Log_obj::trace((HX_CSTRING("Keydown - ") + this->currIndex),hx::SourceInfo(HX_CSTRING("Sample.hx"),97,HX_CSTRING("Sample"),HX_CSTRING("switchParticles")));
		HX_SOURCE_POS("Source/Sample.hx",99)
		if (((this->particleSystem != null()))){
			HX_SOURCE_POS("Source/Sample.hx",101)
			this->removeChild(this->particleSystem);
			HX_SOURCE_POS("Source/Sample.hx",102)
			this->particleSystem->destroy();
			HX_SOURCE_POS("Source/Sample.hx",103)
			this->particleSystem = null();
		}
		HX_SOURCE_POS("Source/Sample.hx",107)
		(this->currIndex)++;
		HX_SOURCE_POS("Source/Sample.hx",108)
		if (((this->currIndex >= this->systems->length))){
			HX_SOURCE_POS("Source/Sample.hx",109)
			this->currIndex = (int)0;
		}
		HX_SOURCE_POS("Source/Sample.hx",111)
		::haxe::Log_obj::trace((HX_CSTRING("currIndex=") + this->currIndex),hx::SourceInfo(HX_CSTRING("Sample.hx"),111,HX_CSTRING("Sample"),HX_CSTRING("switchParticles")));
		HX_SOURCE_POS("Source/Sample.hx",113)
		::String psystem = this->systems->__get(this->currIndex);
		HX_SOURCE_POS("Source/Sample.hx",115)
		this->particleSystem = ::com::ancientsheep::particles::ASParticleSystem_obj::particleWithFile(psystem,HX_CSTRING("assets/particles/"));
		HX_SOURCE_POS("Source/Sample.hx",116)
		this->addChild(this->particleSystem);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Sample_obj,switchParticles,(void))

Void Sample_obj::mMove( ::neash::events::MouseEvent evt){
{
		HX_SOURCE_PUSH("Sample_obj::mMove")
		HX_SOURCE_POS("Source/Sample.hx",120)
		if (((this->particleSystem != null()))){
			HX_SOURCE_POS("Source/Sample.hx",123)
			this->particleSystem->position = ::neash::geom::Point_obj::__new(this->nmeGetMouseX(),this->nmeGetMouseY());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Sample_obj,mMove,(void))

Void Sample_obj::firework( ::neash::events::MouseEvent evt){
{
		HX_SOURCE_PUSH("Sample_obj::firework")
		HX_SOURCE_POS("Source/Sample.hx",128)
		::com::ancientsheep::particles::ASParticleSystem ps = ::com::ancientsheep::particles::ASParticleSystem_obj::particleWithFile(this->systems->__get(this->currIndex),HX_CSTRING("assets/particles/"));
		HX_SOURCE_POS("Source/Sample.hx",130)
		ps->position = ::neash::geom::Point_obj::__new(this->nmeGetMouseX(),this->nmeGetMouseY());
		HX_SOURCE_POS("Source/Sample.hx",131)
		this->addChild(ps);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Sample_obj,firework,(void))

Void Sample_obj::stage_onActivate( ::neash::events::Event event){
{
		HX_SOURCE_PUSH("Sample_obj::stage_onActivate")
		HX_SOURCE_POS("Source/Sample.hx",137)
		::haxe::Log_obj::trace(HX_CSTRING("stage_onActivate"),hx::SourceInfo(HX_CSTRING("Sample.hx"),138,HX_CSTRING("Sample"),HX_CSTRING("stage_onActivate")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Sample_obj,stage_onActivate,(void))

Void Sample_obj::stage_onDeactivate( ::neash::events::Event event){
{
		HX_SOURCE_PUSH("Sample_obj::stage_onDeactivate")
		HX_SOURCE_POS("Source/Sample.hx",142)
		::haxe::Log_obj::trace(HX_CSTRING("stage_onDeactivate"),hx::SourceInfo(HX_CSTRING("Sample.hx"),143,HX_CSTRING("Sample"),HX_CSTRING("stage_onDeactivate")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Sample_obj,stage_onDeactivate,(void))

Void Sample_obj::main( ){
{
		HX_SOURCE_PUSH("Sample_obj::main")
		HX_SOURCE_POS("Source/Sample.hx",147)
		::nme::Lib_obj::nmeGetCurrent()->addChild(::Sample_obj::__new());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sample_obj,main,(void))


Sample_obj::Sample_obj()
{
}

void Sample_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Sample);
	HX_MARK_MEMBER_NAME(particleSystem,"particleSystem");
	HX_MARK_MEMBER_NAME(systems,"systems");
	HX_MARK_MEMBER_NAME(currIndex,"currIndex");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

Dynamic Sample_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { return main_dyn(); }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"mMove") ) { return mMove_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"systems") ) { return systems; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"firework") ) { return firework_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"currIndex") ) { return currIndex; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"addToStage") ) { return addToStage_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"particleSystem") ) { return particleSystem; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"switchParticles") ) { return switchParticles_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"stage_onActivate") ) { return stage_onActivate_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"stage_onDeactivate") ) { return stage_onDeactivate_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Sample_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"systems") ) { systems=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"currIndex") ) { currIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"particleSystem") ) { particleSystem=inValue.Cast< ::com::ancientsheep::particles::ASParticleSystem >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Sample_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("particleSystem"));
	outFields->push(HX_CSTRING("systems"));
	outFields->push(HX_CSTRING("currIndex"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("main"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("particleSystem"),
	HX_CSTRING("systems"),
	HX_CSTRING("currIndex"),
	HX_CSTRING("init"),
	HX_CSTRING("addToStage"),
	HX_CSTRING("switchParticles"),
	HX_CSTRING("mMove"),
	HX_CSTRING("firework"),
	HX_CSTRING("stage_onActivate"),
	HX_CSTRING("stage_onDeactivate"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class Sample_obj::__mClass;

void Sample_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("Sample"), hx::TCanCast< Sample_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Sample_obj::__boot()
{
}

