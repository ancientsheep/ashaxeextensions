import Sample;
import nme.Assets;
import nme.events.Event;


class ApplicationMain {
	
	static var mPreloader:NMEPreloader;

	public static function main () {
		
		var call_real = true;
		
		
		var loaded:Int = nme.Lib.current.loaderInfo.bytesLoaded;
		var total:Int = nme.Lib.current.loaderInfo.bytesTotal;
		
		if (loaded < total || true) /* Always wait for event */ {
			
			call_real = false;
			mPreloader = new NMEPreloader();
			nme.Lib.current.addChild(mPreloader);
			mPreloader.onInit();
			mPreloader.onUpdate(loaded,total);
			nme.Lib.current.addEventListener (nme.events.Event.ENTER_FRAME, onEnter);
			
		}
		
		
		
		haxe.Log.trace = flashTrace;
		

		if (call_real)
			begin ();
	}

	private static function flashTrace( v : Dynamic, ?pos : haxe.PosInfos ) {
		var className = pos.className.substr(pos.className.lastIndexOf('.') + 1);
		var message = className+"::"+pos.methodName+":"+pos.lineNumber+": " + v;

        if (flash.external.ExternalInterface.available)
			flash.external.ExternalInterface.call("console.log", message);
		else untyped flash.Boot.__trace(v, pos);
    }
	
	private static function begin () {
		
		var hasMain = false;
		
		for (methodName in Type.getClassFields(Sample))
		{
			if (methodName == "main")
			{
				hasMain = true;
				break;
			}
		}
		
		if (hasMain)
		{
			Reflect.callMethod (Sample, Reflect.field (Sample, "main"), []);
		}
		else
		{
			nme.Lib.current.addChild(cast (Type.createInstance(Sample, []), nme.display.DisplayObject));	
		}
		
	}

	static function onEnter (_) {
		
		var loaded:Int = nme.Lib.current.loaderInfo.bytesLoaded;
		var total:Int = nme.Lib.current.loaderInfo.bytesTotal;
		mPreloader.onUpdate(loaded,total);
		
		if (loaded >= total) {
			
			nme.Lib.current.removeEventListener(nme.events.Event.ENTER_FRAME, onEnter);
			mPreloader.addEventListener (Event.COMPLETE, preloader_onComplete);
			mPreloader.onLoaded();
			
		}
		
	}

	public static function getAsset (inName:String):Dynamic {
		
		
		if (inName=="assets/particles/airStars.plist")
			 
            return Assets.getBytes ("assets/particles/airStars.plist");
         
		
		if (inName=="assets/particles/airStars.png")
			 
            return Assets.getBitmapData ("assets/particles/airStars.png");
         
		
		if (inName=="assets/particles/blizzard.plist")
			 
            return Assets.getBytes ("assets/particles/blizzard.plist");
         
		
		if (inName=="assets/particles/blizzard.png")
			 
            return Assets.getBitmapData ("assets/particles/blizzard.png");
         
		
		if (inName=="assets/particles/boil.plist")
			 
            return Assets.getBytes ("assets/particles/boil.plist");
         
		
		if (inName=="assets/particles/BoilingFoam.png")
			 
            return Assets.getBitmapData ("assets/particles/BoilingFoam.png");
         
		
		if (inName=="assets/particles/comet.plist")
			 
            return Assets.getBytes ("assets/particles/comet.plist");
         
		
		if (inName=="assets/particles/comet.png")
			 
            return Assets.getBitmapData ("assets/particles/comet.png");
         
		
		if (inName=="assets/particles/cometParticle.png")
			 
            return Assets.getBitmapData ("assets/particles/cometParticle.png");
         
		
		if (inName=="assets/particles/crazy.plist")
			 
            return Assets.getBytes ("assets/particles/crazy.plist");
         
		
		if (inName=="assets/particles/crazy.png")
			 
            return Assets.getBitmapData ("assets/particles/crazy.png");
         
		
		if (inName=="assets/particles/defaultEmitter.png")
			 
            return Assets.getBitmapData ("assets/particles/defaultEmitter.png");
         
		
		if (inName=="assets/particles/electrons.plist")
			 
            return Assets.getBytes ("assets/particles/electrons.plist");
         
		
		if (inName=="assets/particles/electrons.png")
			 
            return Assets.getBitmapData ("assets/particles/electrons.png");
         
		
		if (inName=="assets/particles/emit.plist")
			 
            return Assets.getBytes ("assets/particles/emit.plist");
         
		
		if (inName=="assets/particles/emit.png")
			 
            return Assets.getBitmapData ("assets/particles/emit.png");
         
		
		if (inName=="assets/particles/fire.plist")
			 
            return Assets.getBytes ("assets/particles/fire.plist");
         
		
		if (inName=="assets/particles/fire.png")
			 
            return Assets.getBitmapData ("assets/particles/fire.png");
         
		
		if (inName=="assets/particles/fireForest.plist")
			 
            return Assets.getBytes ("assets/particles/fireForest.plist");
         
		
		if (inName=="assets/particles/fireForest.png")
			 
            return Assets.getBitmapData ("assets/particles/fireForest.png");
         
		
		if (inName=="assets/particles/firepart.png")
			 
            return Assets.getBitmapData ("assets/particles/firepart.png");
         
		
		if (inName=="assets/particles/Firework.plist")
			 
            return Assets.getBytes ("assets/particles/Firework.plist");
         
		
		if (inName=="assets/particles/firework.png")
			 
            return Assets.getBitmapData ("assets/particles/firework.png");
         
		
		if (inName=="assets/particles/forestFire.plist")
			 
            return Assets.getBytes ("assets/particles/forestFire.plist");
         
		
		if (inName=="assets/particles/forestFire.png")
			 
            return Assets.getBitmapData ("assets/particles/forestFire.png");
         
		
		if (inName=="assets/particles/galaxy.plist")
			 
            return Assets.getBytes ("assets/particles/galaxy.plist");
         
		
		if (inName=="assets/particles/galaxy.png")
			 
            return Assets.getBitmapData ("assets/particles/galaxy.png");
         
		
		if (inName=="assets/particles/magicBall.plist")
			 
            return Assets.getBytes ("assets/particles/magicBall.plist");
         
		
		if (inName=="assets/particles/magicBall.png")
			 
            return Assets.getBitmapData ("assets/particles/magicBall.png");
         
		
		if (inName=="assets/particles/particleTexture.png")
			 
            return Assets.getBitmapData ("assets/particles/particleTexture.png");
         
		
		if (inName=="assets/particles/pinkNormal.png")
			 
            return Assets.getBitmapData ("assets/particles/pinkNormal.png");
         
		
		if (inName=="assets/particles/pinkParticle.png")
			 
            return Assets.getBitmapData ("assets/particles/pinkParticle.png");
         
		
		if (inName=="assets/particles/pinkStream.plist")
			 
            return Assets.getBytes ("assets/particles/pinkStream.plist");
         
		
		if (inName=="assets/particles/pinkStreamAddMode.plist")
			 
            return Assets.getBytes ("assets/particles/pinkStreamAddMode.plist");
         
		
		if (inName=="assets/particles/pinkStreamAddMode.png")
			 
            return Assets.getBitmapData ("assets/particles/pinkStreamAddMode.png");
         
		
		if (inName=="assets/particles/pinkStreamNormal.pex")
			 
            return Assets.getBytes ("assets/particles/pinkStreamNormal.pex");
         
		
		if (inName=="assets/particles/pinkStreamNormal.plist")
			 
            return Assets.getBytes ("assets/particles/pinkStreamNormal.plist");
         
		
		if (inName=="assets/particles/pop.plist")
			 
            return Assets.getBytes ("assets/particles/pop.plist");
         
		
		if (inName=="assets/particles/radialTest.pex")
			 
            return Assets.getBytes ("assets/particles/radialTest.pex");
         
		
		if (inName=="assets/particles/radialTest.plist")
			 
            return Assets.getBytes ("assets/particles/radialTest.plist");
         
		
		if (inName=="assets/particles/radialTest.png")
			 
            return Assets.getBitmapData ("assets/particles/radialTest.png");
         
		
		if (inName=="assets/particles/radialTest2.pex")
			 
            return Assets.getBytes ("assets/particles/radialTest2.pex");
         
		
		if (inName=="assets/particles/radialtest2.plist")
			 
            return Assets.getBytes ("assets/particles/radialtest2.plist");
         
		
		if (inName=="assets/particles/radialTest2.png")
			 
            return Assets.getBitmapData ("assets/particles/radialTest2.png");
         
		
		if (inName=="assets/particles/radialTexture.png")
			 
            return Assets.getBitmapData ("assets/particles/radialTexture.png");
         
		
		if (inName=="assets/particles/SnowFlake1.png")
			 
            return Assets.getBitmapData ("assets/particles/SnowFlake1.png");
         
		
		if (inName=="assets/particles/space.plist")
			 
            return Assets.getBytes ("assets/particles/space.plist");
         
		
		if (inName=="assets/particles/space.png")
			 
            return Assets.getBitmapData ("assets/particles/space.png");
         
		
		if (inName=="assets/particles/starLines.plist")
			 
            return Assets.getBytes ("assets/particles/starLines.plist");
         
		
		if (inName=="assets/particles/starLines.png")
			 
            return Assets.getBitmapData ("assets/particles/starLines.png");
         
		
		if (inName=="assets/particles/test.plist")
			 
            return Assets.getBytes ("assets/particles/test.plist");
         
		
		if (inName=="assets/particles/tourni.plist")
			 
            return Assets.getBytes ("assets/particles/tourni.plist");
         
		
		if (inName=="assets/particles/tourni.png")
			 
            return Assets.getBitmapData ("assets/particles/tourni.png");
         
		
		if (inName=="assets/particles/waterfall.plist")
			 
            return Assets.getBytes ("assets/particles/waterfall.plist");
         
		
		if (inName=="assets/particles/waterfall.png")
			 
            return Assets.getBitmapData ("assets/particles/waterfall.png");
         
		
		if (inName=="assets/particles/waterFountain.plist")
			 
            return Assets.getBytes ("assets/particles/waterFountain.plist");
         
		
		if (inName=="assets/particles/waterFountain.png")
			 
            return Assets.getBitmapData ("assets/particles/waterFountain.png");
         
		
		
		return null;
		
	}
	
	
	private static function preloader_onComplete (event:Event):Void {
		
		mPreloader.removeEventListener (Event.COMPLETE, preloader_onComplete);
		
		nme.Lib.current.removeChild(mPreloader);
		mPreloader = null;
		
		begin ();
		
	}
	
}


class NME_assets_particles_airstars_plist extends nme.utils.ByteArray { }
class NME_assets_particles_airstars_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_particles_blizzard_plist extends nme.utils.ByteArray { }
class NME_assets_particles_blizzard_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_particles_boil_plist extends nme.utils.ByteArray { }
class NME_assets_particles_boilingfoam_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_particles_comet_plist extends nme.utils.ByteArray { }
class NME_assets_particles_comet_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_particles_cometparticle_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_particles_crazy_plist extends nme.utils.ByteArray { }
class NME_assets_particles_crazy_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_particles_defaultemitter_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_particles_electrons_plist extends nme.utils.ByteArray { }
class NME_assets_particles_electrons_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_particles_emit_plist extends nme.utils.ByteArray { }
class NME_assets_particles_emit_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_particles_fire_plist extends nme.utils.ByteArray { }
class NME_assets_particles_fire_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_particles_fireforest_plist extends nme.utils.ByteArray { }
class NME_assets_particles_fireforest_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_particles_firepart_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_particles_firework_plist extends nme.utils.ByteArray { }
class NME_assets_particles_firework_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_particles_forestfire_plist extends nme.utils.ByteArray { }
class NME_assets_particles_forestfire_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_particles_galaxy_plist extends nme.utils.ByteArray { }
class NME_assets_particles_galaxy_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_particles_magicball_plist extends nme.utils.ByteArray { }
class NME_assets_particles_magicball_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_particles_particletexture_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_particles_pinknormal_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_particles_pinkparticle_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_particles_pinkstream_plist extends nme.utils.ByteArray { }
class NME_assets_particles_pinkstreamaddmode_plist extends nme.utils.ByteArray { }
class NME_assets_particles_pinkstreamaddmode_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_particles_pinkstreamnormal_pex extends nme.utils.ByteArray { }
class NME_assets_particles_pinkstreamnormal_plist extends nme.utils.ByteArray { }
class NME_assets_particles_pop_plist extends nme.utils.ByteArray { }
class NME_assets_particles_radialtest_pex extends nme.utils.ByteArray { }
class NME_assets_particles_radialtest_plist extends nme.utils.ByteArray { }
class NME_assets_particles_radialtest_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_particles_radialtest2_pex extends nme.utils.ByteArray { }
class NME_assets_particles_radialtest2_plist extends nme.utils.ByteArray { }
class NME_assets_particles_radialtest2_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_particles_radialtexture_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_particles_snowflake1_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_particles_space_plist extends nme.utils.ByteArray { }
class NME_assets_particles_space_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_particles_starlines_plist extends nme.utils.ByteArray { }
class NME_assets_particles_starlines_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_particles_test_plist extends nme.utils.ByteArray { }
class NME_assets_particles_tourni_plist extends nme.utils.ByteArray { }
class NME_assets_particles_tourni_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_particles_waterfall_plist extends nme.utils.ByteArray { }
class NME_assets_particles_waterfall_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_particles_waterfountain_plist extends nme.utils.ByteArray { }
class NME_assets_particles_waterfountain_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
