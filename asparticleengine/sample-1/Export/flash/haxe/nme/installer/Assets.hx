package nme.installer;


import nme.display.BitmapData;
import nme.media.Sound;
import nme.net.URLRequest;
import nme.text.Font;
import nme.utils.ByteArray;
import ApplicationMain;


/**
 * ...
 * @author Joshua Granick
 */

class Assets {

	
	public static var cachedBitmapData:Hash<BitmapData> = new Hash<BitmapData>();
	
	private static var initialized:Bool = false;
	private static var resourceClasses:Hash <Dynamic> = new Hash <Dynamic> ();
	private static var resourceTypes:Hash <String> = new Hash <String> ();
	
	
	private static function initialize ():Void {
		
		if (!initialized) {
			
			resourceClasses.set ("assets/particles/airStars.plist", NME_assets_particles_airstars_plist);
			resourceTypes.set ("assets/particles/airStars.plist", "binary");
			resourceClasses.set ("assets/particles/airStars.png", NME_assets_particles_airstars_png);
			resourceTypes.set ("assets/particles/airStars.png", "image");
			resourceClasses.set ("assets/particles/blizzard.plist", NME_assets_particles_blizzard_plist);
			resourceTypes.set ("assets/particles/blizzard.plist", "binary");
			resourceClasses.set ("assets/particles/blizzard.png", NME_assets_particles_blizzard_png);
			resourceTypes.set ("assets/particles/blizzard.png", "image");
			resourceClasses.set ("assets/particles/boil.plist", NME_assets_particles_boil_plist);
			resourceTypes.set ("assets/particles/boil.plist", "binary");
			resourceClasses.set ("assets/particles/BoilingFoam.png", NME_assets_particles_boilingfoam_png);
			resourceTypes.set ("assets/particles/BoilingFoam.png", "image");
			resourceClasses.set ("assets/particles/comet.plist", NME_assets_particles_comet_plist);
			resourceTypes.set ("assets/particles/comet.plist", "binary");
			resourceClasses.set ("assets/particles/comet.png", NME_assets_particles_comet_png);
			resourceTypes.set ("assets/particles/comet.png", "image");
			resourceClasses.set ("assets/particles/cometParticle.png", NME_assets_particles_cometparticle_png);
			resourceTypes.set ("assets/particles/cometParticle.png", "image");
			resourceClasses.set ("assets/particles/crazy.plist", NME_assets_particles_crazy_plist);
			resourceTypes.set ("assets/particles/crazy.plist", "binary");
			resourceClasses.set ("assets/particles/crazy.png", NME_assets_particles_crazy_png);
			resourceTypes.set ("assets/particles/crazy.png", "image");
			resourceClasses.set ("assets/particles/defaultEmitter.png", NME_assets_particles_defaultemitter_png);
			resourceTypes.set ("assets/particles/defaultEmitter.png", "image");
			resourceClasses.set ("assets/particles/electrons.plist", NME_assets_particles_electrons_plist);
			resourceTypes.set ("assets/particles/electrons.plist", "binary");
			resourceClasses.set ("assets/particles/electrons.png", NME_assets_particles_electrons_png);
			resourceTypes.set ("assets/particles/electrons.png", "image");
			resourceClasses.set ("assets/particles/emit.plist", NME_assets_particles_emit_plist);
			resourceTypes.set ("assets/particles/emit.plist", "binary");
			resourceClasses.set ("assets/particles/emit.png", NME_assets_particles_emit_png);
			resourceTypes.set ("assets/particles/emit.png", "image");
			resourceClasses.set ("assets/particles/fire.plist", NME_assets_particles_fire_plist);
			resourceTypes.set ("assets/particles/fire.plist", "binary");
			resourceClasses.set ("assets/particles/fire.png", NME_assets_particles_fire_png);
			resourceTypes.set ("assets/particles/fire.png", "image");
			resourceClasses.set ("assets/particles/fireForest.plist", NME_assets_particles_fireforest_plist);
			resourceTypes.set ("assets/particles/fireForest.plist", "binary");
			resourceClasses.set ("assets/particles/fireForest.png", NME_assets_particles_fireforest_png);
			resourceTypes.set ("assets/particles/fireForest.png", "image");
			resourceClasses.set ("assets/particles/firepart.png", NME_assets_particles_firepart_png);
			resourceTypes.set ("assets/particles/firepart.png", "image");
			resourceClasses.set ("assets/particles/Firework.plist", NME_assets_particles_firework_plist);
			resourceTypes.set ("assets/particles/Firework.plist", "binary");
			resourceClasses.set ("assets/particles/firework.png", NME_assets_particles_firework_png);
			resourceTypes.set ("assets/particles/firework.png", "image");
			resourceClasses.set ("assets/particles/forestFire.plist", NME_assets_particles_forestfire_plist);
			resourceTypes.set ("assets/particles/forestFire.plist", "binary");
			resourceClasses.set ("assets/particles/forestFire.png", NME_assets_particles_forestfire_png);
			resourceTypes.set ("assets/particles/forestFire.png", "image");
			resourceClasses.set ("assets/particles/galaxy.plist", NME_assets_particles_galaxy_plist);
			resourceTypes.set ("assets/particles/galaxy.plist", "binary");
			resourceClasses.set ("assets/particles/galaxy.png", NME_assets_particles_galaxy_png);
			resourceTypes.set ("assets/particles/galaxy.png", "image");
			resourceClasses.set ("assets/particles/magicBall.plist", NME_assets_particles_magicball_plist);
			resourceTypes.set ("assets/particles/magicBall.plist", "binary");
			resourceClasses.set ("assets/particles/magicBall.png", NME_assets_particles_magicball_png);
			resourceTypes.set ("assets/particles/magicBall.png", "image");
			resourceClasses.set ("assets/particles/particleTexture.png", NME_assets_particles_particletexture_png);
			resourceTypes.set ("assets/particles/particleTexture.png", "image");
			resourceClasses.set ("assets/particles/pinkNormal.png", NME_assets_particles_pinknormal_png);
			resourceTypes.set ("assets/particles/pinkNormal.png", "image");
			resourceClasses.set ("assets/particles/pinkParticle.png", NME_assets_particles_pinkparticle_png);
			resourceTypes.set ("assets/particles/pinkParticle.png", "image");
			resourceClasses.set ("assets/particles/pinkStream.plist", NME_assets_particles_pinkstream_plist);
			resourceTypes.set ("assets/particles/pinkStream.plist", "binary");
			resourceClasses.set ("assets/particles/pinkStreamAddMode.plist", NME_assets_particles_pinkstreamaddmode_plist);
			resourceTypes.set ("assets/particles/pinkStreamAddMode.plist", "binary");
			resourceClasses.set ("assets/particles/pinkStreamAddMode.png", NME_assets_particles_pinkstreamaddmode_png);
			resourceTypes.set ("assets/particles/pinkStreamAddMode.png", "image");
			resourceClasses.set ("assets/particles/pinkStreamNormal.pex", NME_assets_particles_pinkstreamnormal_pex);
			resourceTypes.set ("assets/particles/pinkStreamNormal.pex", "binary");
			resourceClasses.set ("assets/particles/pinkStreamNormal.plist", NME_assets_particles_pinkstreamnormal_plist);
			resourceTypes.set ("assets/particles/pinkStreamNormal.plist", "binary");
			resourceClasses.set ("assets/particles/pop.plist", NME_assets_particles_pop_plist);
			resourceTypes.set ("assets/particles/pop.plist", "binary");
			resourceClasses.set ("assets/particles/radialTest.pex", NME_assets_particles_radialtest_pex);
			resourceTypes.set ("assets/particles/radialTest.pex", "binary");
			resourceClasses.set ("assets/particles/radialTest.plist", NME_assets_particles_radialtest_plist);
			resourceTypes.set ("assets/particles/radialTest.plist", "binary");
			resourceClasses.set ("assets/particles/radialTest.png", NME_assets_particles_radialtest_png);
			resourceTypes.set ("assets/particles/radialTest.png", "image");
			resourceClasses.set ("assets/particles/radialTest2.pex", NME_assets_particles_radialtest2_pex);
			resourceTypes.set ("assets/particles/radialTest2.pex", "binary");
			resourceClasses.set ("assets/particles/radialtest2.plist", NME_assets_particles_radialtest2_plist);
			resourceTypes.set ("assets/particles/radialtest2.plist", "binary");
			resourceClasses.set ("assets/particles/radialTest2.png", NME_assets_particles_radialtest2_png);
			resourceTypes.set ("assets/particles/radialTest2.png", "image");
			resourceClasses.set ("assets/particles/radialTexture.png", NME_assets_particles_radialtexture_png);
			resourceTypes.set ("assets/particles/radialTexture.png", "image");
			resourceClasses.set ("assets/particles/SnowFlake1.png", NME_assets_particles_snowflake1_png);
			resourceTypes.set ("assets/particles/SnowFlake1.png", "image");
			resourceClasses.set ("assets/particles/space.plist", NME_assets_particles_space_plist);
			resourceTypes.set ("assets/particles/space.plist", "binary");
			resourceClasses.set ("assets/particles/space.png", NME_assets_particles_space_png);
			resourceTypes.set ("assets/particles/space.png", "image");
			resourceClasses.set ("assets/particles/starLines.plist", NME_assets_particles_starlines_plist);
			resourceTypes.set ("assets/particles/starLines.plist", "binary");
			resourceClasses.set ("assets/particles/starLines.png", NME_assets_particles_starlines_png);
			resourceTypes.set ("assets/particles/starLines.png", "image");
			resourceClasses.set ("assets/particles/test.plist", NME_assets_particles_test_plist);
			resourceTypes.set ("assets/particles/test.plist", "binary");
			resourceClasses.set ("assets/particles/tourni.plist", NME_assets_particles_tourni_plist);
			resourceTypes.set ("assets/particles/tourni.plist", "binary");
			resourceClasses.set ("assets/particles/tourni.png", NME_assets_particles_tourni_png);
			resourceTypes.set ("assets/particles/tourni.png", "image");
			resourceClasses.set ("assets/particles/waterfall.plist", NME_assets_particles_waterfall_plist);
			resourceTypes.set ("assets/particles/waterfall.plist", "binary");
			resourceClasses.set ("assets/particles/waterfall.png", NME_assets_particles_waterfall_png);
			resourceTypes.set ("assets/particles/waterfall.png", "image");
			resourceClasses.set ("assets/particles/waterFountain.plist", NME_assets_particles_waterfountain_plist);
			resourceTypes.set ("assets/particles/waterFountain.plist", "binary");
			resourceClasses.set ("assets/particles/waterFountain.png", NME_assets_particles_waterfountain_png);
			resourceTypes.set ("assets/particles/waterFountain.png", "image");
			
			initialized = true;
			
		}
		
	}
	
	
	public static function getBitmapData (id:String, useCache:Bool = true):BitmapData {
		
		initialize ();
		
		if (resourceTypes.exists (id) && resourceTypes.get (id) == "image") {
			
			if (useCache && cachedBitmapData.exists (id)) {
				
				return cachedBitmapData.get (id);
				
			} else {
				
				var data = cast (Type.createInstance (resourceClasses.get (id), []), BitmapData);
				
				if (useCache) {
					
					cachedBitmapData.set (id, data);
					
				}
				
				return data;
				
			}
			
		} else {
			
			trace ("[nme.Assets] There is no BitmapData asset with an ID of \"" + id + "\"");
			
			return null;
			
		}
		
	}
	
	
	public static function getBytes (id:String):ByteArray {
		
		initialize ();
		
		if (resourceClasses.exists (id)) {
			
			return Type.createInstance (resourceClasses.get (id), []);
			
		} else {
			
			trace ("[nme.Assets] There is no ByteArray asset with an ID of \"" + id + "\"");
			
			return null;
			
		}
		
	}
	
	
	public static function getFont (id:String):Font {
		
		initialize ();
		
		if (resourceTypes.exists (id) && resourceTypes.get (id) == "font") {
			
			return cast (Type.createInstance (resourceClasses.get (id), []), Font);
			
		} else {
			
			trace ("[nme.Assets] There is no Font asset with an ID of \"" + id + "\"");
			
			return null;
			
		}
		
	}
	
	
	public static function getSound (id:String):Sound {
		
		initialize ();
		
		if (resourceTypes.exists (id)) {
			
			if (resourceTypes.get (id) == "sound" || resourceTypes.get (id) == "music") {
				
				return cast (Type.createInstance (resourceClasses.get (id), []), Sound);
				
			}
			
		}
		
		trace ("[nme.Assets] There is no Sound asset with an ID of \"" + id + "\"");
		
		return null;
		
	}
	
	
	public static function getText (id:String):String {
		
		var bytes = getBytes (id);
		
		if (bytes == null) {
			
			return null;
			
		} else {
			
			return bytes.readUTFBytes (bytes.length);
			
		}
		
	}
	
	
}