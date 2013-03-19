#include <hxcpp.h>

#ifndef INCLUDED_Hash
#include <Hash.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_neash_display_BitmapData
#include <neash/display/BitmapData.h>
#endif
#ifndef INCLUDED_neash_display_IBitmapDrawable
#include <neash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_neash_events_EventDispatcher
#include <neash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_neash_events_IEventDispatcher
#include <neash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_neash_media_Sound
#include <neash/media/Sound.h>
#endif
#ifndef INCLUDED_neash_media_SoundLoaderContext
#include <neash/media/SoundLoaderContext.h>
#endif
#ifndef INCLUDED_neash_net_URLRequest
#include <neash/net/URLRequest.h>
#endif
#ifndef INCLUDED_neash_text_Font
#include <neash/text/Font.h>
#endif
#ifndef INCLUDED_neash_utils_ByteArray
#include <neash/utils/ByteArray.h>
#endif
#ifndef INCLUDED_neash_utils_IDataInput
#include <neash/utils/IDataInput.h>
#endif
#ifndef INCLUDED_nme_installer_Assets
#include <nme/installer/Assets.h>
#endif
namespace nme{
namespace installer{

Void Assets_obj::__construct()
{
	return null();
}

Assets_obj::~Assets_obj() { }

Dynamic Assets_obj::__CreateEmpty() { return  new Assets_obj; }
hx::ObjectPtr< Assets_obj > Assets_obj::__new()
{  hx::ObjectPtr< Assets_obj > result = new Assets_obj();
	result->__construct();
	return result;}

Dynamic Assets_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Assets_obj > result = new Assets_obj();
	result->__construct();
	return result;}

::Hash Assets_obj::cachedBitmapData;

bool Assets_obj::initialized;

::Hash Assets_obj::resourceNames;

::Hash Assets_obj::resourceTypes;

Void Assets_obj::initialize( ){
{
		HX_SOURCE_PUSH("Assets_obj::initialize")
		HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",26)
		if ((!(::nme::installer::Assets_obj::initialized))){
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",30)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/particles/airStars.plist"),HX_CSTRING("assets_particles_airstars_plist.plist"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",31)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/particles/airStars.plist"),HX_CSTRING("binary"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",32)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/particles/airStars.png"),HX_CSTRING("assets_particles_airstars_png.png"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",33)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/particles/airStars.png"),HX_CSTRING("image"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",34)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/particles/blizzard.plist"),HX_CSTRING("assets_particles_blizzard_plist.plist"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",35)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/particles/blizzard.plist"),HX_CSTRING("binary"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",36)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/particles/blizzard.png"),HX_CSTRING("assets_particles_blizzard_png.png"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",37)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/particles/blizzard.png"),HX_CSTRING("image"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",38)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/particles/boil.plist"),HX_CSTRING("assets_particles_boil_plist.plist"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",39)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/particles/boil.plist"),HX_CSTRING("binary"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",40)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/particles/BoilingFoam.png"),HX_CSTRING("assets_particles_boilingfoam_png.png"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",41)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/particles/BoilingFoam.png"),HX_CSTRING("image"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",42)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/particles/comet.plist"),HX_CSTRING("assets_particles_comet_plist.plist"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",43)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/particles/comet.plist"),HX_CSTRING("binary"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",44)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/particles/comet.png"),HX_CSTRING("assets_particles_comet_png.png"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",45)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/particles/comet.png"),HX_CSTRING("image"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",46)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/particles/cometParticle.png"),HX_CSTRING("assets_particles_cometparticle_png.png"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",47)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/particles/cometParticle.png"),HX_CSTRING("image"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",48)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/particles/crazy.plist"),HX_CSTRING("assets_particles_crazy_plist.plist"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",49)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/particles/crazy.plist"),HX_CSTRING("binary"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",50)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/particles/crazy.png"),HX_CSTRING("assets_particles_crazy_png.png"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",51)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/particles/crazy.png"),HX_CSTRING("image"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",52)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/particles/defaultEmitter.png"),HX_CSTRING("assets_particles_defaultemitter_png.png"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",53)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/particles/defaultEmitter.png"),HX_CSTRING("image"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",54)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/particles/electrons.plist"),HX_CSTRING("assets_particles_electrons_plist.plist"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",55)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/particles/electrons.plist"),HX_CSTRING("binary"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",56)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/particles/electrons.png"),HX_CSTRING("assets_particles_electrons_png.png"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",57)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/particles/electrons.png"),HX_CSTRING("image"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",58)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/particles/emit.plist"),HX_CSTRING("assets_particles_emit_plist.plist"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",59)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/particles/emit.plist"),HX_CSTRING("binary"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",60)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/particles/emit.png"),HX_CSTRING("assets_particles_emit_png.png"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",61)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/particles/emit.png"),HX_CSTRING("image"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",62)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/particles/fire.plist"),HX_CSTRING("assets_particles_fire_plist.plist"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",63)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/particles/fire.plist"),HX_CSTRING("binary"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",64)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/particles/fire.png"),HX_CSTRING("assets_particles_fire_png.png"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",65)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/particles/fire.png"),HX_CSTRING("image"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",66)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/particles/fireForest.plist"),HX_CSTRING("assets_particles_fireforest_plist.plist"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",67)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/particles/fireForest.plist"),HX_CSTRING("binary"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",68)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/particles/fireForest.png"),HX_CSTRING("assets_particles_fireforest_png.png"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",69)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/particles/fireForest.png"),HX_CSTRING("image"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",70)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/particles/firepart.png"),HX_CSTRING("assets_particles_firepart_png.png"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",71)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/particles/firepart.png"),HX_CSTRING("image"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",72)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/particles/Firework.plist"),HX_CSTRING("assets_particles_firework_plist.plist"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",73)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/particles/Firework.plist"),HX_CSTRING("binary"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",74)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/particles/firework.png"),HX_CSTRING("assets_particles_firework_png.png"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",75)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/particles/firework.png"),HX_CSTRING("image"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",76)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/particles/forestFire.plist"),HX_CSTRING("assets_particles_forestfire_plist.plist"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",77)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/particles/forestFire.plist"),HX_CSTRING("binary"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",78)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/particles/forestFire.png"),HX_CSTRING("assets_particles_forestfire_png.png"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",79)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/particles/forestFire.png"),HX_CSTRING("image"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",80)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/particles/galaxy.plist"),HX_CSTRING("assets_particles_galaxy_plist.plist"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",81)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/particles/galaxy.plist"),HX_CSTRING("binary"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",82)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/particles/galaxy.png"),HX_CSTRING("assets_particles_galaxy_png.png"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",83)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/particles/galaxy.png"),HX_CSTRING("image"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",84)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/particles/magicBall.plist"),HX_CSTRING("assets_particles_magicball_plist.plist"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",85)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/particles/magicBall.plist"),HX_CSTRING("binary"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",86)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/particles/magicBall.png"),HX_CSTRING("assets_particles_magicball_png.png"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",87)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/particles/magicBall.png"),HX_CSTRING("image"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",88)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/particles/particleTexture.png"),HX_CSTRING("assets_particles_particletexture_png.png"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",89)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/particles/particleTexture.png"),HX_CSTRING("image"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",90)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/particles/pinkNormal.png"),HX_CSTRING("assets_particles_pinknormal_png.png"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",91)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/particles/pinkNormal.png"),HX_CSTRING("image"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",92)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/particles/pinkParticle.png"),HX_CSTRING("assets_particles_pinkparticle_png.png"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",93)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/particles/pinkParticle.png"),HX_CSTRING("image"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",94)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/particles/pinkStream.plist"),HX_CSTRING("assets_particles_pinkstream_plist.plist"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",95)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/particles/pinkStream.plist"),HX_CSTRING("binary"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",96)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/particles/pinkStreamAddMode.plist"),HX_CSTRING("assets_particles_pinkstreamaddmode_plist.plist"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",97)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/particles/pinkStreamAddMode.plist"),HX_CSTRING("binary"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",98)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/particles/pinkStreamAddMode.png"),HX_CSTRING("assets_particles_pinkstreamaddmode_png.png"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",99)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/particles/pinkStreamAddMode.png"),HX_CSTRING("image"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",100)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/particles/pinkStreamNormal.pex"),HX_CSTRING("assets_particles_pinkstreamnormal_pex.pex"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",101)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/particles/pinkStreamNormal.pex"),HX_CSTRING("binary"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",102)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/particles/pinkStreamNormal.plist"),HX_CSTRING("assets_particles_pinkstreamnormal_plist.plist"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",103)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/particles/pinkStreamNormal.plist"),HX_CSTRING("binary"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",104)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/particles/pop.plist"),HX_CSTRING("assets_particles_pop_plist.plist"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",105)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/particles/pop.plist"),HX_CSTRING("binary"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",106)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/particles/radialTest.pex"),HX_CSTRING("assets_particles_radialtest_pex.pex"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",107)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/particles/radialTest.pex"),HX_CSTRING("binary"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",108)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/particles/radialTest.plist"),HX_CSTRING("assets_particles_radialtest_plist.plist"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",109)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/particles/radialTest.plist"),HX_CSTRING("binary"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",110)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/particles/radialTest.png"),HX_CSTRING("assets_particles_radialtest_png.png"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",111)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/particles/radialTest.png"),HX_CSTRING("image"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",112)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/particles/radialTest2.pex"),HX_CSTRING("assets_particles_radialtest2_pex.pex"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",113)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/particles/radialTest2.pex"),HX_CSTRING("binary"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",114)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/particles/radialtest2.plist"),HX_CSTRING("assets_particles_radialtest2_plist.plist"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",115)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/particles/radialtest2.plist"),HX_CSTRING("binary"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",116)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/particles/radialTest2.png"),HX_CSTRING("assets_particles_radialtest2_png.png"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",117)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/particles/radialTest2.png"),HX_CSTRING("image"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",118)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/particles/radialTexture.png"),HX_CSTRING("assets_particles_radialtexture_png.png"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",119)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/particles/radialTexture.png"),HX_CSTRING("image"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",120)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/particles/SnowFlake1.png"),HX_CSTRING("assets_particles_snowflake1_png.png"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",121)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/particles/SnowFlake1.png"),HX_CSTRING("image"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",122)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/particles/space.plist"),HX_CSTRING("assets_particles_space_plist.plist"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",123)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/particles/space.plist"),HX_CSTRING("binary"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",124)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/particles/space.png"),HX_CSTRING("assets_particles_space_png.png"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",125)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/particles/space.png"),HX_CSTRING("image"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",126)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/particles/starLines.plist"),HX_CSTRING("assets_particles_starlines_plist.plist"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",127)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/particles/starLines.plist"),HX_CSTRING("binary"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",128)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/particles/starLines.png"),HX_CSTRING("assets_particles_starlines_png.png"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",129)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/particles/starLines.png"),HX_CSTRING("image"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",130)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/particles/test.plist"),HX_CSTRING("assets_particles_test_plist.plist"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",131)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/particles/test.plist"),HX_CSTRING("binary"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",132)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/particles/tourni.plist"),HX_CSTRING("assets_particles_tourni_plist.plist"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",133)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/particles/tourni.plist"),HX_CSTRING("binary"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",134)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/particles/tourni.png"),HX_CSTRING("assets_particles_tourni_png.png"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",135)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/particles/tourni.png"),HX_CSTRING("image"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",136)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/particles/waterfall.plist"),HX_CSTRING("assets_particles_waterfall_plist.plist"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",137)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/particles/waterfall.plist"),HX_CSTRING("binary"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",138)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/particles/waterfall.png"),HX_CSTRING("assets_particles_waterfall_png.png"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",139)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/particles/waterfall.png"),HX_CSTRING("image"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",140)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/particles/waterFountain.plist"),HX_CSTRING("assets_particles_waterfountain_plist.plist"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",141)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/particles/waterFountain.plist"),HX_CSTRING("binary"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",142)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/particles/waterFountain.png"),HX_CSTRING("assets_particles_waterfountain_png.png"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",143)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/particles/waterFountain.png"),HX_CSTRING("image"));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",145)
			::nme::installer::Assets_obj::initialized = true;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Assets_obj,initialize,(void))

::neash::display::BitmapData Assets_obj::getBitmapData( ::String id,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_SOURCE_PUSH("Assets_obj::getBitmapData");
{
		HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",154)
		::nme::installer::Assets_obj::initialize();
		HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",156)
		if (((bool(::nme::installer::Assets_obj::resourceTypes->exists(id)) && bool((::nme::installer::Assets_obj::resourceTypes->get(id) == HX_CSTRING("image")))))){
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",156)
			if (((bool(useCache) && bool(::nme::installer::Assets_obj::cachedBitmapData->exists(id))))){
				HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",158)
				return ::nme::installer::Assets_obj::cachedBitmapData->get(id);
			}
			else{
				HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",164)
				::neash::display::BitmapData data = ::neash::display::BitmapData_obj::load(::nme::installer::Assets_obj::resourceNames->get(id),null());
				HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",166)
				if ((useCache)){
					HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",166)
					::nme::installer::Assets_obj::cachedBitmapData->set(id,data);
				}
				HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",172)
				return data;
			}
		}
		else{
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",178)
			::haxe::Log_obj::trace(((HX_CSTRING("[nme.Assets] There is no BitmapData asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),178,HX_CSTRING("nme.installer.Assets"),HX_CSTRING("getBitmapData")));
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",180)
			return null();
		}
		HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",156)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getBitmapData,return )

::neash::utils::ByteArray Assets_obj::getBytes( ::String id){
	HX_SOURCE_PUSH("Assets_obj::getBytes")
	HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",189)
	::nme::installer::Assets_obj::initialize();
	HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",191)
	if ((::nme::installer::Assets_obj::resourceNames->exists(id))){
		HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",191)
		return ::neash::utils::ByteArray_obj::readFile(::nme::installer::Assets_obj::resourceNames->get(id));
	}
	else{
		HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",197)
		::haxe::Log_obj::trace(((HX_CSTRING("[nme.Assets] There is no String or ByteArray asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),197,HX_CSTRING("nme.installer.Assets"),HX_CSTRING("getBytes")));
		HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",199)
		return null();
	}
	HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",191)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getBytes,return )

::neash::text::Font Assets_obj::getFont( ::String id){
	HX_SOURCE_PUSH("Assets_obj::getFont")
	HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",208)
	::nme::installer::Assets_obj::initialize();
	HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",210)
	if (((bool(::nme::installer::Assets_obj::resourceTypes->exists(id)) && bool((::nme::installer::Assets_obj::resourceTypes->get(id) == HX_CSTRING("font")))))){
		HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",210)
		return ::neash::text::Font_obj::__new(::nme::installer::Assets_obj::resourceNames->get(id));
	}
	else{
		HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",216)
		::haxe::Log_obj::trace(((HX_CSTRING("[nme.Assets] There is no Font asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),216,HX_CSTRING("nme.installer.Assets"),HX_CSTRING("getFont")));
		HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",218)
		return null();
	}
	HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",210)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getFont,return )

::String Assets_obj::getResourceName( ::String id){
	HX_SOURCE_PUSH("Assets_obj::getResourceName")
	HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",227)
	::nme::installer::Assets_obj::initialize();
	HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",229)
	return ::nme::installer::Assets_obj::resourceNames->get(id);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getResourceName,return )

::neash::media::Sound Assets_obj::getSound( ::String id){
	HX_SOURCE_PUSH("Assets_obj::getSound")
	HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",236)
	::nme::installer::Assets_obj::initialize();
	HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",238)
	if ((::nme::installer::Assets_obj::resourceTypes->exists(id))){
		HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",238)
		if (((::nme::installer::Assets_obj::resourceTypes->get(id) == HX_CSTRING("sound")))){
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",240)
			return ::neash::media::Sound_obj::__new(::neash::net::URLRequest_obj::__new(::nme::installer::Assets_obj::resourceNames->get(id)),null(),false);
		}
		else{
			HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",244)
			if (((::nme::installer::Assets_obj::resourceTypes->get(id) == HX_CSTRING("music")))){
				HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",244)
				return ::neash::media::Sound_obj::__new(::neash::net::URLRequest_obj::__new(::nme::installer::Assets_obj::resourceNames->get(id)),null(),true);
			}
		}
	}
	HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",252)
	::haxe::Log_obj::trace(((HX_CSTRING("[nme.Assets] There is no Sound asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),252,HX_CSTRING("nme.installer.Assets"),HX_CSTRING("getSound")));
	HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",254)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getSound,return )

::String Assets_obj::getText( ::String id){
	HX_SOURCE_PUSH("Assets_obj::getText")
	HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",261)
	::neash::utils::ByteArray bytes = ::nme::installer::Assets_obj::getBytes(id);
	HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",263)
	if (((bytes == null()))){
		HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",263)
		return null();
	}
	else{
		HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",267)
		return bytes->readUTFBytes(bytes->length);
	}
	HX_SOURCE_POS("Export/cpp/mac/haxe/nme/installer/Assets.hx",263)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getText,return )


Assets_obj::Assets_obj()
{
}

void Assets_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Assets);
	HX_MARK_END_CLASS();
}

Dynamic Assets_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getFont") ) { return getFont_dyn(); }
		if (HX_FIELD_EQ(inName,"getText") ) { return getText_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getBytes") ) { return getBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"getSound") ) { return getSound_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { return initialized; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"resourceNames") ) { return resourceNames; }
		if (HX_FIELD_EQ(inName,"resourceTypes") ) { return resourceTypes; }
		if (HX_FIELD_EQ(inName,"getBitmapData") ) { return getBitmapData_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getResourceName") ) { return getResourceName_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"cachedBitmapData") ) { return cachedBitmapData; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Assets_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { initialized=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"resourceNames") ) { resourceNames=inValue.Cast< ::Hash >(); return inValue; }
		if (HX_FIELD_EQ(inName,"resourceTypes") ) { resourceTypes=inValue.Cast< ::Hash >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"cachedBitmapData") ) { cachedBitmapData=inValue.Cast< ::Hash >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Assets_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("cachedBitmapData"),
	HX_CSTRING("initialized"),
	HX_CSTRING("resourceNames"),
	HX_CSTRING("resourceTypes"),
	HX_CSTRING("initialize"),
	HX_CSTRING("getBitmapData"),
	HX_CSTRING("getBytes"),
	HX_CSTRING("getFont"),
	HX_CSTRING("getResourceName"),
	HX_CSTRING("getSound"),
	HX_CSTRING("getText"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Assets_obj::cachedBitmapData,"cachedBitmapData");
	HX_MARK_MEMBER_NAME(Assets_obj::initialized,"initialized");
	HX_MARK_MEMBER_NAME(Assets_obj::resourceNames,"resourceNames");
	HX_MARK_MEMBER_NAME(Assets_obj::resourceTypes,"resourceTypes");
};

Class Assets_obj::__mClass;

void Assets_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("nme.installer.Assets"), hx::TCanCast< Assets_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Assets_obj::__boot()
{
	hx::Static(cachedBitmapData) = ::Hash_obj::__new();
	hx::Static(initialized) = false;
	hx::Static(resourceNames) = ::Hash_obj::__new();
	hx::Static(resourceTypes) = ::Hash_obj::__new();
}

} // end namespace nme
} // end namespace installer
