package nme.installer;


import nme.display.BitmapData;
import nme.media.Sound;
import nme.net.URLRequest;
import nme.text.Font;
import nme.utils.ByteArray;


/**
 * ...
 * @author Joshua Granick
 */

class Assets {

	
	public static var cachedBitmapData:Hash<BitmapData> = new Hash<BitmapData>();
	
	private static var initialized:Bool = false;
	private static var resourceNames:Hash <String> = new Hash <String> ();
	private static var resourceTypes:Hash <String> = new Hash <String> ();
	
	
	private static function initialize ():Void {
		
		if (!initialized) {
			
			resourceNames.set ("assets/particles/airStars.plist", "assets_particles_airstars_plist.plist");
			resourceTypes.set ("assets/particles/airStars.plist", "binary");
			resourceNames.set ("assets/particles/airStars.png", "assets_particles_airstars_png.png");
			resourceTypes.set ("assets/particles/airStars.png", "image");
			resourceNames.set ("assets/particles/blizzard.plist", "assets_particles_blizzard_plist.plist");
			resourceTypes.set ("assets/particles/blizzard.plist", "binary");
			resourceNames.set ("assets/particles/blizzard.png", "assets_particles_blizzard_png.png");
			resourceTypes.set ("assets/particles/blizzard.png", "image");
			resourceNames.set ("assets/particles/boil.plist", "assets_particles_boil_plist.plist");
			resourceTypes.set ("assets/particles/boil.plist", "binary");
			resourceNames.set ("assets/particles/BoilingFoam.png", "assets_particles_boilingfoam_png.png");
			resourceTypes.set ("assets/particles/BoilingFoam.png", "image");
			resourceNames.set ("assets/particles/comet.plist", "assets_particles_comet_plist.plist");
			resourceTypes.set ("assets/particles/comet.plist", "binary");
			resourceNames.set ("assets/particles/comet.png", "assets_particles_comet_png.png");
			resourceTypes.set ("assets/particles/comet.png", "image");
			resourceNames.set ("assets/particles/cometParticle.png", "assets_particles_cometparticle_png.png");
			resourceTypes.set ("assets/particles/cometParticle.png", "image");
			resourceNames.set ("assets/particles/crazy.plist", "assets_particles_crazy_plist.plist");
			resourceTypes.set ("assets/particles/crazy.plist", "binary");
			resourceNames.set ("assets/particles/crazy.png", "assets_particles_crazy_png.png");
			resourceTypes.set ("assets/particles/crazy.png", "image");
			resourceNames.set ("assets/particles/defaultEmitter.png", "assets_particles_defaultemitter_png.png");
			resourceTypes.set ("assets/particles/defaultEmitter.png", "image");
			resourceNames.set ("assets/particles/electrons.plist", "assets_particles_electrons_plist.plist");
			resourceTypes.set ("assets/particles/electrons.plist", "binary");
			resourceNames.set ("assets/particles/electrons.png", "assets_particles_electrons_png.png");
			resourceTypes.set ("assets/particles/electrons.png", "image");
			resourceNames.set ("assets/particles/emit.plist", "assets_particles_emit_plist.plist");
			resourceTypes.set ("assets/particles/emit.plist", "binary");
			resourceNames.set ("assets/particles/emit.png", "assets_particles_emit_png.png");
			resourceTypes.set ("assets/particles/emit.png", "image");
			resourceNames.set ("assets/particles/fire.plist", "assets_particles_fire_plist.plist");
			resourceTypes.set ("assets/particles/fire.plist", "binary");
			resourceNames.set ("assets/particles/fire.png", "assets_particles_fire_png.png");
			resourceTypes.set ("assets/particles/fire.png", "image");
			resourceNames.set ("assets/particles/fireForest.plist", "assets_particles_fireforest_plist.plist");
			resourceTypes.set ("assets/particles/fireForest.plist", "binary");
			resourceNames.set ("assets/particles/fireForest.png", "assets_particles_fireforest_png.png");
			resourceTypes.set ("assets/particles/fireForest.png", "image");
			resourceNames.set ("assets/particles/firepart.png", "assets_particles_firepart_png.png");
			resourceTypes.set ("assets/particles/firepart.png", "image");
			resourceNames.set ("assets/particles/Firework.plist", "assets_particles_firework_plist.plist");
			resourceTypes.set ("assets/particles/Firework.plist", "binary");
			resourceNames.set ("assets/particles/firework.png", "assets_particles_firework_png.png");
			resourceTypes.set ("assets/particles/firework.png", "image");
			resourceNames.set ("assets/particles/forestFire.plist", "assets_particles_forestfire_plist.plist");
			resourceTypes.set ("assets/particles/forestFire.plist", "binary");
			resourceNames.set ("assets/particles/forestFire.png", "assets_particles_forestfire_png.png");
			resourceTypes.set ("assets/particles/forestFire.png", "image");
			resourceNames.set ("assets/particles/galaxy.plist", "assets_particles_galaxy_plist.plist");
			resourceTypes.set ("assets/particles/galaxy.plist", "binary");
			resourceNames.set ("assets/particles/galaxy.png", "assets_particles_galaxy_png.png");
			resourceTypes.set ("assets/particles/galaxy.png", "image");
			resourceNames.set ("assets/particles/magicBall.plist", "assets_particles_magicball_plist.plist");
			resourceTypes.set ("assets/particles/magicBall.plist", "binary");
			resourceNames.set ("assets/particles/magicBall.png", "assets_particles_magicball_png.png");
			resourceTypes.set ("assets/particles/magicBall.png", "image");
			resourceNames.set ("assets/particles/particleTexture.png", "assets_particles_particletexture_png.png");
			resourceTypes.set ("assets/particles/particleTexture.png", "image");
			resourceNames.set ("assets/particles/pinkNormal.png", "assets_particles_pinknormal_png.png");
			resourceTypes.set ("assets/particles/pinkNormal.png", "image");
			resourceNames.set ("assets/particles/pinkParticle.png", "assets_particles_pinkparticle_png.png");
			resourceTypes.set ("assets/particles/pinkParticle.png", "image");
			resourceNames.set ("assets/particles/pinkStream.plist", "assets_particles_pinkstream_plist.plist");
			resourceTypes.set ("assets/particles/pinkStream.plist", "binary");
			resourceNames.set ("assets/particles/pinkStreamAddMode.plist", "assets_particles_pinkstreamaddmode_plist.plist");
			resourceTypes.set ("assets/particles/pinkStreamAddMode.plist", "binary");
			resourceNames.set ("assets/particles/pinkStreamAddMode.png", "assets_particles_pinkstreamaddmode_png.png");
			resourceTypes.set ("assets/particles/pinkStreamAddMode.png", "image");
			resourceNames.set ("assets/particles/pinkStreamNormal.pex", "assets_particles_pinkstreamnormal_pex.pex");
			resourceTypes.set ("assets/particles/pinkStreamNormal.pex", "binary");
			resourceNames.set ("assets/particles/pinkStreamNormal.plist", "assets_particles_pinkstreamnormal_plist.plist");
			resourceTypes.set ("assets/particles/pinkStreamNormal.plist", "binary");
			resourceNames.set ("assets/particles/pop.plist", "assets_particles_pop_plist.plist");
			resourceTypes.set ("assets/particles/pop.plist", "binary");
			resourceNames.set ("assets/particles/radialTest.pex", "assets_particles_radialtest_pex.pex");
			resourceTypes.set ("assets/particles/radialTest.pex", "binary");
			resourceNames.set ("assets/particles/radialTest.plist", "assets_particles_radialtest_plist.plist");
			resourceTypes.set ("assets/particles/radialTest.plist", "binary");
			resourceNames.set ("assets/particles/radialTest.png", "assets_particles_radialtest_png.png");
			resourceTypes.set ("assets/particles/radialTest.png", "image");
			resourceNames.set ("assets/particles/radialTest2.pex", "assets_particles_radialtest2_pex.pex");
			resourceTypes.set ("assets/particles/radialTest2.pex", "binary");
			resourceNames.set ("assets/particles/radialtest2.plist", "assets_particles_radialtest2_plist.plist");
			resourceTypes.set ("assets/particles/radialtest2.plist", "binary");
			resourceNames.set ("assets/particles/radialTest2.png", "assets_particles_radialtest2_png.png");
			resourceTypes.set ("assets/particles/radialTest2.png", "image");
			resourceNames.set ("assets/particles/radialTexture.png", "assets_particles_radialtexture_png.png");
			resourceTypes.set ("assets/particles/radialTexture.png", "image");
			resourceNames.set ("assets/particles/SnowFlake1.png", "assets_particles_snowflake1_png.png");
			resourceTypes.set ("assets/particles/SnowFlake1.png", "image");
			resourceNames.set ("assets/particles/space.plist", "assets_particles_space_plist.plist");
			resourceTypes.set ("assets/particles/space.plist", "binary");
			resourceNames.set ("assets/particles/space.png", "assets_particles_space_png.png");
			resourceTypes.set ("assets/particles/space.png", "image");
			resourceNames.set ("assets/particles/starLines.plist", "assets_particles_starlines_plist.plist");
			resourceTypes.set ("assets/particles/starLines.plist", "binary");
			resourceNames.set ("assets/particles/starLines.png", "assets_particles_starlines_png.png");
			resourceTypes.set ("assets/particles/starLines.png", "image");
			resourceNames.set ("assets/particles/test.plist", "assets_particles_test_plist.plist");
			resourceTypes.set ("assets/particles/test.plist", "binary");
			resourceNames.set ("assets/particles/tourni.plist", "assets_particles_tourni_plist.plist");
			resourceTypes.set ("assets/particles/tourni.plist", "binary");
			resourceNames.set ("assets/particles/tourni.png", "assets_particles_tourni_png.png");
			resourceTypes.set ("assets/particles/tourni.png", "image");
			resourceNames.set ("assets/particles/waterfall.plist", "assets_particles_waterfall_plist.plist");
			resourceTypes.set ("assets/particles/waterfall.plist", "binary");
			resourceNames.set ("assets/particles/waterfall.png", "assets_particles_waterfall_png.png");
			resourceTypes.set ("assets/particles/waterfall.png", "image");
			resourceNames.set ("assets/particles/waterFountain.plist", "assets_particles_waterfountain_plist.plist");
			resourceTypes.set ("assets/particles/waterFountain.plist", "binary");
			resourceNames.set ("assets/particles/waterFountain.png", "assets_particles_waterfountain_png.png");
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
				
				var data = BitmapData.load (resourceNames.get (id));
				
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
		
		if (resourceNames.exists (id)) {
			
			return ByteArray.readFile (resourceNames.get (id));
			
		} else {
			
			trace ("[nme.Assets] There is no String or ByteArray asset with an ID of \"" + id + "\"");
			
			return null;
			
		}
		
	}
	
	
	public static function getFont (id:String):Font {
		
		initialize ();
		
		if (resourceTypes.exists (id) && resourceTypes.get (id) == "font") {
			
			return new Font (resourceNames.get (id));
			
		} else {
			
			trace ("[nme.Assets] There is no Font asset with an ID of \"" + id + "\"");
			
			return null;
			
		}
		
	}
	
	
	public static function getResourceName (id:String):String {
		
		initialize ();
		
		return resourceNames.get (id);
		
	}
	
	
	public static function getSound (id:String):Sound {
		
		initialize ();
		
		if (resourceTypes.exists (id)) {
			
			if (resourceTypes.get (id) == "sound") {
				
				return new Sound (new URLRequest (resourceNames.get (id)), null, false);
				
			} else if (resourceTypes.get (id) == "music") {
				
				return new Sound (new URLRequest (resourceNames.get (id)), null, true);
				
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
