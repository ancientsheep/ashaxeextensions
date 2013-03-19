#include <hxcpp.h>

#ifndef INCLUDED_ApplicationMain
#include <ApplicationMain.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Sample
#include <Sample.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
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
#ifndef INCLUDED_neash_events_EventDispatcher
#include <neash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_neash_events_IEventDispatcher
#include <neash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_neash_utils_ByteArray
#include <neash/utils/ByteArray.h>
#endif
#ifndef INCLUDED_neash_utils_IDataInput
#include <neash/utils/IDataInput.h>
#endif
#ifndef INCLUDED_nme_Lib
#include <nme/Lib.h>
#endif
#ifndef INCLUDED_nme_installer_Assets
#include <nme/installer/Assets.h>
#endif

Void ApplicationMain_obj::__construct()
{
	return null();
}

ApplicationMain_obj::~ApplicationMain_obj() { }

Dynamic ApplicationMain_obj::__CreateEmpty() { return  new ApplicationMain_obj; }
hx::ObjectPtr< ApplicationMain_obj > ApplicationMain_obj::__new()
{  hx::ObjectPtr< ApplicationMain_obj > result = new ApplicationMain_obj();
	result->__construct();
	return result;}

Dynamic ApplicationMain_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ApplicationMain_obj > result = new ApplicationMain_obj();
	result->__construct();
	return result;}

Void ApplicationMain_obj::main( ){
{
		HX_SOURCE_PUSH("ApplicationMain_obj::main")
		HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",15)
		::nme::Lib_obj::setPackage(HX_CSTRING("Mourlam Studios"),HX_CSTRING("Sample"),HX_CSTRING("com.mourlamstudios.haxeparticledesigner"),HX_CSTRING("1.0.0"));

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		Void run(){
{
				HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",41)
				{
				}
				HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",47)
				bool hasMain = false;
				HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",49)
				{
					HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",49)
					int _g = (int)0;
					Array< ::String > _g1 = ::Type_obj::getClassFields(hx::ClassOf< ::Sample >());
					HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",49)
					while(((_g < _g1->length))){
						HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",49)
						::String methodName = _g1->__get(_g);
						HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",49)
						++(_g);
						HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",51)
						if (((methodName == HX_CSTRING("main")))){
							HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",53)
							hasMain = true;
							HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",54)
							break;
						}
					}
				}
				HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",58)
				if ((hasMain)){
					HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",59)
					::Reflect_obj::callMethod(hx::ClassOf< ::Sample >(),::Reflect_obj::field(hx::ClassOf< ::Sample >(),HX_CSTRING("main")),Dynamic( Array_obj<Dynamic>::__new()));
				}
				else{
					HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",63)
					::nme::Lib_obj::nmeGetCurrent()->addChild(hx::TCast< neash::display::DisplayObject >::cast(::Type_obj::createInstance(hx::ClassOf< ::Sample >(),Dynamic( Array_obj<Dynamic>::__new()))));
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",39)
		::nme::Lib_obj::create( Dynamic(new _Function_1_1()),(int)320,(int)480,(int)30,(int)16777215,(int((int((int((int((int((int((int(::nme::Lib_obj::HARDWARE) | int((int)0))) | int(::nme::Lib_obj::RESIZABLE))) | int((int)0))) | int((int)0))) | int((int)0))) | int((int)0))) | int((int)0)),HX_CSTRING("Haxe Particle Designer Sample 1"),null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ApplicationMain_obj,main,(void))

Dynamic ApplicationMain_obj::getAsset( ::String inName){
	HX_SOURCE_PUSH("ApplicationMain_obj::getAsset")
	HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",90)
	if (((inName == HX_CSTRING("assets/particles/airStars.plist")))){
		HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",91)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("assets/particles/airStars.plist"));
	}
	HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",97)
	if (((inName == HX_CSTRING("assets/particles/airStars.png")))){
		HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",98)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/particles/airStars.png"),null());
	}
	HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",104)
	if (((inName == HX_CSTRING("assets/particles/blizzard.plist")))){
		HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",105)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("assets/particles/blizzard.plist"));
	}
	HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",111)
	if (((inName == HX_CSTRING("assets/particles/blizzard.png")))){
		HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",112)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/particles/blizzard.png"),null());
	}
	HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",118)
	if (((inName == HX_CSTRING("assets/particles/boil.plist")))){
		HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",119)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("assets/particles/boil.plist"));
	}
	HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",125)
	if (((inName == HX_CSTRING("assets/particles/BoilingFoam.png")))){
		HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",126)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/particles/BoilingFoam.png"),null());
	}
	HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",132)
	if (((inName == HX_CSTRING("assets/particles/comet.plist")))){
		HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",133)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("assets/particles/comet.plist"));
	}
	HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",139)
	if (((inName == HX_CSTRING("assets/particles/comet.png")))){
		HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",140)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/particles/comet.png"),null());
	}
	HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",146)
	if (((inName == HX_CSTRING("assets/particles/cometParticle.png")))){
		HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",147)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/particles/cometParticle.png"),null());
	}
	HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",153)
	if (((inName == HX_CSTRING("assets/particles/crazy.plist")))){
		HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",154)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("assets/particles/crazy.plist"));
	}
	HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",160)
	if (((inName == HX_CSTRING("assets/particles/crazy.png")))){
		HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",161)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/particles/crazy.png"),null());
	}
	HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",167)
	if (((inName == HX_CSTRING("assets/particles/defaultEmitter.png")))){
		HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",168)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/particles/defaultEmitter.png"),null());
	}
	HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",174)
	if (((inName == HX_CSTRING("assets/particles/electrons.plist")))){
		HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",175)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("assets/particles/electrons.plist"));
	}
	HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",181)
	if (((inName == HX_CSTRING("assets/particles/electrons.png")))){
		HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",182)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/particles/electrons.png"),null());
	}
	HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",188)
	if (((inName == HX_CSTRING("assets/particles/emit.plist")))){
		HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",189)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("assets/particles/emit.plist"));
	}
	HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",195)
	if (((inName == HX_CSTRING("assets/particles/emit.png")))){
		HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",196)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/particles/emit.png"),null());
	}
	HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",202)
	if (((inName == HX_CSTRING("assets/particles/fire.plist")))){
		HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",203)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("assets/particles/fire.plist"));
	}
	HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",209)
	if (((inName == HX_CSTRING("assets/particles/fire.png")))){
		HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",210)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/particles/fire.png"),null());
	}
	HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",216)
	if (((inName == HX_CSTRING("assets/particles/fireForest.plist")))){
		HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",217)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("assets/particles/fireForest.plist"));
	}
	HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",223)
	if (((inName == HX_CSTRING("assets/particles/fireForest.png")))){
		HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",224)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/particles/fireForest.png"),null());
	}
	HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",230)
	if (((inName == HX_CSTRING("assets/particles/firepart.png")))){
		HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",231)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/particles/firepart.png"),null());
	}
	HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",237)
	if (((inName == HX_CSTRING("assets/particles/Firework.plist")))){
		HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",238)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("assets/particles/Firework.plist"));
	}
	HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",244)
	if (((inName == HX_CSTRING("assets/particles/firework.png")))){
		HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",245)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/particles/firework.png"),null());
	}
	HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",251)
	if (((inName == HX_CSTRING("assets/particles/forestFire.plist")))){
		HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",252)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("assets/particles/forestFire.plist"));
	}
	HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",258)
	if (((inName == HX_CSTRING("assets/particles/forestFire.png")))){
		HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",259)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/particles/forestFire.png"),null());
	}
	HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",265)
	if (((inName == HX_CSTRING("assets/particles/galaxy.plist")))){
		HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",266)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("assets/particles/galaxy.plist"));
	}
	HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",272)
	if (((inName == HX_CSTRING("assets/particles/galaxy.png")))){
		HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",273)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/particles/galaxy.png"),null());
	}
	HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",279)
	if (((inName == HX_CSTRING("assets/particles/magicBall.plist")))){
		HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",280)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("assets/particles/magicBall.plist"));
	}
	HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",286)
	if (((inName == HX_CSTRING("assets/particles/magicBall.png")))){
		HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",287)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/particles/magicBall.png"),null());
	}
	HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",293)
	if (((inName == HX_CSTRING("assets/particles/particleTexture.png")))){
		HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",294)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/particles/particleTexture.png"),null());
	}
	HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",300)
	if (((inName == HX_CSTRING("assets/particles/pinkNormal.png")))){
		HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",301)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/particles/pinkNormal.png"),null());
	}
	HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",307)
	if (((inName == HX_CSTRING("assets/particles/pinkParticle.png")))){
		HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",308)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/particles/pinkParticle.png"),null());
	}
	HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",314)
	if (((inName == HX_CSTRING("assets/particles/pinkStream.plist")))){
		HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",315)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("assets/particles/pinkStream.plist"));
	}
	HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",321)
	if (((inName == HX_CSTRING("assets/particles/pinkStreamAddMode.plist")))){
		HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",322)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("assets/particles/pinkStreamAddMode.plist"));
	}
	HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",328)
	if (((inName == HX_CSTRING("assets/particles/pinkStreamAddMode.png")))){
		HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",329)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/particles/pinkStreamAddMode.png"),null());
	}
	HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",335)
	if (((inName == HX_CSTRING("assets/particles/pinkStreamNormal.pex")))){
		HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",336)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("assets/particles/pinkStreamNormal.pex"));
	}
	HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",342)
	if (((inName == HX_CSTRING("assets/particles/pinkStreamNormal.plist")))){
		HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",343)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("assets/particles/pinkStreamNormal.plist"));
	}
	HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",349)
	if (((inName == HX_CSTRING("assets/particles/pop.plist")))){
		HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",350)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("assets/particles/pop.plist"));
	}
	HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",356)
	if (((inName == HX_CSTRING("assets/particles/radialTest.pex")))){
		HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",357)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("assets/particles/radialTest.pex"));
	}
	HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",363)
	if (((inName == HX_CSTRING("assets/particles/radialTest.plist")))){
		HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",364)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("assets/particles/radialTest.plist"));
	}
	HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",370)
	if (((inName == HX_CSTRING("assets/particles/radialTest.png")))){
		HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",371)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/particles/radialTest.png"),null());
	}
	HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",377)
	if (((inName == HX_CSTRING("assets/particles/radialTest2.pex")))){
		HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",378)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("assets/particles/radialTest2.pex"));
	}
	HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",384)
	if (((inName == HX_CSTRING("assets/particles/radialtest2.plist")))){
		HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",385)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("assets/particles/radialtest2.plist"));
	}
	HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",391)
	if (((inName == HX_CSTRING("assets/particles/radialTest2.png")))){
		HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",392)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/particles/radialTest2.png"),null());
	}
	HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",398)
	if (((inName == HX_CSTRING("assets/particles/radialTexture.png")))){
		HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",399)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/particles/radialTexture.png"),null());
	}
	HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",405)
	if (((inName == HX_CSTRING("assets/particles/SnowFlake1.png")))){
		HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",406)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/particles/SnowFlake1.png"),null());
	}
	HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",412)
	if (((inName == HX_CSTRING("assets/particles/space.plist")))){
		HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",413)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("assets/particles/space.plist"));
	}
	HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",419)
	if (((inName == HX_CSTRING("assets/particles/space.png")))){
		HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",420)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/particles/space.png"),null());
	}
	HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",426)
	if (((inName == HX_CSTRING("assets/particles/starLines.plist")))){
		HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",427)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("assets/particles/starLines.plist"));
	}
	HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",433)
	if (((inName == HX_CSTRING("assets/particles/starLines.png")))){
		HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",434)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/particles/starLines.png"),null());
	}
	HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",440)
	if (((inName == HX_CSTRING("assets/particles/test.plist")))){
		HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",441)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("assets/particles/test.plist"));
	}
	HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",447)
	if (((inName == HX_CSTRING("assets/particles/tourni.plist")))){
		HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",448)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("assets/particles/tourni.plist"));
	}
	HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",454)
	if (((inName == HX_CSTRING("assets/particles/tourni.png")))){
		HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",455)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/particles/tourni.png"),null());
	}
	HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",461)
	if (((inName == HX_CSTRING("assets/particles/waterfall.plist")))){
		HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",462)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("assets/particles/waterfall.plist"));
	}
	HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",468)
	if (((inName == HX_CSTRING("assets/particles/waterfall.png")))){
		HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",469)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/particles/waterfall.png"),null());
	}
	HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",475)
	if (((inName == HX_CSTRING("assets/particles/waterFountain.plist")))){
		HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",476)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("assets/particles/waterFountain.plist"));
	}
	HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",482)
	if (((inName == HX_CSTRING("assets/particles/waterFountain.png")))){
		HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",483)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/particles/waterFountain.png"),null());
	}
	HX_SOURCE_POS("Export/cpp/mac/haxe/ApplicationMain.hx",490)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ApplicationMain_obj,getAsset,return )


ApplicationMain_obj::ApplicationMain_obj()
{
}

void ApplicationMain_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ApplicationMain);
	HX_MARK_END_CLASS();
}

Dynamic ApplicationMain_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { return main_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getAsset") ) { return getAsset_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ApplicationMain_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void ApplicationMain_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("main"),
	HX_CSTRING("getAsset"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class ApplicationMain_obj::__mClass;

void ApplicationMain_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("ApplicationMain"), hx::TCanCast< ApplicationMain_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void ApplicationMain_obj::__boot()
{
}

