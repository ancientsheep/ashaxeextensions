#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_com_ancientsheep_particles_ASConfig
#include <com/ancientsheep/particles/ASConfig.h>
#endif
#ifndef INCLUDED_com_ancientsheep_particles_ASMacros
#include <com/ancientsheep/particles/ASMacros.h>
#endif
#ifndef INCLUDED_com_ancientsheep_particles_ASParticle
#include <com/ancientsheep/particles/ASParticle.h>
#endif
#ifndef INCLUDED_com_ancientsheep_particles_ASParticleSystem
#include <com/ancientsheep/particles/ASParticleSystem.h>
#endif
#ifndef INCLUDED_com_ancientsheep_particles_ASPointExtensions
#include <com/ancientsheep/particles/ASPointExtensions.h>
#endif
#ifndef INCLUDED_com_ancientsheep_particles_GL
#include <com/ancientsheep/particles/GL.h>
#endif
#ifndef INCLUDED_com_ancientsheep_particles_NSDictionary
#include <com/ancientsheep/particles/NSDictionary.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_neash_display_Bitmap
#include <neash/display/Bitmap.h>
#endif
#ifndef INCLUDED_neash_display_BitmapData
#include <neash/display/BitmapData.h>
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
#ifndef INCLUDED_neash_display_Sprite
#include <neash/display/Sprite.h>
#endif
#ifndef INCLUDED_neash_display_Tilesheet
#include <neash/display/Tilesheet.h>
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
#ifndef INCLUDED_neash_geom_Point
#include <neash/geom/Point.h>
#endif
#ifndef INCLUDED_neash_geom_Rectangle
#include <neash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_nme_installer_Assets
#include <nme/installer/Assets.h>
#endif
namespace com{
namespace ancientsheep{
namespace particles{

Void ASParticleSystem_obj::__construct()
{
{
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",321)
	super::__construct();
}
;
	return null();
}

ASParticleSystem_obj::~ASParticleSystem_obj() { }

Dynamic ASParticleSystem_obj::__CreateEmpty() { return  new ASParticleSystem_obj; }
hx::ObjectPtr< ASParticleSystem_obj > ASParticleSystem_obj::__new()
{  hx::ObjectPtr< ASParticleSystem_obj > result = new ASParticleSystem_obj();
	result->__construct();
	return result;}

Dynamic ASParticleSystem_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ASParticleSystem_obj > result = new ASParticleSystem_obj();
	result->__construct();
	return result;}

::com::ancientsheep::particles::ASParticleSystem ASParticleSystem_obj::initWithFile( ::String plistFile,::String pAssets){
	HX_SOURCE_PUSH("ASParticleSystem_obj::initWithFile")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",349)
	this->assetsPath = pAssets;
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",350)
	::String path = (pAssets + plistFile);
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",353)
	::com::ancientsheep::particles::NSDictionary dict = ::com::ancientsheep::particles::NSDictionary_obj::dictionaryWithContentsOfFile(path);
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",355)
	if (((dict == null()))){
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",355)
		hx::Throw (HX_CSTRING("Particles: file not found"));
	}
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",356)
	return this->initWithDictionary(dict);
}


HX_DEFINE_DYNAMIC_FUNC2(ASParticleSystem_obj,initWithFile,return )

::com::ancientsheep::particles::ASParticleSystem ASParticleSystem_obj::initWithDictionary( ::com::ancientsheep::particles::NSDictionary dictionary){
	HX_SOURCE_PUSH("ASParticleSystem_obj::initWithDictionary")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",365)
	int maxParticles = dictionary->valueForKey(HX_CSTRING("maxParticles"));
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",367)
	this->initWithTotalParticles(maxParticles);
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",370)
	this->angle = dictionary->valueForKey(HX_CSTRING("angle"));
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",371)
	this->angleVar = dictionary->valueForKey(HX_CSTRING("angleVariance"));
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",374)
	this->duration = dictionary->valueForKey(HX_CSTRING("duration"));
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",382)
	double r;
	double g;
	double b;
	double a;
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",384)
	r = dictionary->valueForKey(HX_CSTRING("startColorRed"));
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",385)
	g = dictionary->valueForKey(HX_CSTRING("startColorGreen"));
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",386)
	b = dictionary->valueForKey(HX_CSTRING("startColorBlue"));
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",387)
	a = dictionary->valueForKey(HX_CSTRING("startColorAlpha"));
	struct _Function_1_1{
		inline static Dynamic Block( double &b,double &g,double &a,double &r){
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("r") , r,false);
				__result->Add(HX_CSTRING("g") , g,false);
				__result->Add(HX_CSTRING("b") , b,false);
				__result->Add(HX_CSTRING("a") , a,false);
				return __result;
			}
			return null();
		}
	};
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",388)
	this->startColor = _Function_1_1::Block(b,g,a,r);
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",390)
	r = dictionary->valueForKey(HX_CSTRING("startColorVarianceRed"));
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",391)
	g = dictionary->valueForKey(HX_CSTRING("startColorVarianceGreen"));
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",392)
	b = dictionary->valueForKey(HX_CSTRING("startColorVarianceBlue"));
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",393)
	a = dictionary->valueForKey(HX_CSTRING("startColorVarianceAlpha"));
	struct _Function_1_2{
		inline static Dynamic Block( double &b,double &g,double &a,double &r){
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("r") , r,false);
				__result->Add(HX_CSTRING("g") , g,false);
				__result->Add(HX_CSTRING("b") , b,false);
				__result->Add(HX_CSTRING("a") , a,false);
				return __result;
			}
			return null();
		}
	};
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",394)
	this->startColorVar = _Function_1_2::Block(b,g,a,r);
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",396)
	r = dictionary->valueForKey(HX_CSTRING("finishColorRed"));
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",397)
	g = dictionary->valueForKey(HX_CSTRING("finishColorGreen"));
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",398)
	b = dictionary->valueForKey(HX_CSTRING("finishColorBlue"));
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",399)
	a = dictionary->valueForKey(HX_CSTRING("finishColorAlpha"));
	struct _Function_1_3{
		inline static Dynamic Block( double &b,double &g,double &a,double &r){
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("r") , r,false);
				__result->Add(HX_CSTRING("g") , g,false);
				__result->Add(HX_CSTRING("b") , b,false);
				__result->Add(HX_CSTRING("a") , a,false);
				return __result;
			}
			return null();
		}
	};
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",400)
	this->endColor = _Function_1_3::Block(b,g,a,r);
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",402)
	r = dictionary->valueForKey(HX_CSTRING("finishColorVarianceRed"));
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",403)
	g = dictionary->valueForKey(HX_CSTRING("finishColorVarianceGreen"));
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",404)
	b = dictionary->valueForKey(HX_CSTRING("finishColorVarianceBlue"));
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",405)
	a = dictionary->valueForKey(HX_CSTRING("finishColorVarianceAlpha"));
	struct _Function_1_4{
		inline static Dynamic Block( double &b,double &g,double &a,double &r){
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("r") , r,false);
				__result->Add(HX_CSTRING("g") , g,false);
				__result->Add(HX_CSTRING("b") , b,false);
				__result->Add(HX_CSTRING("a") , a,false);
				return __result;
			}
			return null();
		}
	};
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",406)
	this->endColorVar = _Function_1_4::Block(b,g,a,r);
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",409)
	this->startSize = dictionary->valueForKey(HX_CSTRING("startParticleSize"));
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",410)
	this->startSizeVar = dictionary->valueForKey(HX_CSTRING("startParticleSizeVariance"));
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",411)
	this->endSize = dictionary->valueForKey(HX_CSTRING("finishParticleSize"));
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",412)
	this->endSizeVar = dictionary->valueForKey(HX_CSTRING("finishParticleSizeVariance"));
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",415)
	this->posVar = ::neash::geom::Point_obj::__new(null(),null());
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",418)
	double x = dictionary->valueForKey(HX_CSTRING("positionx"));
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",419)
	double y = dictionary->valueForKey(HX_CSTRING("positiony"));
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",422)
	this->position = ::neash::geom::Point_obj::__new(x,y);
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",424)
	this->posVar->x = dictionary->valueForKey(HX_CSTRING("positionVariancex"));
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",425)
	this->posVar->y = dictionary->valueForKey(HX_CSTRING("positionVariancey"));
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",428)
	this->startSpin = dictionary->valueForKey(HX_CSTRING("rotationStart"));
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",429)
	this->startSpinVar = dictionary->valueForKey(HX_CSTRING("rotationStartVariance"));
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",430)
	this->endSpin = dictionary->valueForKey(HX_CSTRING("rotationEnd"));
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",431)
	this->endSpinVar = dictionary->valueForKey(HX_CSTRING("rotationEndVariance"));
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",433)
	this->emitterMode = dictionary->valueForKey(HX_CSTRING("emitterType"));
	struct _Function_1_5{
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
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",436)
	this->mode = _Function_1_5::Block();
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",441)
	if (((this->emitterMode == (int)0))){
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",443)
		::haxe::Log_obj::trace(HX_CSTRING("particle system - A"),hx::SourceInfo(HX_CSTRING("ASParticleSystem.hx"),443,HX_CSTRING("com.ancientsheep.particles.ASParticleSystem"),HX_CSTRING("initWithDictionary")));
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",446)
		this->mode->__Field(HX_CSTRING("A"),true)->__Field(HX_CSTRING("gravity"),true)->__FieldRef(HX_CSTRING("x")) = dictionary->valueForKey(HX_CSTRING("gravityx"));
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",447)
		this->mode->__Field(HX_CSTRING("A"),true)->__Field(HX_CSTRING("gravity"),true)->__FieldRef(HX_CSTRING("y")) = -(dictionary->valueForKey(HX_CSTRING("gravityy")));
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",453)
		this->mode->__Field(HX_CSTRING("A"),true)->__FieldRef(HX_CSTRING("speed")) = dictionary->valueForKey(HX_CSTRING("speed"));
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",454)
		this->mode->__Field(HX_CSTRING("A"),true)->__FieldRef(HX_CSTRING("speedVar")) = dictionary->valueForKey(HX_CSTRING("speedVariance"));
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",457)
		Dynamic tmp = dictionary->valueForKey(HX_CSTRING("radialAcceleration"));
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",458)
		this->mode->__Field(HX_CSTRING("A"),true)->__FieldRef(HX_CSTRING("radialAccel")) = (  (((tmp != null()))) ? Dynamic(tmp) : Dynamic(0.0) );
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",460)
		tmp = dictionary->valueForKey(HX_CSTRING("radialAccelVariance"));
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",461)
		this->mode->__Field(HX_CSTRING("A"),true)->__FieldRef(HX_CSTRING("radialAccelVar")) = (  (((tmp != null()))) ? Dynamic(tmp) : Dynamic(0.0) );
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",464)
		tmp = dictionary->valueForKey(HX_CSTRING("tangentialAcceleration"));
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",465)
		this->mode->__Field(HX_CSTRING("A"),true)->__FieldRef(HX_CSTRING("tangentialAccel")) = (  (((tmp != null()))) ? Dynamic(tmp) : Dynamic(0.0) );
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",467)
		tmp = dictionary->valueForKey(HX_CSTRING("tangentialAccelVariance"));
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",468)
		this->mode->__Field(HX_CSTRING("A"),true)->__FieldRef(HX_CSTRING("tangentialAccelVar")) = (  (((tmp != null()))) ? Dynamic(tmp) : Dynamic(0.0) );
	}
	else{
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",473)
		if (((this->emitterMode == (int)1))){
			HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",475)
			::haxe::Log_obj::trace(HX_CSTRING("particle system - B"),hx::SourceInfo(HX_CSTRING("ASParticleSystem.hx"),475,HX_CSTRING("com.ancientsheep.particles.ASParticleSystem"),HX_CSTRING("initWithDictionary")));
			HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",477)
			double maxRadius = dictionary->valueForKey(HX_CSTRING("maxRadius"));
			HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",478)
			double maxRadiusVar = dictionary->valueForKey(HX_CSTRING("maxRadiusVariance"));
			HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",479)
			double minRadius = dictionary->valueForKey(HX_CSTRING("minRadius"));
			HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",481)
			this->mode->__Field(HX_CSTRING("B"),true)->__FieldRef(HX_CSTRING("startRadius")) = maxRadius;
			HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",482)
			this->mode->__Field(HX_CSTRING("B"),true)->__FieldRef(HX_CSTRING("startRadiusVar")) = maxRadiusVar;
			HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",483)
			this->mode->__Field(HX_CSTRING("B"),true)->__FieldRef(HX_CSTRING("endRadius")) = minRadius;
			HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",484)
			this->mode->__Field(HX_CSTRING("B"),true)->__FieldRef(HX_CSTRING("endRadiusVar")) = (int)0;
			HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",485)
			this->mode->__Field(HX_CSTRING("B"),true)->__FieldRef(HX_CSTRING("rotatePerSecond")) = dictionary->valueForKey(HX_CSTRING("rotatePerSecond"));
			HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",486)
			this->mode->__Field(HX_CSTRING("B"),true)->__FieldRef(HX_CSTRING("rotatePerSecondVar")) = dictionary->valueForKey(HX_CSTRING("rotatePerSecondVariance"));
		}
		else{
			HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",488)
			hx::Throw (HX_CSTRING("Invalid emitterType in config file"));
		}
	}
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",493)
	this->life = dictionary->valueForKey(HX_CSTRING("particleLifespan"));
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",494)
	this->lifeVar = dictionary->valueForKey(HX_CSTRING("particleLifespanVariance"));
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",497)
	this->emissionRate = (double(this->totalParticles) / double(this->life));
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",500)
	if (((bool((dictionary->valueForKey(HX_CSTRING("blendFuncDestination")) == HX_CSTRING("1"))) && bool((dictionary->valueForKey(HX_CSTRING("blendFuncSource")) == (int)770))))){
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",501)
		this->addBlendMode = true;
	}
	else{
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",506)
		this->addBlendMode = false;
	}
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",516)
	::String textureName = dictionary->valueForKey(HX_CSTRING("textureFileName"));
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",521)
	this->particleBMD = ::nme::installer::Assets_obj::getBitmapData((this->assetsPath + textureName),null());
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",523)
	this->tilesheet = ::neash::display::Tilesheet_obj::__new(this->particleBMD);
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",525)
	this->tilesheet->addTileRect(::neash::geom::Rectangle_obj::__new((int)0,(int)0,this->particleBMD->nmeGetWidth(),this->particleBMD->nmeGetHeight()),::neash::geom::Point_obj::__new((double(this->particleBMD->nmeGetWidth()) / double((int)2)),(double(this->particleBMD->nmeGetHeight()) / double((int)2))));
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",528)
	::neash::display::Bitmap tex = null();
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",530)
	if (((tex != null()))){
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",531)
		this->set_texture(tex);
	}
	else{
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",535)
		::String textureData = dictionary->valueForKey(HX_CSTRING("textureImageData"));
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",549)
		Dynamic data = null();
	}
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",559)
	this->drawList = Array_obj< double >::__new();
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",561)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(ASParticleSystem_obj,initWithDictionary,return )

::com::ancientsheep::particles::ASParticleSystem ASParticleSystem_obj::initWithTotalParticles( int numberOfParticles){
	HX_SOURCE_PUSH("ASParticleSystem_obj::initWithTotalParticles")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",567)
	::haxe::Log_obj::trace((HX_CSTRING("ASParticleSystem - initWithTotalParticles - ") + numberOfParticles),hx::SourceInfo(HX_CSTRING("ASParticleSystem.hx"),567,HX_CSTRING("com.ancientsheep.particles.ASParticleSystem"),HX_CSTRING("initWithTotalParticles")));
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",569)
	this->totalParticles = numberOfParticles;
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",571)
	this->particles = Array_obj< ::com::ancientsheep::particles::ASParticle >::__new();
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",574)
	this->active = true;
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",580)
	this->positionType_ = (int)0;
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",583)
	this->emitterMode = (int)0;
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",589)
	this->autoRemoveOnFinish = false;
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",592)
	this->updateParticleSel = this->updateQuadWithParticle(null(),null());
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",598)
	this->startSystem();
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",600)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(ASParticleSystem_obj,initWithTotalParticles,return )

Void ASParticleSystem_obj::destroy( ){
{
		HX_SOURCE_PUSH("ASParticleSystem_obj::destroy")
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",605)
		::haxe::Log_obj::trace(HX_CSTRING("ASParticleEngine :: destroy"),hx::SourceInfo(HX_CSTRING("ASParticleSystem.hx"),605,HX_CSTRING("com.ancientsheep.particles.ASParticleSystem"),HX_CSTRING("destroy")));
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",607)
		this->removeEventListener(::neash::events::Event_obj::ENTER_FRAME,this->updateSystem_dyn(),null());
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",609)
		this->particles = null();
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",610)
		this->texture_ = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ASParticleSystem_obj,destroy,(void))

bool ASParticleSystem_obj::addParticle( ){
	HX_SOURCE_PUSH("ASParticleSystem_obj::addParticle")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",617)
	if (((this->particleCount == this->totalParticles))){
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",618)
		return false;
	}
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",619)
	::com::ancientsheep::particles::ASParticle particle = ::com::ancientsheep::particles::ASParticle_obj::__new();
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",620)
	this->particles->push(particle);
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",624)
	this->initParticle(particle);
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",625)
	(this->particleCount)++;
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",627)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(ASParticleSystem_obj,addParticle,return )

Void ASParticleSystem_obj::initParticle( ::com::ancientsheep::particles::ASParticle particle){
{
		HX_SOURCE_PUSH("ASParticleSystem_obj::initParticle")
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",634)
		particle->timeToLive = (this->life + (this->lifeVar * ::com::ancientsheep::particles::ASMacros_obj::RANDOM_MINUS1_1()));
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",635)
		particle->timeToLive = ::Math_obj::max((int)0,particle->timeToLive);
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",638)
		particle->pos->x = (this->position->x + (this->posVar->x * ::com::ancientsheep::particles::ASMacros_obj::RANDOM_MINUS1_1()));
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",639)
		hx::MultEq(particle->pos->x,::com::ancientsheep::particles::ASConfig_obj::ASCONTENT_SCALE_FACTOR);
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",640)
		particle->pos->y = (this->position->y + (this->posVar->y * ::com::ancientsheep::particles::ASMacros_obj::RANDOM_MINUS1_1()));
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",641)
		hx::MultEq(particle->pos->y,::com::ancientsheep::particles::ASConfig_obj::ASCONTENT_SCALE_FACTOR);
		struct _Function_1_1{
			inline static Dynamic Block( ::com::ancientsheep::particles::ASParticleSystem_obj *__this){
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("r") , ::com::ancientsheep::particles::ASPointExtensions_obj::clampf((__this->startColor->__Field(HX_CSTRING("r"),true) + (__this->startColorVar->__Field(HX_CSTRING("r"),true) * ::com::ancientsheep::particles::ASMacros_obj::RANDOM_MINUS1_1())),(int)0,(int)1),false);
					__result->Add(HX_CSTRING("g") , ::com::ancientsheep::particles::ASPointExtensions_obj::clampf((__this->startColor->__Field(HX_CSTRING("g"),true) + (__this->startColorVar->__Field(HX_CSTRING("g"),true) * ::com::ancientsheep::particles::ASMacros_obj::RANDOM_MINUS1_1())),(int)0,(int)1),false);
					__result->Add(HX_CSTRING("b") , ::com::ancientsheep::particles::ASPointExtensions_obj::clampf((__this->startColor->__Field(HX_CSTRING("b"),true) + (__this->startColorVar->__Field(HX_CSTRING("b"),true) * ::com::ancientsheep::particles::ASMacros_obj::RANDOM_MINUS1_1())),(int)0,(int)1),false);
					__result->Add(HX_CSTRING("a") , ::com::ancientsheep::particles::ASPointExtensions_obj::clampf((__this->startColor->__Field(HX_CSTRING("a"),true) + (__this->startColorVar->__Field(HX_CSTRING("a"),true) * ::com::ancientsheep::particles::ASMacros_obj::RANDOM_MINUS1_1())),(int)0,(int)1),false);
					return __result;
				}
				return null();
			}
		};
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",644)
		Dynamic start = _Function_1_1::Block(this);
		struct _Function_1_2{
			inline static Dynamic Block( ::com::ancientsheep::particles::ASParticleSystem_obj *__this){
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("r") , ::com::ancientsheep::particles::ASPointExtensions_obj::clampf((__this->endColor->__Field(HX_CSTRING("r"),true) + (__this->endColorVar->__Field(HX_CSTRING("r"),true) * ::com::ancientsheep::particles::ASMacros_obj::RANDOM_MINUS1_1())),(int)0,(int)1),false);
					__result->Add(HX_CSTRING("g") , ::com::ancientsheep::particles::ASPointExtensions_obj::clampf((__this->endColor->__Field(HX_CSTRING("g"),true) + (__this->endColorVar->__Field(HX_CSTRING("g"),true) * ::com::ancientsheep::particles::ASMacros_obj::RANDOM_MINUS1_1())),(int)0,(int)1),false);
					__result->Add(HX_CSTRING("b") , ::com::ancientsheep::particles::ASPointExtensions_obj::clampf((__this->endColor->__Field(HX_CSTRING("b"),true) + (__this->endColorVar->__Field(HX_CSTRING("b"),true) * ::com::ancientsheep::particles::ASMacros_obj::RANDOM_MINUS1_1())),(int)0,(int)1),false);
					__result->Add(HX_CSTRING("a") , ::com::ancientsheep::particles::ASPointExtensions_obj::clampf((__this->endColor->__Field(HX_CSTRING("a"),true) + (__this->endColorVar->__Field(HX_CSTRING("a"),true) * ::com::ancientsheep::particles::ASMacros_obj::RANDOM_MINUS1_1())),(int)0,(int)1),false);
					return __result;
				}
				return null();
			}
		};
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",653)
		Dynamic end = _Function_1_2::Block(this);
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",662)
		particle->color = start;
		struct _Function_1_3{
			inline static Dynamic Block( Dynamic &end,::com::ancientsheep::particles::ASParticle &particle,Dynamic &start){
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("r") , (double(((end->__Field(HX_CSTRING("r"),true) - start->__Field(HX_CSTRING("r"),true)))) / double(particle->timeToLive)),false);
					__result->Add(HX_CSTRING("g") , (double(((end->__Field(HX_CSTRING("g"),true) - start->__Field(HX_CSTRING("g"),true)))) / double(particle->timeToLive)),false);
					__result->Add(HX_CSTRING("b") , (double(((end->__Field(HX_CSTRING("b"),true) - start->__Field(HX_CSTRING("b"),true)))) / double(particle->timeToLive)),false);
					__result->Add(HX_CSTRING("a") , (double(((end->__Field(HX_CSTRING("a"),true) - start->__Field(HX_CSTRING("a"),true)))) / double(particle->timeToLive)),false);
					return __result;
				}
				return null();
			}
		};
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",664)
		particle->deltaColor = _Function_1_3::Block(end,particle,start);
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",674)
		double startS = (this->startSize + (this->startSizeVar * ::com::ancientsheep::particles::ASMacros_obj::RANDOM_MINUS1_1()));
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",675)
		startS = ::Math_obj::max((int)0,startS);
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",676)
		hx::MultEq(startS,::com::ancientsheep::particles::ASConfig_obj::ASCONTENT_SCALE_FACTOR);
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",678)
		particle->size = startS;
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",679)
		if (((this->endSize == (int)1))){
			HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",680)
			particle->deltaSize = (int)0;
		}
		else{
			HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",682)
			double endS = (this->endSize + (this->endSizeVar * ::com::ancientsheep::particles::ASMacros_obj::RANDOM_MINUS1_1()));
			HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",683)
			endS = ::Math_obj::max((int)0,endS);
			HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",684)
			hx::MultEq(endS,::com::ancientsheep::particles::ASConfig_obj::ASCONTENT_SCALE_FACTOR);
			HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",685)
			particle->deltaSize = (double(((endS - startS))) / double(particle->timeToLive));
		}
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",689)
		double startA = (this->startSpin + (this->startSpinVar * ::com::ancientsheep::particles::ASMacros_obj::RANDOM_MINUS1_1()));
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",690)
		double endA = (this->endSpin + (this->endSpinVar * ::com::ancientsheep::particles::ASMacros_obj::RANDOM_MINUS1_1()));
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",691)
		particle->rotation = startA;
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",692)
		particle->deltaRotation = (double(((endA - startA))) / double(particle->timeToLive));
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",695)
		if (((this->positionType_ == (int)0))){
			HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",696)
			::neash::geom::Point p = ::neash::geom::Point_obj::__new((int)0,(int)0);
			HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",697)
			particle->startPos = ::com::ancientsheep::particles::ASPointExtensions_obj::mult(p,::com::ancientsheep::particles::ASConfig_obj::ASCONTENT_SCALE_FACTOR);
		}
		else{
			HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",699)
			if (((this->positionType_ == (int)1))){
				HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",701)
				::neash::geom::Point position_ = ::neash::geom::Point_obj::__new(this->nmeGetX(),this->nmeGetY());
				HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",703)
				particle->startPos = ::com::ancientsheep::particles::ASPointExtensions_obj::mult(position_,::com::ancientsheep::particles::ASConfig_obj::ASCONTENT_SCALE_FACTOR);
			}
		}
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",711)
		double a = ::com::ancientsheep::particles::ASMacros_obj::ASDEGREES_TO_RADIANS(((int)360 - ((this->angle + (this->angleVar * ::com::ancientsheep::particles::ASMacros_obj::RANDOM_MINUS1_1())))));
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",714)
		if (((this->emitterMode == (int)0))){
			HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",716)
			::neash::geom::Point v = ::neash::geom::Point_obj::__new(::Math_obj::cos(a),::Math_obj::sin(a));
			HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",717)
			double s = (this->mode->__Field(HX_CSTRING("A"),true)->__Field(HX_CSTRING("speed"),true) + (this->mode->__Field(HX_CSTRING("A"),true)->__Field(HX_CSTRING("speedVar"),true) * ::com::ancientsheep::particles::ASMacros_obj::RANDOM_MINUS1_1()));
			HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",719)
			hx::MultEq(s,::com::ancientsheep::particles::ASConfig_obj::ASCONTENT_SCALE_FACTOR);
			HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",722)
			particle->mode->__Field(HX_CSTRING("A"),true)->__FieldRef(HX_CSTRING("dir")) = ::com::ancientsheep::particles::ASPointExtensions_obj::mult(v,s);
			HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",725)
			particle->mode->__Field(HX_CSTRING("A"),true)->__FieldRef(HX_CSTRING("radialAccel")) = (this->mode->__Field(HX_CSTRING("A"),true)->__Field(HX_CSTRING("radialAccel"),true) + (this->mode->__Field(HX_CSTRING("A"),true)->__Field(HX_CSTRING("radialAccelVar"),true) * ::com::ancientsheep::particles::ASMacros_obj::RANDOM_MINUS1_1()));
			HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",726)
			hx::MultEq(particle->mode->__Field(HX_CSTRING("A"),true)->__FieldRef(HX_CSTRING("radialAccel")),::com::ancientsheep::particles::ASConfig_obj::ASCONTENT_SCALE_FACTOR);
			HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",729)
			particle->mode->__Field(HX_CSTRING("A"),true)->__FieldRef(HX_CSTRING("tangentialAccel")) = (this->mode->__Field(HX_CSTRING("A"),true)->__Field(HX_CSTRING("tangentialAccel"),true) + (this->mode->__Field(HX_CSTRING("A"),true)->__Field(HX_CSTRING("tangentialAccelVar"),true) * ::com::ancientsheep::particles::ASMacros_obj::RANDOM_MINUS1_1()));
			HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",730)
			hx::MultEq(particle->mode->__Field(HX_CSTRING("A"),true)->__FieldRef(HX_CSTRING("tangentialAccel")),::com::ancientsheep::particles::ASConfig_obj::ASCONTENT_SCALE_FACTOR);
		}
		else{
			HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",737)
			double startRadius = (this->mode->__Field(HX_CSTRING("B"),true)->__Field(HX_CSTRING("startRadius"),true) + (this->mode->__Field(HX_CSTRING("B"),true)->__Field(HX_CSTRING("startRadiusVar"),true) * ::com::ancientsheep::particles::ASMacros_obj::RANDOM_MINUS1_1()));
			HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",738)
			double endRadius = (this->mode->__Field(HX_CSTRING("B"),true)->__Field(HX_CSTRING("endRadius"),true) + (this->mode->__Field(HX_CSTRING("B"),true)->__Field(HX_CSTRING("endRadiusVar"),true) * ::com::ancientsheep::particles::ASMacros_obj::RANDOM_MINUS1_1()));
			HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",740)
			hx::MultEq(startRadius,::com::ancientsheep::particles::ASConfig_obj::ASCONTENT_SCALE_FACTOR);
			HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",741)
			hx::MultEq(endRadius,::com::ancientsheep::particles::ASConfig_obj::ASCONTENT_SCALE_FACTOR);
			HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",743)
			particle->mode->__Field(HX_CSTRING("B"),true)->__FieldRef(HX_CSTRING("radius")) = startRadius;
			HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",745)
			if (((this->mode->__Field(HX_CSTRING("B"),true)->__Field(HX_CSTRING("endRadius"),true) == (int)2))){
				HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",746)
				particle->mode->__Field(HX_CSTRING("B"),true)->__FieldRef(HX_CSTRING("deltaRadius")) = (int)0;
			}
			else{
				HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",748)
				particle->mode->__Field(HX_CSTRING("B"),true)->__FieldRef(HX_CSTRING("deltaRadius")) = (double(((endRadius - startRadius))) / double(particle->timeToLive));
			}
			HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",750)
			particle->mode->__Field(HX_CSTRING("B"),true)->__FieldRef(HX_CSTRING("angle")) = a;
			HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",751)
			particle->mode->__Field(HX_CSTRING("B"),true)->__FieldRef(HX_CSTRING("degreesPerSecond")) = ::com::ancientsheep::particles::ASMacros_obj::ASDEGREES_TO_RADIANS((this->mode->__Field(HX_CSTRING("B"),true)->__Field(HX_CSTRING("rotatePerSecond"),true) + (this->mode->__Field(HX_CSTRING("B"),true)->__Field(HX_CSTRING("rotatePerSecondVar"),true) * ::com::ancientsheep::particles::ASMacros_obj::RANDOM_MINUS1_1())));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ASParticleSystem_obj,initParticle,(void))

Void ASParticleSystem_obj::startSystem( ){
{
		HX_SOURCE_PUSH("ASParticleSystem_obj::startSystem")
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",757)
		this->addEventListener(::neash::events::Event_obj::ENTER_FRAME,this->updateSystem_dyn(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ASParticleSystem_obj,startSystem,(void))

Void ASParticleSystem_obj::updateSystem( ::neash::events::Event e){
{
		HX_SOURCE_PUSH("ASParticleSystem_obj::updateSystem")
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",763)
		this->update((double(1.0) / double(30.0)));
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",764)
		this->draw();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ASParticleSystem_obj,updateSystem,(void))

Void ASParticleSystem_obj::draw( ){
{
		HX_SOURCE_PUSH("ASParticleSystem_obj::draw")
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",770)
		this->nmeGetGraphics()->clear();
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",772)
		int TILE_FIELDS = (int)9;
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",773)
		::com::ancientsheep::particles::ASParticle particle;
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",775)
		{
			HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",775)
			int _g1 = (int)0;
			int _g = this->particles->length;
			HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",775)
			while(((_g1 < _g))){
				HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",775)
				int i = (_g1)++;
				HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",777)
				particle = this->particles->__get(i);
				HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",780)
				int index = (i * TILE_FIELDS);
				HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",782)
				this->drawList[index] = particle->pos->x;
				HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",783)
				this->drawList[(index + (int)1)] = particle->pos->y;
				HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",785)
				this->drawList[(index + (int)3)] = (double(particle->size) / double(this->particleBMD->nmeGetWidth()));
				HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",786)
				this->drawList[(index + (int)4)] = particle->rotation;
				HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",787)
				this->drawList[(index + (int)5)] = particle->color->__Field(HX_CSTRING("r"),true);
				HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",788)
				this->drawList[(index + (int)6)] = particle->color->__Field(HX_CSTRING("g"),true);
				HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",789)
				this->drawList[(index + (int)7)] = particle->color->__Field(HX_CSTRING("b"),true);
				HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",790)
				this->drawList[(index + (int)8)] = particle->color->__Field(HX_CSTRING("a"),true);
			}
		}
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",795)
		if (((this->addBlendMode == true))){
			HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",796)
			this->tilesheet->drawTiles(this->nmeGetGraphics(),this->drawList,true,(int)65551);
		}
		else{
			HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",800)
			this->tilesheet->drawTiles(this->nmeGetGraphics(),this->drawList,true,(int)15);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ASParticleSystem_obj,draw,(void))

Void ASParticleSystem_obj::stopSystem( ){
{
		HX_SOURCE_PUSH("ASParticleSystem_obj::stopSystem")
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",808)
		this->active = false;
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",809)
		this->elapsed = this->duration;
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",810)
		this->emitCounter = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ASParticleSystem_obj,stopSystem,(void))

Void ASParticleSystem_obj::resetSystem( ){
{
		HX_SOURCE_PUSH("ASParticleSystem_obj::resetSystem")
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",815)
		this->active = true;
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",816)
		this->elapsed = (int)0;
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",817)
		{
			HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",817)
			int _g1 = (int)0;
			int _g = this->particleCount;
			HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",817)
			while(((_g1 < _g))){
				HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",817)
				int particleIdx = (_g1)++;
				HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",818)
				::com::ancientsheep::particles::ASParticle p = this->particles->__get(particleIdx);
				HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",819)
				p->timeToLive = (int)0;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ASParticleSystem_obj,resetSystem,(void))

bool ASParticleSystem_obj::isFull( ){
	HX_SOURCE_PUSH("ASParticleSystem_obj::isFull")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",824)
	return (this->particleCount == this->totalParticles);
}


HX_DEFINE_DYNAMIC_FUNC0(ASParticleSystem_obj,isFull,return )

Void ASParticleSystem_obj::update( double dt){
{
		HX_SOURCE_PUSH("ASParticleSystem_obj::update")
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",836)
		if (((bool(this->active) && bool((this->emissionRate > (int)0))))){
			HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",837)
			double rate = (double(1.0) / double(this->emissionRate));
			HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",838)
			hx::AddEq(this->emitCounter,dt);
			HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",839)
			while(((bool((this->particleCount < this->totalParticles)) && bool((this->emitCounter > rate))))){
				HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",840)
				this->addParticle();
				HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",841)
				hx::SubEq(this->emitCounter,rate);
			}
			HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",844)
			hx::AddEq(this->elapsed,dt);
			HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",845)
			if (((bool((this->duration != (int)-1)) && bool((this->duration < this->elapsed))))){
				HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",846)
				this->stopSystem();
			}
		}
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",849)
		this->particleIdx = (int)0;
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",851)
		::neash::geom::Point currentPosition = ::neash::geom::Point_obj::__new((int)0,(int)0);
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",853)
		if (((this->positionType_ == (int)0))){
			HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",854)
			currentPosition = ::neash::geom::Point_obj::__new((int)0,(int)0);
			HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",855)
			hx::MultEq(currentPosition->x,::com::ancientsheep::particles::ASConfig_obj::ASCONTENT_SCALE_FACTOR);
			HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",856)
			hx::MultEq(currentPosition->y,::com::ancientsheep::particles::ASConfig_obj::ASCONTENT_SCALE_FACTOR);
		}
		else{
			HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",858)
			if (((this->positionType_ == (int)1))){
				HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",860)
				::neash::geom::Point position_ = ::neash::geom::Point_obj::__new(this->nmeGetX(),this->nmeGetY());
				HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",861)
				currentPosition = position_;
				HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",862)
				hx::MultEq(currentPosition->x,::com::ancientsheep::particles::ASConfig_obj::ASCONTENT_SCALE_FACTOR);
				HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",863)
				hx::MultEq(currentPosition->y,::com::ancientsheep::particles::ASConfig_obj::ASCONTENT_SCALE_FACTOR);
			}
		}
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",868)
		while(((this->particleIdx < this->particleCount))){
			HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",870)
			::com::ancientsheep::particles::ASParticle p = this->particles->__get(this->particleIdx);
			HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",873)
			hx::SubEq(p->timeToLive,dt);
			HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",877)
			if (((p->timeToLive > (int)0))){
				HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",880)
				if (((this->emitterMode == (int)0))){
					HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",883)
					::neash::geom::Point tmp;
					::neash::geom::Point radial;
					::neash::geom::Point tangential;
					HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",885)
					radial = ::neash::geom::Point_obj::__new((int)0,(int)0);
					HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",887)
					if (((bool((p->pos->x > (int)0)) || bool((p->pos->y > (int)0))))){
						struct _Function_5_1{
							inline static ::neash::geom::Point Block( ::com::ancientsheep::particles::ASParticle &p){
								{
									HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",888)
									::neash::geom::Point v = p->pos;
									HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",888)
									return ::com::ancientsheep::particles::ASPointExtensions_obj::mult(v,(double(1.0) / double(::Math_obj::sqrt(::com::ancientsheep::particles::ASPointExtensions_obj::lengthSQ(v)))));
								}
								return null();
							}
						};
						HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",888)
						radial = _Function_5_1::Block(p);
					}
					HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",889)
					tangential = radial;
					HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",891)
					radial = ::com::ancientsheep::particles::ASPointExtensions_obj::mult(radial,p->mode->__Field(HX_CSTRING("A"),true)->__Field(HX_CSTRING("radialAccel"),true));
					HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",894)
					double newy = tangential->x;
					HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",895)
					tangential->x = -(tangential->y);
					HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",896)
					tangential->y = newy;
					HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",897)
					tangential = ::com::ancientsheep::particles::ASPointExtensions_obj::mult(tangential,p->mode->__Field(HX_CSTRING("A"),true)->__Field(HX_CSTRING("tangentialAccel"),true));
					HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",902)
					tmp = ::com::ancientsheep::particles::ASPointExtensions_obj::add(radial,tangential);
					HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",903)
					tmp = ::com::ancientsheep::particles::ASPointExtensions_obj::add(tmp,this->mode->__Field(HX_CSTRING("A"),true)->__Field(HX_CSTRING("gravity"),true));
					HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",905)
					tmp = ::com::ancientsheep::particles::ASPointExtensions_obj::mult(tmp,dt);
					HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",906)
					p->mode->__Field(HX_CSTRING("A"),true)->__FieldRef(HX_CSTRING("dir")) = ::com::ancientsheep::particles::ASPointExtensions_obj::add(p->mode->__Field(HX_CSTRING("A"),true)->__Field(HX_CSTRING("dir"),true),tmp);
					HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",907)
					tmp = ::com::ancientsheep::particles::ASPointExtensions_obj::mult(p->mode->__Field(HX_CSTRING("A"),true)->__Field(HX_CSTRING("dir"),true),dt);
					HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",908)
					p->pos = ::com::ancientsheep::particles::ASPointExtensions_obj::add(p->pos,tmp);
				}
				else{
					HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",914)
					hx::AddEq(p->mode->__Field(HX_CSTRING("B"),true)->__FieldRef(HX_CSTRING("angle")),(p->mode->__Field(HX_CSTRING("B"),true)->__Field(HX_CSTRING("degreesPerSecond"),true) * dt));
					HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",915)
					hx::AddEq(p->mode->__Field(HX_CSTRING("B"),true)->__FieldRef(HX_CSTRING("radius")),(p->mode->__Field(HX_CSTRING("B"),true)->__Field(HX_CSTRING("deltaRadius"),true) * dt));
					HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",917)
					p->pos->x = (-(::Math_obj::cos(p->mode->__Field(HX_CSTRING("B"),true)->__Field(HX_CSTRING("angle"),true))) * p->mode->__Field(HX_CSTRING("B"),true)->__Field(HX_CSTRING("radius"),true));
					HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",918)
					p->pos->y = (-(::Math_obj::sin(p->mode->__Field(HX_CSTRING("B"),true)->__Field(HX_CSTRING("angle"),true))) * p->mode->__Field(HX_CSTRING("B"),true)->__Field(HX_CSTRING("radius"),true));
				}
				HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",922)
				hx::AddEq(p->color->__FieldRef(HX_CSTRING("r")),(p->deltaColor->__Field(HX_CSTRING("r"),true) * dt));
				HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",923)
				hx::AddEq(p->color->__FieldRef(HX_CSTRING("g")),(p->deltaColor->__Field(HX_CSTRING("g"),true) * dt));
				HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",924)
				hx::AddEq(p->color->__FieldRef(HX_CSTRING("b")),(p->deltaColor->__Field(HX_CSTRING("b"),true) * dt));
				HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",925)
				hx::AddEq(p->color->__FieldRef(HX_CSTRING("a")),(p->deltaColor->__Field(HX_CSTRING("a"),true) * dt));
				HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",928)
				hx::AddEq(p->size,(p->deltaSize * dt));
				HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",929)
				p->size = ::Math_obj::max((int)0,p->size);
				HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",932)
				hx::AddEq(p->rotation,(p->deltaRotation * dt));
				HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",938)
				::neash::geom::Point newPos = null();
				HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",940)
				if (((bool((this->positionType_ == (int)0)) || bool((this->positionType_ == (int)1))))){
					HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",942)
					::neash::geom::Point diff = ::com::ancientsheep::particles::ASPointExtensions_obj::sub(currentPosition,p->startPos);
					HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",943)
					newPos = ::com::ancientsheep::particles::ASPointExtensions_obj::sub(p->pos,diff);
				}
				else{
					HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",946)
					newPos = p->pos;
				}
				HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",954)
				(this->particleIdx)++;
			}
			else{
				HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",962)
				if (((this->particleIdx != (this->particleCount - (int)1)))){
					HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",963)
					this->particles->splice(this->particleIdx,(int)1);
				}
				HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",972)
				(this->particleCount)--;
				HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",974)
				if (((bool((this->particleCount == (int)0)) && bool(this->autoRemoveOnFinish)))){
					HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",976)
					this->nmeGetParent()->removeChild(hx::ObjectPtr<OBJ_>(this));
					HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",977)
					return null();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ASParticleSystem_obj,update,(void))

Void ASParticleSystem_obj::updateQuadWithParticle( ::com::ancientsheep::particles::ASParticle particle,::neash::geom::Point pos){
{
		HX_SOURCE_PUSH("ASParticleSystem_obj::updateQuadWithParticle")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ASParticleSystem_obj,updateQuadWithParticle,(void))

Void ASParticleSystem_obj::postStep( ){
{
		HX_SOURCE_PUSH("ASParticleSystem_obj::postStep")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ASParticleSystem_obj,postStep,(void))

::neash::display::Bitmap ASParticleSystem_obj::set_texture( ::neash::display::Bitmap texture){
	HX_SOURCE_PUSH("ASParticleSystem_obj::set_texture")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1005)
	if (((this->texture_ != null()))){
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1006)
		this->texture_ = null();
	}
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1007)
	this->texture_ = texture;
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1010)
	if (((this->texture_ != null()))){
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1013)
		this->blendFunc->__FieldRef(HX_CSTRING("src")) = ::com::ancientsheep::particles::GL_obj::SRC_ALPHA_dyn();
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1014)
		this->blendFunc->__FieldRef(HX_CSTRING("dst")) = ::com::ancientsheep::particles::GL_obj::ONE_MINUS_SRC_ALPHA_dyn();
	}
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1016)
	return this->texture_;
}


HX_DEFINE_DYNAMIC_FUNC1(ASParticleSystem_obj,set_texture,return )

::neash::display::Bitmap ASParticleSystem_obj::get_texture( ){
	HX_SOURCE_PUSH("ASParticleSystem_obj::get_texture")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1020)
	return this->texture_;
}


HX_DEFINE_DYNAMIC_FUNC0(ASParticleSystem_obj,get_texture,return )

bool ASParticleSystem_obj::set_blendAdditive( bool additive){
	HX_SOURCE_PUSH("ASParticleSystem_obj::set_blendAdditive")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1027)
	if ((additive)){
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1028)
		this->blendFunc->__FieldRef(HX_CSTRING("src")) = ::com::ancientsheep::particles::GL_obj::SRC_ALPHA_dyn();
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1029)
		this->blendFunc->__FieldRef(HX_CSTRING("dst")) = ::com::ancientsheep::particles::GL_obj::ONE_dyn();
	}
	else{
	}
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1041)
	return additive;
}


HX_DEFINE_DYNAMIC_FUNC1(ASParticleSystem_obj,set_blendAdditive,return )

bool ASParticleSystem_obj::get_blendAdditive( ){
	HX_SOURCE_PUSH("ASParticleSystem_obj::get_blendAdditive")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1045)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(ASParticleSystem_obj,get_blendAdditive,return )

double ASParticleSystem_obj::set_tangentialAccel( double t){
	HX_SOURCE_PUSH("ASParticleSystem_obj::set_tangentialAccel")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1052)
	if (((this->emitterMode != (int)0))){
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1052)
		hx::Throw (HX_CSTRING("Particle Mode should be Gravity"));
	}
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1053)
	return this->mode->__Field(HX_CSTRING("A"),true)->__FieldRef(HX_CSTRING("tangentialAccel")) = t;
}


HX_DEFINE_DYNAMIC_FUNC1(ASParticleSystem_obj,set_tangentialAccel,return )

double ASParticleSystem_obj::get_tangentialAccel( ){
	HX_SOURCE_PUSH("ASParticleSystem_obj::get_tangentialAccel")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1057)
	if (((this->emitterMode != (int)0))){
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1057)
		hx::Throw (HX_CSTRING("Particle Mode should be Gravity"));
	}
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1058)
	return this->mode->__Field(HX_CSTRING("A"),true)->__Field(HX_CSTRING("tangentialAccel"),true);
}


HX_DEFINE_DYNAMIC_FUNC0(ASParticleSystem_obj,get_tangentialAccel,return )

double ASParticleSystem_obj::set_tangentialAccelVar( double t){
	HX_SOURCE_PUSH("ASParticleSystem_obj::set_tangentialAccelVar")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1063)
	if (((this->emitterMode != (int)0))){
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1063)
		hx::Throw (HX_CSTRING("Particle Mode should be Gravity"));
	}
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1064)
	return this->mode->__Field(HX_CSTRING("A"),true)->__FieldRef(HX_CSTRING("tangentialAccelVar")) = t;
}


HX_DEFINE_DYNAMIC_FUNC1(ASParticleSystem_obj,set_tangentialAccelVar,return )

double ASParticleSystem_obj::get_tangentialAccelVar( ){
	HX_SOURCE_PUSH("ASParticleSystem_obj::get_tangentialAccelVar")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1068)
	if (((this->emitterMode != (int)0))){
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1068)
		hx::Throw (HX_CSTRING("Particle Mode should be Gravity"));
	}
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1069)
	return this->mode->__Field(HX_CSTRING("A"),true)->__Field(HX_CSTRING("tangentialAccelVar"),true);
}


HX_DEFINE_DYNAMIC_FUNC0(ASParticleSystem_obj,get_tangentialAccelVar,return )

double ASParticleSystem_obj::set_radialAccel( double t){
	HX_SOURCE_PUSH("ASParticleSystem_obj::set_radialAccel")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1074)
	if (((this->emitterMode != (int)0))){
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1074)
		hx::Throw (HX_CSTRING("Particle Mode should be Gravity"));
	}
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1075)
	return this->mode->__Field(HX_CSTRING("A"),true)->__FieldRef(HX_CSTRING("radialAccel")) = t;
}


HX_DEFINE_DYNAMIC_FUNC1(ASParticleSystem_obj,set_radialAccel,return )

double ASParticleSystem_obj::get_radialAccel( ){
	HX_SOURCE_PUSH("ASParticleSystem_obj::get_radialAccel")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1079)
	if (((this->emitterMode != (int)0))){
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1079)
		hx::Throw (HX_CSTRING("Particle Mode should be Gravity"));
	}
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1080)
	return this->mode->__Field(HX_CSTRING("A"),true)->__Field(HX_CSTRING("radialAccel"),true);
}


HX_DEFINE_DYNAMIC_FUNC0(ASParticleSystem_obj,get_radialAccel,return )

double ASParticleSystem_obj::set_radialAccelVar( double t){
	HX_SOURCE_PUSH("ASParticleSystem_obj::set_radialAccelVar")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1085)
	if (((this->emitterMode != (int)0))){
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1085)
		hx::Throw (HX_CSTRING("Particle Mode should be Gravity"));
	}
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1086)
	return this->mode->__Field(HX_CSTRING("A"),true)->__FieldRef(HX_CSTRING("radialAccelVar")) = t;
}


HX_DEFINE_DYNAMIC_FUNC1(ASParticleSystem_obj,set_radialAccelVar,return )

double ASParticleSystem_obj::get_radialAccelVar( ){
	HX_SOURCE_PUSH("ASParticleSystem_obj::get_radialAccelVar")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1090)
	if (((this->emitterMode != (int)0))){
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1090)
		hx::Throw (HX_CSTRING("Particle Mode should be Gravity"));
	}
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1091)
	return this->mode->__Field(HX_CSTRING("A"),true)->__Field(HX_CSTRING("radialAccelVar"),true);
}


HX_DEFINE_DYNAMIC_FUNC0(ASParticleSystem_obj,get_radialAccelVar,return )

::neash::geom::Point ASParticleSystem_obj::set_gravity( ::neash::geom::Point g){
	HX_SOURCE_PUSH("ASParticleSystem_obj::set_gravity")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1096)
	if (((this->emitterMode != (int)0))){
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1096)
		hx::Throw (HX_CSTRING("Particle Mode should be Gravity"));
	}
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1097)
	return this->mode->__Field(HX_CSTRING("A"),true)->__FieldRef(HX_CSTRING("gravity")) = g;
}


HX_DEFINE_DYNAMIC_FUNC1(ASParticleSystem_obj,set_gravity,return )

::neash::geom::Point ASParticleSystem_obj::get_gravity( ){
	HX_SOURCE_PUSH("ASParticleSystem_obj::get_gravity")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1101)
	if (((this->emitterMode != (int)0))){
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1101)
		hx::Throw (HX_CSTRING("Particle Mode should be Gravity"));
	}
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1102)
	return this->mode->__Field(HX_CSTRING("A"),true)->__Field(HX_CSTRING("gravity"),true);
}


HX_DEFINE_DYNAMIC_FUNC0(ASParticleSystem_obj,get_gravity,return )

double ASParticleSystem_obj::set_speed( double speed){
	HX_SOURCE_PUSH("ASParticleSystem_obj::set_speed")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1107)
	if (((this->emitterMode != (int)0))){
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1107)
		hx::Throw (HX_CSTRING("Particle Mode should be Gravity"));
	}
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1108)
	return this->mode->__Field(HX_CSTRING("A"),true)->__FieldRef(HX_CSTRING("speed")) = speed;
}


HX_DEFINE_DYNAMIC_FUNC1(ASParticleSystem_obj,set_speed,return )

double ASParticleSystem_obj::get_speed( ){
	HX_SOURCE_PUSH("ASParticleSystem_obj::get_speed")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1112)
	if (((this->emitterMode != (int)0))){
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1112)
		hx::Throw (HX_CSTRING("Particle Mode should be Gravity"));
	}
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1113)
	return this->mode->__Field(HX_CSTRING("A"),true)->__Field(HX_CSTRING("speed"),true);
}


HX_DEFINE_DYNAMIC_FUNC0(ASParticleSystem_obj,get_speed,return )

double ASParticleSystem_obj::set_speedVar( double speedVar){
	HX_SOURCE_PUSH("ASParticleSystem_obj::set_speedVar")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1118)
	if (((this->emitterMode != (int)0))){
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1118)
		hx::Throw (HX_CSTRING("Particle Mode should be Gravity"));
	}
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1119)
	return this->mode->__Field(HX_CSTRING("A"),true)->__FieldRef(HX_CSTRING("speedVar")) = speedVar;
}


HX_DEFINE_DYNAMIC_FUNC1(ASParticleSystem_obj,set_speedVar,return )

double ASParticleSystem_obj::get_speedVar( ){
	HX_SOURCE_PUSH("ASParticleSystem_obj::get_speedVar")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1123)
	if (((this->emitterMode != (int)0))){
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1123)
		hx::Throw (HX_CSTRING("Particle Mode should be Gravity"));
	}
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1124)
	return this->mode->__Field(HX_CSTRING("A"),true)->__Field(HX_CSTRING("speedVar"),true);
}


HX_DEFINE_DYNAMIC_FUNC0(ASParticleSystem_obj,get_speedVar,return )

double ASParticleSystem_obj::set_startRadius( double startRadius){
	HX_SOURCE_PUSH("ASParticleSystem_obj::set_startRadius")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1131)
	if (((this->emitterMode != (int)1))){
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1131)
		hx::Throw (HX_CSTRING("Particle Mode should be Radius"));
	}
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1132)
	return this->mode->__Field(HX_CSTRING("B"),true)->__FieldRef(HX_CSTRING("startRadius")) = startRadius;
}


HX_DEFINE_DYNAMIC_FUNC1(ASParticleSystem_obj,set_startRadius,return )

double ASParticleSystem_obj::get_startRadius( ){
	HX_SOURCE_PUSH("ASParticleSystem_obj::get_startRadius")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1136)
	if (((this->emitterMode != (int)1))){
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1136)
		hx::Throw (HX_CSTRING("Particle Mode should be Radius"));
	}
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1137)
	return this->mode->__Field(HX_CSTRING("B"),true)->__Field(HX_CSTRING("startRadius"),true);
}


HX_DEFINE_DYNAMIC_FUNC0(ASParticleSystem_obj,get_startRadius,return )

double ASParticleSystem_obj::set_startRadiusVar( double startRadiusVar){
	HX_SOURCE_PUSH("ASParticleSystem_obj::set_startRadiusVar")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1142)
	if (((this->emitterMode != (int)1))){
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1142)
		hx::Throw (HX_CSTRING("Particle Mode should be Radius"));
	}
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1143)
	return this->mode->__Field(HX_CSTRING("B"),true)->__FieldRef(HX_CSTRING("startRadiusVar")) = startRadiusVar;
}


HX_DEFINE_DYNAMIC_FUNC1(ASParticleSystem_obj,set_startRadiusVar,return )

double ASParticleSystem_obj::get_startRadiusVar( ){
	HX_SOURCE_PUSH("ASParticleSystem_obj::get_startRadiusVar")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1147)
	if (((this->emitterMode != (int)1))){
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1147)
		hx::Throw (HX_CSTRING("Particle Mode should be Radius"));
	}
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1148)
	return this->mode->__Field(HX_CSTRING("B"),true)->__Field(HX_CSTRING("startRadiusVar"),true);
}


HX_DEFINE_DYNAMIC_FUNC0(ASParticleSystem_obj,get_startRadiusVar,return )

double ASParticleSystem_obj::set_endRadius( double endRadius){
	HX_SOURCE_PUSH("ASParticleSystem_obj::set_endRadius")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1153)
	if (((this->emitterMode != (int)1))){
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1153)
		hx::Throw (HX_CSTRING("Particle Mode should be Radius"));
	}
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1154)
	return this->mode->__Field(HX_CSTRING("B"),true)->__FieldRef(HX_CSTRING("endRadius")) = endRadius;
}


HX_DEFINE_DYNAMIC_FUNC1(ASParticleSystem_obj,set_endRadius,return )

double ASParticleSystem_obj::get_endRadius( ){
	HX_SOURCE_PUSH("ASParticleSystem_obj::get_endRadius")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1158)
	if (((this->emitterMode != (int)1))){
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1158)
		hx::Throw (HX_CSTRING("Particle Mode should be Radius"));
	}
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1159)
	return this->mode->__Field(HX_CSTRING("B"),true)->__Field(HX_CSTRING("endRadius"),true);
}


HX_DEFINE_DYNAMIC_FUNC0(ASParticleSystem_obj,get_endRadius,return )

double ASParticleSystem_obj::set_endRadiusVar( double endRadiusVar){
	HX_SOURCE_PUSH("ASParticleSystem_obj::set_endRadiusVar")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1164)
	if (((this->emitterMode != (int)1))){
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1164)
		hx::Throw (HX_CSTRING("Particle Mode should be Radius"));
	}
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1165)
	return this->mode->__Field(HX_CSTRING("B"),true)->__FieldRef(HX_CSTRING("endRadiusVar")) = endRadiusVar;
}


HX_DEFINE_DYNAMIC_FUNC1(ASParticleSystem_obj,set_endRadiusVar,return )

double ASParticleSystem_obj::get_endRadiusVar( ){
	HX_SOURCE_PUSH("ASParticleSystem_obj::get_endRadiusVar")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1169)
	if (((this->emitterMode != (int)1))){
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1169)
		hx::Throw (HX_CSTRING("Particle Mode should be Radius"));
	}
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1170)
	return this->mode->__Field(HX_CSTRING("B"),true)->__Field(HX_CSTRING("endRadiusVar"),true);
}


HX_DEFINE_DYNAMIC_FUNC0(ASParticleSystem_obj,get_endRadiusVar,return )

double ASParticleSystem_obj::set_rotatePerSecond( double degrees){
	HX_SOURCE_PUSH("ASParticleSystem_obj::set_rotatePerSecond")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1175)
	if (((this->emitterMode != (int)1))){
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1175)
		hx::Throw (HX_CSTRING("Particle Mode should be Radius"));
	}
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1176)
	return this->mode->__Field(HX_CSTRING("B"),true)->__FieldRef(HX_CSTRING("rotatePerSecond")) = degrees;
}


HX_DEFINE_DYNAMIC_FUNC1(ASParticleSystem_obj,set_rotatePerSecond,return )

double ASParticleSystem_obj::get_rotatePerSecond( ){
	HX_SOURCE_PUSH("ASParticleSystem_obj::get_rotatePerSecond")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1180)
	if (((this->emitterMode != (int)1))){
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1180)
		hx::Throw (HX_CSTRING("Particle Mode should be Radius"));
	}
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1181)
	return this->mode->__Field(HX_CSTRING("B"),true)->__Field(HX_CSTRING("rotatePerSecond"),true);
}


HX_DEFINE_DYNAMIC_FUNC0(ASParticleSystem_obj,get_rotatePerSecond,return )

double ASParticleSystem_obj::set_rotatePerSecondVar( double degrees){
	HX_SOURCE_PUSH("ASParticleSystem_obj::set_rotatePerSecondVar")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1186)
	if (((this->emitterMode != (int)1))){
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1186)
		hx::Throw (HX_CSTRING("Particle Mode should be Radius"));
	}
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1187)
	return this->mode->__Field(HX_CSTRING("B"),true)->__FieldRef(HX_CSTRING("rotatePerSecondVar")) = degrees;
}


HX_DEFINE_DYNAMIC_FUNC1(ASParticleSystem_obj,set_rotatePerSecondVar,return )

double ASParticleSystem_obj::get_rotatePerSecondVar( ){
	HX_SOURCE_PUSH("ASParticleSystem_obj::get_rotatePerSecondVar")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1191)
	if (((this->emitterMode != (int)1))){
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1191)
		hx::Throw (HX_CSTRING("Particle Mode should be Radius"));
	}
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",1192)
	return this->mode->__Field(HX_CSTRING("B"),true)->__Field(HX_CSTRING("rotatePerSecondVar"),true);
}


HX_DEFINE_DYNAMIC_FUNC0(ASParticleSystem_obj,get_rotatePerSecondVar,return )

int ASParticleSystem_obj::kCCParticleModeGravity;

int ASParticleSystem_obj::kCCParticleModeRadius;

int ASParticleSystem_obj::kCCPositionTypeFree;

int ASParticleSystem_obj::kCCPositionTypeRelative;

int ASParticleSystem_obj::kCCPositionTypeGrouped;

int ASParticleSystem_obj::kCCParticleDurationInfinity;

int ASParticleSystem_obj::kCCParticleStartSizeEqualToEndSize;

int ASParticleSystem_obj::kCCParticleStartRadiusEqualToEndRadius;

::com::ancientsheep::particles::ASParticleSystem ASParticleSystem_obj::particleWithFile( ::String plistFile,::String pAssets){
	HX_SOURCE_PUSH("ASParticleSystem_obj::particleWithFile")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASParticleSystem.hx",334)
	return ::com::ancientsheep::particles::ASParticleSystem_obj::__new()->initWithFile(plistFile,pAssets);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ASParticleSystem_obj,particleWithFile,return )


ASParticleSystem_obj::ASParticleSystem_obj()
{
}

void ASParticleSystem_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ASParticleSystem);
	HX_MARK_MEMBER_NAME(position,"position");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(duration,"duration");
	HX_MARK_MEMBER_NAME(elapsed,"elapsed");
	HX_MARK_MEMBER_NAME(posVar,"posVar");
	HX_MARK_MEMBER_NAME(angle,"angle");
	HX_MARK_MEMBER_NAME(angleVar,"angleVar");
	HX_MARK_MEMBER_NAME(emitterMode,"emitterMode");
	HX_MARK_MEMBER_NAME(mode,"mode");
	HX_MARK_MEMBER_NAME(startSize,"startSize");
	HX_MARK_MEMBER_NAME(startSizeVar,"startSizeVar");
	HX_MARK_MEMBER_NAME(endSize,"endSize");
	HX_MARK_MEMBER_NAME(endSizeVar,"endSizeVar");
	HX_MARK_MEMBER_NAME(life,"life");
	HX_MARK_MEMBER_NAME(lifeVar,"lifeVar");
	HX_MARK_MEMBER_NAME(startColor,"startColor");
	HX_MARK_MEMBER_NAME(startColorVar,"startColorVar");
	HX_MARK_MEMBER_NAME(endColor,"endColor");
	HX_MARK_MEMBER_NAME(endColorVar,"endColorVar");
	HX_MARK_MEMBER_NAME(startSpin,"startSpin");
	HX_MARK_MEMBER_NAME(startSpinVar,"startSpinVar");
	HX_MARK_MEMBER_NAME(endSpin,"endSpin");
	HX_MARK_MEMBER_NAME(endSpinVar,"endSpinVar");
	HX_MARK_MEMBER_NAME(particles,"particles");
	HX_MARK_MEMBER_NAME(totalParticles,"totalParticles");
	HX_MARK_MEMBER_NAME(particleCount,"particleCount");
	HX_MARK_MEMBER_NAME(emissionRate,"emissionRate");
	HX_MARK_MEMBER_NAME(emitCounter,"emitCounter");
	HX_MARK_MEMBER_NAME(texture_,"texture_");
	HX_MARK_MEMBER_NAME(positionType_,"positionType_");
	HX_MARK_MEMBER_NAME(particleIdx,"particleIdx");
	HX_MARK_MEMBER_NAME(updateParticleImp,"updateParticleImp");
	HX_MARK_MEMBER_NAME(updateParticleSel,"updateParticleSel");
	HX_MARK_MEMBER_NAME(assetsPath,"assetsPath");
	HX_MARK_MEMBER_NAME(lastTime,"lastTime");
	HX_MARK_MEMBER_NAME(tilesheet,"tilesheet");
	HX_MARK_MEMBER_NAME(particleBMD,"particleBMD");
	HX_MARK_MEMBER_NAME(drawList,"drawList");
	HX_MARK_MEMBER_NAME(addBlendMode,"addBlendMode");
	HX_MARK_MEMBER_NAME(gravity,"gravity");
	HX_MARK_MEMBER_NAME(speed,"speed");
	HX_MARK_MEMBER_NAME(speedVar,"speedVar");
	HX_MARK_MEMBER_NAME(tangentialAccel,"tangentialAccel");
	HX_MARK_MEMBER_NAME(tangentialAccelVar,"tangentialAccelVar");
	HX_MARK_MEMBER_NAME(radialAccel,"radialAccel");
	HX_MARK_MEMBER_NAME(radialAccelVar,"radialAccelVar");
	HX_MARK_MEMBER_NAME(startRadius,"startRadius");
	HX_MARK_MEMBER_NAME(startRadiusVar,"startRadiusVar");
	HX_MARK_MEMBER_NAME(endRadius,"endRadius");
	HX_MARK_MEMBER_NAME(endRadiusVar,"endRadiusVar");
	HX_MARK_MEMBER_NAME(rotatePerSecond,"rotatePerSecond");
	HX_MARK_MEMBER_NAME(rotatePerSecondVar,"rotatePerSecondVar");
	HX_MARK_MEMBER_NAME(texture,"texture");
	HX_MARK_MEMBER_NAME(blendFunc,"blendFunc");
	HX_MARK_MEMBER_NAME(blendAdditive,"blendAdditive");
	HX_MARK_MEMBER_NAME(positionType,"positionType");
	HX_MARK_MEMBER_NAME(autoRemoveOnFinish,"autoRemoveOnFinish");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

Dynamic ASParticleSystem_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"mode") ) { return mode; }
		if (HX_FIELD_EQ(inName,"life") ) { return life; }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"angle") ) { return angle; }
		if (HX_FIELD_EQ(inName,"speed") ) { return inCallProp ? get_speed() : speed; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return active; }
		if (HX_FIELD_EQ(inName,"posVar") ) { return posVar; }
		if (HX_FIELD_EQ(inName,"isFull") ) { return isFull_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"elapsed") ) { return elapsed; }
		if (HX_FIELD_EQ(inName,"endSize") ) { return endSize; }
		if (HX_FIELD_EQ(inName,"lifeVar") ) { return lifeVar; }
		if (HX_FIELD_EQ(inName,"endSpin") ) { return endSpin; }
		if (HX_FIELD_EQ(inName,"gravity") ) { return inCallProp ? get_gravity() : gravity; }
		if (HX_FIELD_EQ(inName,"texture") ) { return inCallProp ? get_texture() : texture; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { return position; }
		if (HX_FIELD_EQ(inName,"duration") ) { return duration; }
		if (HX_FIELD_EQ(inName,"angleVar") ) { return angleVar; }
		if (HX_FIELD_EQ(inName,"endColor") ) { return endColor; }
		if (HX_FIELD_EQ(inName,"texture_") ) { return texture_; }
		if (HX_FIELD_EQ(inName,"lastTime") ) { return lastTime; }
		if (HX_FIELD_EQ(inName,"drawList") ) { return drawList; }
		if (HX_FIELD_EQ(inName,"speedVar") ) { return inCallProp ? get_speedVar() : speedVar; }
		if (HX_FIELD_EQ(inName,"postStep") ) { return postStep_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"startSize") ) { return startSize; }
		if (HX_FIELD_EQ(inName,"startSpin") ) { return startSpin; }
		if (HX_FIELD_EQ(inName,"particles") ) { return particles; }
		if (HX_FIELD_EQ(inName,"tilesheet") ) { return tilesheet; }
		if (HX_FIELD_EQ(inName,"endRadius") ) { return inCallProp ? get_endRadius() : endRadius; }
		if (HX_FIELD_EQ(inName,"blendFunc") ) { return blendFunc; }
		if (HX_FIELD_EQ(inName,"set_speed") ) { return set_speed_dyn(); }
		if (HX_FIELD_EQ(inName,"get_speed") ) { return get_speed_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"endSizeVar") ) { return endSizeVar; }
		if (HX_FIELD_EQ(inName,"startColor") ) { return startColor; }
		if (HX_FIELD_EQ(inName,"endSpinVar") ) { return endSpinVar; }
		if (HX_FIELD_EQ(inName,"assetsPath") ) { return assetsPath; }
		if (HX_FIELD_EQ(inName,"stopSystem") ) { return stopSystem_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"emitterMode") ) { return emitterMode; }
		if (HX_FIELD_EQ(inName,"endColorVar") ) { return endColorVar; }
		if (HX_FIELD_EQ(inName,"emitCounter") ) { return emitCounter; }
		if (HX_FIELD_EQ(inName,"particleIdx") ) { return particleIdx; }
		if (HX_FIELD_EQ(inName,"particleBMD") ) { return particleBMD; }
		if (HX_FIELD_EQ(inName,"radialAccel") ) { return inCallProp ? get_radialAccel() : radialAccel; }
		if (HX_FIELD_EQ(inName,"startRadius") ) { return inCallProp ? get_startRadius() : startRadius; }
		if (HX_FIELD_EQ(inName,"addParticle") ) { return addParticle_dyn(); }
		if (HX_FIELD_EQ(inName,"startSystem") ) { return startSystem_dyn(); }
		if (HX_FIELD_EQ(inName,"resetSystem") ) { return resetSystem_dyn(); }
		if (HX_FIELD_EQ(inName,"set_texture") ) { return set_texture_dyn(); }
		if (HX_FIELD_EQ(inName,"get_texture") ) { return get_texture_dyn(); }
		if (HX_FIELD_EQ(inName,"set_gravity") ) { return set_gravity_dyn(); }
		if (HX_FIELD_EQ(inName,"get_gravity") ) { return get_gravity_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"startSizeVar") ) { return startSizeVar; }
		if (HX_FIELD_EQ(inName,"startSpinVar") ) { return startSpinVar; }
		if (HX_FIELD_EQ(inName,"emissionRate") ) { return emissionRate; }
		if (HX_FIELD_EQ(inName,"addBlendMode") ) { return addBlendMode; }
		if (HX_FIELD_EQ(inName,"endRadiusVar") ) { return inCallProp ? get_endRadiusVar() : endRadiusVar; }
		if (HX_FIELD_EQ(inName,"positionType") ) { return positionType; }
		if (HX_FIELD_EQ(inName,"initWithFile") ) { return initWithFile_dyn(); }
		if (HX_FIELD_EQ(inName,"initParticle") ) { return initParticle_dyn(); }
		if (HX_FIELD_EQ(inName,"updateSystem") ) { return updateSystem_dyn(); }
		if (HX_FIELD_EQ(inName,"set_speedVar") ) { return set_speedVar_dyn(); }
		if (HX_FIELD_EQ(inName,"get_speedVar") ) { return get_speedVar_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"startColorVar") ) { return startColorVar; }
		if (HX_FIELD_EQ(inName,"particleCount") ) { return particleCount; }
		if (HX_FIELD_EQ(inName,"positionType_") ) { return positionType_; }
		if (HX_FIELD_EQ(inName,"blendAdditive") ) { return inCallProp ? get_blendAdditive() : blendAdditive; }
		if (HX_FIELD_EQ(inName,"set_endRadius") ) { return set_endRadius_dyn(); }
		if (HX_FIELD_EQ(inName,"get_endRadius") ) { return get_endRadius_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"totalParticles") ) { return totalParticles; }
		if (HX_FIELD_EQ(inName,"radialAccelVar") ) { return inCallProp ? get_radialAccelVar() : radialAccelVar; }
		if (HX_FIELD_EQ(inName,"startRadiusVar") ) { return inCallProp ? get_startRadiusVar() : startRadiusVar; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"tangentialAccel") ) { return inCallProp ? get_tangentialAccel() : tangentialAccel; }
		if (HX_FIELD_EQ(inName,"rotatePerSecond") ) { return inCallProp ? get_rotatePerSecond() : rotatePerSecond; }
		if (HX_FIELD_EQ(inName,"set_radialAccel") ) { return set_radialAccel_dyn(); }
		if (HX_FIELD_EQ(inName,"get_radialAccel") ) { return get_radialAccel_dyn(); }
		if (HX_FIELD_EQ(inName,"set_startRadius") ) { return set_startRadius_dyn(); }
		if (HX_FIELD_EQ(inName,"get_startRadius") ) { return get_startRadius_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"particleWithFile") ) { return particleWithFile_dyn(); }
		if (HX_FIELD_EQ(inName,"set_endRadiusVar") ) { return set_endRadiusVar_dyn(); }
		if (HX_FIELD_EQ(inName,"get_endRadiusVar") ) { return get_endRadiusVar_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"updateParticleImp") ) { return updateParticleImp; }
		if (HX_FIELD_EQ(inName,"updateParticleSel") ) { return updateParticleSel; }
		if (HX_FIELD_EQ(inName,"set_blendAdditive") ) { return set_blendAdditive_dyn(); }
		if (HX_FIELD_EQ(inName,"get_blendAdditive") ) { return get_blendAdditive_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"tangentialAccelVar") ) { return inCallProp ? get_tangentialAccelVar() : tangentialAccelVar; }
		if (HX_FIELD_EQ(inName,"rotatePerSecondVar") ) { return inCallProp ? get_rotatePerSecondVar() : rotatePerSecondVar; }
		if (HX_FIELD_EQ(inName,"autoRemoveOnFinish") ) { return autoRemoveOnFinish; }
		if (HX_FIELD_EQ(inName,"initWithDictionary") ) { return initWithDictionary_dyn(); }
		if (HX_FIELD_EQ(inName,"set_radialAccelVar") ) { return set_radialAccelVar_dyn(); }
		if (HX_FIELD_EQ(inName,"get_radialAccelVar") ) { return get_radialAccelVar_dyn(); }
		if (HX_FIELD_EQ(inName,"set_startRadiusVar") ) { return set_startRadiusVar_dyn(); }
		if (HX_FIELD_EQ(inName,"get_startRadiusVar") ) { return get_startRadiusVar_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"kCCPositionTypeFree") ) { return kCCPositionTypeFree; }
		if (HX_FIELD_EQ(inName,"set_tangentialAccel") ) { return set_tangentialAccel_dyn(); }
		if (HX_FIELD_EQ(inName,"get_tangentialAccel") ) { return get_tangentialAccel_dyn(); }
		if (HX_FIELD_EQ(inName,"set_rotatePerSecond") ) { return set_rotatePerSecond_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rotatePerSecond") ) { return get_rotatePerSecond_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"kCCParticleModeRadius") ) { return kCCParticleModeRadius; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"kCCParticleModeGravity") ) { return kCCParticleModeGravity; }
		if (HX_FIELD_EQ(inName,"kCCPositionTypeGrouped") ) { return kCCPositionTypeGrouped; }
		if (HX_FIELD_EQ(inName,"initWithTotalParticles") ) { return initWithTotalParticles_dyn(); }
		if (HX_FIELD_EQ(inName,"updateQuadWithParticle") ) { return updateQuadWithParticle_dyn(); }
		if (HX_FIELD_EQ(inName,"set_tangentialAccelVar") ) { return set_tangentialAccelVar_dyn(); }
		if (HX_FIELD_EQ(inName,"get_tangentialAccelVar") ) { return get_tangentialAccelVar_dyn(); }
		if (HX_FIELD_EQ(inName,"set_rotatePerSecondVar") ) { return set_rotatePerSecondVar_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rotatePerSecondVar") ) { return get_rotatePerSecondVar_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"kCCPositionTypeRelative") ) { return kCCPositionTypeRelative; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"kCCParticleDurationInfinity") ) { return kCCParticleDurationInfinity; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"kCCParticleStartSizeEqualToEndSize") ) { return kCCParticleStartSizeEqualToEndSize; }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"kCCParticleStartRadiusEqualToEndRadius") ) { return kCCParticleStartRadiusEqualToEndRadius; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ASParticleSystem_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"mode") ) { mode=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"life") ) { life=inValue.Cast< double >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"angle") ) { angle=inValue.Cast< double >(); return inValue; }
		if (HX_FIELD_EQ(inName,"speed") ) { if (inCallProp) return set_speed(inValue);speed=inValue.Cast< double >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"posVar") ) { posVar=inValue.Cast< ::neash::geom::Point >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"elapsed") ) { elapsed=inValue.Cast< double >(); return inValue; }
		if (HX_FIELD_EQ(inName,"endSize") ) { endSize=inValue.Cast< double >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lifeVar") ) { lifeVar=inValue.Cast< double >(); return inValue; }
		if (HX_FIELD_EQ(inName,"endSpin") ) { endSpin=inValue.Cast< double >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gravity") ) { if (inCallProp) return set_gravity(inValue);gravity=inValue.Cast< ::neash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"texture") ) { if (inCallProp) return set_texture(inValue);texture=inValue.Cast< ::neash::display::Bitmap >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { position=inValue.Cast< ::neash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"duration") ) { duration=inValue.Cast< double >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angleVar") ) { angleVar=inValue.Cast< double >(); return inValue; }
		if (HX_FIELD_EQ(inName,"endColor") ) { endColor=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"texture_") ) { texture_=inValue.Cast< ::neash::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastTime") ) { lastTime=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"drawList") ) { drawList=inValue.Cast< Array< double > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"speedVar") ) { if (inCallProp) return set_speedVar(inValue);speedVar=inValue.Cast< double >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"startSize") ) { startSize=inValue.Cast< double >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startSpin") ) { startSpin=inValue.Cast< double >(); return inValue; }
		if (HX_FIELD_EQ(inName,"particles") ) { particles=inValue.Cast< Array< ::com::ancientsheep::particles::ASParticle > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tilesheet") ) { tilesheet=inValue.Cast< ::neash::display::Tilesheet >(); return inValue; }
		if (HX_FIELD_EQ(inName,"endRadius") ) { if (inCallProp) return set_endRadius(inValue);endRadius=inValue.Cast< double >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blendFunc") ) { blendFunc=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"endSizeVar") ) { endSizeVar=inValue.Cast< double >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startColor") ) { startColor=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"endSpinVar") ) { endSpinVar=inValue.Cast< double >(); return inValue; }
		if (HX_FIELD_EQ(inName,"assetsPath") ) { assetsPath=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"emitterMode") ) { emitterMode=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"endColorVar") ) { endColorVar=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"emitCounter") ) { emitCounter=inValue.Cast< double >(); return inValue; }
		if (HX_FIELD_EQ(inName,"particleIdx") ) { particleIdx=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"particleBMD") ) { particleBMD=inValue.Cast< ::neash::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"radialAccel") ) { if (inCallProp) return set_radialAccel(inValue);radialAccel=inValue.Cast< double >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startRadius") ) { if (inCallProp) return set_startRadius(inValue);startRadius=inValue.Cast< double >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"startSizeVar") ) { startSizeVar=inValue.Cast< double >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startSpinVar") ) { startSpinVar=inValue.Cast< double >(); return inValue; }
		if (HX_FIELD_EQ(inName,"emissionRate") ) { emissionRate=inValue.Cast< double >(); return inValue; }
		if (HX_FIELD_EQ(inName,"addBlendMode") ) { addBlendMode=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"endRadiusVar") ) { if (inCallProp) return set_endRadiusVar(inValue);endRadiusVar=inValue.Cast< double >(); return inValue; }
		if (HX_FIELD_EQ(inName,"positionType") ) { positionType=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"startColorVar") ) { startColorVar=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"particleCount") ) { particleCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"positionType_") ) { positionType_=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blendAdditive") ) { if (inCallProp) return set_blendAdditive(inValue);blendAdditive=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"totalParticles") ) { totalParticles=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"radialAccelVar") ) { if (inCallProp) return set_radialAccelVar(inValue);radialAccelVar=inValue.Cast< double >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startRadiusVar") ) { if (inCallProp) return set_startRadiusVar(inValue);startRadiusVar=inValue.Cast< double >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"tangentialAccel") ) { if (inCallProp) return set_tangentialAccel(inValue);tangentialAccel=inValue.Cast< double >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rotatePerSecond") ) { if (inCallProp) return set_rotatePerSecond(inValue);rotatePerSecond=inValue.Cast< double >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"updateParticleImp") ) { updateParticleImp=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"updateParticleSel") ) { updateParticleSel=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"tangentialAccelVar") ) { if (inCallProp) return set_tangentialAccelVar(inValue);tangentialAccelVar=inValue.Cast< double >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rotatePerSecondVar") ) { if (inCallProp) return set_rotatePerSecondVar(inValue);rotatePerSecondVar=inValue.Cast< double >(); return inValue; }
		if (HX_FIELD_EQ(inName,"autoRemoveOnFinish") ) { autoRemoveOnFinish=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"kCCPositionTypeFree") ) { kCCPositionTypeFree=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"kCCParticleModeRadius") ) { kCCParticleModeRadius=inValue.Cast< int >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"kCCParticleModeGravity") ) { kCCParticleModeGravity=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kCCPositionTypeGrouped") ) { kCCPositionTypeGrouped=inValue.Cast< int >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"kCCPositionTypeRelative") ) { kCCPositionTypeRelative=inValue.Cast< int >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"kCCParticleDurationInfinity") ) { kCCParticleDurationInfinity=inValue.Cast< int >(); return inValue; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"kCCParticleStartSizeEqualToEndSize") ) { kCCParticleStartSizeEqualToEndSize=inValue.Cast< int >(); return inValue; }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"kCCParticleStartRadiusEqualToEndRadius") ) { kCCParticleStartRadiusEqualToEndRadius=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ASParticleSystem_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("position"));
	outFields->push(HX_CSTRING("active"));
	outFields->push(HX_CSTRING("duration"));
	outFields->push(HX_CSTRING("elapsed"));
	outFields->push(HX_CSTRING("posVar"));
	outFields->push(HX_CSTRING("angle"));
	outFields->push(HX_CSTRING("angleVar"));
	outFields->push(HX_CSTRING("emitterMode"));
	outFields->push(HX_CSTRING("mode"));
	outFields->push(HX_CSTRING("startSize"));
	outFields->push(HX_CSTRING("startSizeVar"));
	outFields->push(HX_CSTRING("endSize"));
	outFields->push(HX_CSTRING("endSizeVar"));
	outFields->push(HX_CSTRING("life"));
	outFields->push(HX_CSTRING("lifeVar"));
	outFields->push(HX_CSTRING("startColor"));
	outFields->push(HX_CSTRING("startColorVar"));
	outFields->push(HX_CSTRING("endColor"));
	outFields->push(HX_CSTRING("endColorVar"));
	outFields->push(HX_CSTRING("startSpin"));
	outFields->push(HX_CSTRING("startSpinVar"));
	outFields->push(HX_CSTRING("endSpin"));
	outFields->push(HX_CSTRING("endSpinVar"));
	outFields->push(HX_CSTRING("particles"));
	outFields->push(HX_CSTRING("totalParticles"));
	outFields->push(HX_CSTRING("particleCount"));
	outFields->push(HX_CSTRING("emissionRate"));
	outFields->push(HX_CSTRING("emitCounter"));
	outFields->push(HX_CSTRING("texture_"));
	outFields->push(HX_CSTRING("positionType_"));
	outFields->push(HX_CSTRING("particleIdx"));
	outFields->push(HX_CSTRING("updateParticleImp"));
	outFields->push(HX_CSTRING("updateParticleSel"));
	outFields->push(HX_CSTRING("assetsPath"));
	outFields->push(HX_CSTRING("lastTime"));
	outFields->push(HX_CSTRING("tilesheet"));
	outFields->push(HX_CSTRING("particleBMD"));
	outFields->push(HX_CSTRING("drawList"));
	outFields->push(HX_CSTRING("addBlendMode"));
	outFields->push(HX_CSTRING("gravity"));
	outFields->push(HX_CSTRING("speed"));
	outFields->push(HX_CSTRING("speedVar"));
	outFields->push(HX_CSTRING("tangentialAccel"));
	outFields->push(HX_CSTRING("tangentialAccelVar"));
	outFields->push(HX_CSTRING("radialAccel"));
	outFields->push(HX_CSTRING("radialAccelVar"));
	outFields->push(HX_CSTRING("startRadius"));
	outFields->push(HX_CSTRING("startRadiusVar"));
	outFields->push(HX_CSTRING("endRadius"));
	outFields->push(HX_CSTRING("endRadiusVar"));
	outFields->push(HX_CSTRING("rotatePerSecond"));
	outFields->push(HX_CSTRING("rotatePerSecondVar"));
	outFields->push(HX_CSTRING("texture"));
	outFields->push(HX_CSTRING("blendFunc"));
	outFields->push(HX_CSTRING("blendAdditive"));
	outFields->push(HX_CSTRING("positionType"));
	outFields->push(HX_CSTRING("autoRemoveOnFinish"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("kCCParticleModeGravity"),
	HX_CSTRING("kCCParticleModeRadius"),
	HX_CSTRING("kCCPositionTypeFree"),
	HX_CSTRING("kCCPositionTypeRelative"),
	HX_CSTRING("kCCPositionTypeGrouped"),
	HX_CSTRING("kCCParticleDurationInfinity"),
	HX_CSTRING("kCCParticleStartSizeEqualToEndSize"),
	HX_CSTRING("kCCParticleStartRadiusEqualToEndRadius"),
	HX_CSTRING("particleWithFile"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("position"),
	HX_CSTRING("active"),
	HX_CSTRING("duration"),
	HX_CSTRING("elapsed"),
	HX_CSTRING("posVar"),
	HX_CSTRING("angle"),
	HX_CSTRING("angleVar"),
	HX_CSTRING("emitterMode"),
	HX_CSTRING("mode"),
	HX_CSTRING("startSize"),
	HX_CSTRING("startSizeVar"),
	HX_CSTRING("endSize"),
	HX_CSTRING("endSizeVar"),
	HX_CSTRING("life"),
	HX_CSTRING("lifeVar"),
	HX_CSTRING("startColor"),
	HX_CSTRING("startColorVar"),
	HX_CSTRING("endColor"),
	HX_CSTRING("endColorVar"),
	HX_CSTRING("startSpin"),
	HX_CSTRING("startSpinVar"),
	HX_CSTRING("endSpin"),
	HX_CSTRING("endSpinVar"),
	HX_CSTRING("particles"),
	HX_CSTRING("totalParticles"),
	HX_CSTRING("particleCount"),
	HX_CSTRING("emissionRate"),
	HX_CSTRING("emitCounter"),
	HX_CSTRING("texture_"),
	HX_CSTRING("positionType_"),
	HX_CSTRING("particleIdx"),
	HX_CSTRING("updateParticleImp"),
	HX_CSTRING("updateParticleSel"),
	HX_CSTRING("assetsPath"),
	HX_CSTRING("lastTime"),
	HX_CSTRING("tilesheet"),
	HX_CSTRING("particleBMD"),
	HX_CSTRING("drawList"),
	HX_CSTRING("addBlendMode"),
	HX_CSTRING("gravity"),
	HX_CSTRING("speed"),
	HX_CSTRING("speedVar"),
	HX_CSTRING("tangentialAccel"),
	HX_CSTRING("tangentialAccelVar"),
	HX_CSTRING("radialAccel"),
	HX_CSTRING("radialAccelVar"),
	HX_CSTRING("startRadius"),
	HX_CSTRING("startRadiusVar"),
	HX_CSTRING("endRadius"),
	HX_CSTRING("endRadiusVar"),
	HX_CSTRING("rotatePerSecond"),
	HX_CSTRING("rotatePerSecondVar"),
	HX_CSTRING("texture"),
	HX_CSTRING("blendFunc"),
	HX_CSTRING("blendAdditive"),
	HX_CSTRING("positionType"),
	HX_CSTRING("autoRemoveOnFinish"),
	HX_CSTRING("initWithFile"),
	HX_CSTRING("initWithDictionary"),
	HX_CSTRING("initWithTotalParticles"),
	HX_CSTRING("destroy"),
	HX_CSTRING("addParticle"),
	HX_CSTRING("initParticle"),
	HX_CSTRING("startSystem"),
	HX_CSTRING("updateSystem"),
	HX_CSTRING("draw"),
	HX_CSTRING("stopSystem"),
	HX_CSTRING("resetSystem"),
	HX_CSTRING("isFull"),
	HX_CSTRING("update"),
	HX_CSTRING("updateQuadWithParticle"),
	HX_CSTRING("postStep"),
	HX_CSTRING("set_texture"),
	HX_CSTRING("get_texture"),
	HX_CSTRING("set_blendAdditive"),
	HX_CSTRING("get_blendAdditive"),
	HX_CSTRING("set_tangentialAccel"),
	HX_CSTRING("get_tangentialAccel"),
	HX_CSTRING("set_tangentialAccelVar"),
	HX_CSTRING("get_tangentialAccelVar"),
	HX_CSTRING("set_radialAccel"),
	HX_CSTRING("get_radialAccel"),
	HX_CSTRING("set_radialAccelVar"),
	HX_CSTRING("get_radialAccelVar"),
	HX_CSTRING("set_gravity"),
	HX_CSTRING("get_gravity"),
	HX_CSTRING("set_speed"),
	HX_CSTRING("get_speed"),
	HX_CSTRING("set_speedVar"),
	HX_CSTRING("get_speedVar"),
	HX_CSTRING("set_startRadius"),
	HX_CSTRING("get_startRadius"),
	HX_CSTRING("set_startRadiusVar"),
	HX_CSTRING("get_startRadiusVar"),
	HX_CSTRING("set_endRadius"),
	HX_CSTRING("get_endRadius"),
	HX_CSTRING("set_endRadiusVar"),
	HX_CSTRING("get_endRadiusVar"),
	HX_CSTRING("set_rotatePerSecond"),
	HX_CSTRING("get_rotatePerSecond"),
	HX_CSTRING("set_rotatePerSecondVar"),
	HX_CSTRING("get_rotatePerSecondVar"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ASParticleSystem_obj::kCCParticleModeGravity,"kCCParticleModeGravity");
	HX_MARK_MEMBER_NAME(ASParticleSystem_obj::kCCParticleModeRadius,"kCCParticleModeRadius");
	HX_MARK_MEMBER_NAME(ASParticleSystem_obj::kCCPositionTypeFree,"kCCPositionTypeFree");
	HX_MARK_MEMBER_NAME(ASParticleSystem_obj::kCCPositionTypeRelative,"kCCPositionTypeRelative");
	HX_MARK_MEMBER_NAME(ASParticleSystem_obj::kCCPositionTypeGrouped,"kCCPositionTypeGrouped");
	HX_MARK_MEMBER_NAME(ASParticleSystem_obj::kCCParticleDurationInfinity,"kCCParticleDurationInfinity");
	HX_MARK_MEMBER_NAME(ASParticleSystem_obj::kCCParticleStartSizeEqualToEndSize,"kCCParticleStartSizeEqualToEndSize");
	HX_MARK_MEMBER_NAME(ASParticleSystem_obj::kCCParticleStartRadiusEqualToEndRadius,"kCCParticleStartRadiusEqualToEndRadius");
};

Class ASParticleSystem_obj::__mClass;

void ASParticleSystem_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.ancientsheep.particles.ASParticleSystem"), hx::TCanCast< ASParticleSystem_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void ASParticleSystem_obj::__boot()
{
	hx::Static(kCCParticleModeGravity) = (int)0;
	hx::Static(kCCParticleModeRadius) = (int)1;
	hx::Static(kCCPositionTypeFree) = (int)0;
	hx::Static(kCCPositionTypeRelative) = (int)1;
	hx::Static(kCCPositionTypeGrouped) = (int)2;
	hx::Static(kCCParticleDurationInfinity) = (int)0;
	hx::Static(kCCParticleStartSizeEqualToEndSize) = (int)1;
	hx::Static(kCCParticleStartRadiusEqualToEndRadius) = (int)2;
}

} // end namespace com
} // end namespace ancientsheep
} // end namespace particles
