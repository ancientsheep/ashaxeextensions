class ApplicationMain
{

	#if waxe
	static public var frame : wx.Frame;
	static public var autoShowFrame : Bool = true;
	#if nme
	static public var nmeStage : wx.NMEStage;
	#end
	#end
	
	public static function main()
	{
		#if nme
		nme.Lib.setPackage("Mourlam Studios", "Sample", "com.mourlamstudios.haxeparticledesigner", "1.0.0");
		
		#end
		
		#if waxe
		wx.App.boot(function()
		{
			
			frame = wx.Frame.create(null, null, "Haxe Particle Designer Sample 1", null, { width: 320, height: 480 });
			
			#if nme
			var stage = wx.NMEStage.create(frame, null, null, { width: 320, height: 480 });
			#end
			
			Sample.main();
			
			if (autoShowFrame)
			{
				wx.App.setTopWindow(frame);
				frame.shown = true;
			}
		});
		#else
		
		nme.Lib.create(function()
			{ 
				if (320 == 0 && 480 == 0)
				{
					nme.Lib.current.stage.align = nme.display.StageAlign.TOP_LEFT;
					nme.Lib.current.stage.scaleMode = nme.display.StageScaleMode.NO_SCALE;
				}
				
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
			},
			320, 480, 
			30, 
			0xffffff,
			(true ? nme.Lib.HARDWARE : 0) |
			(false ? nme.Lib.ALLOW_SHADERS : 0) |
			(true ? nme.Lib.RESIZABLE : 0) |
			(false ? nme.Lib.BORDERLESS : 0) |
			(false ? nme.Lib.VSYNC : 0) |
			(false ? nme.Lib.FULLSCREEN : 0) |
			(1 == 4 ? nme.Lib.HW_AA_HIRES : 0) |
			(1 == 2 ? nme.Lib.HW_AA : 0),
			"Haxe Particle Designer Sample 1"
			
		);
		#end
		
	}
	
	
	public static function getAsset(inName:String):Dynamic
	{
		#if nme
		
		if (inName == "assets/particles/airStars.plist")
		{
			
			return nme.Assets.getBytes ("assets/particles/airStars.plist");
			
		}
		
		if (inName == "assets/particles/airStars.png")
		{
			
			return nme.Assets.getBitmapData ("assets/particles/airStars.png");
			
		}
		
		if (inName == "assets/particles/blizzard.plist")
		{
			
			return nme.Assets.getBytes ("assets/particles/blizzard.plist");
			
		}
		
		if (inName == "assets/particles/blizzard.png")
		{
			
			return nme.Assets.getBitmapData ("assets/particles/blizzard.png");
			
		}
		
		if (inName == "assets/particles/boil.plist")
		{
			
			return nme.Assets.getBytes ("assets/particles/boil.plist");
			
		}
		
		if (inName == "assets/particles/BoilingFoam.png")
		{
			
			return nme.Assets.getBitmapData ("assets/particles/BoilingFoam.png");
			
		}
		
		if (inName == "assets/particles/comet.plist")
		{
			
			return nme.Assets.getBytes ("assets/particles/comet.plist");
			
		}
		
		if (inName == "assets/particles/comet.png")
		{
			
			return nme.Assets.getBitmapData ("assets/particles/comet.png");
			
		}
		
		if (inName == "assets/particles/cometParticle.png")
		{
			
			return nme.Assets.getBitmapData ("assets/particles/cometParticle.png");
			
		}
		
		if (inName == "assets/particles/crazy.plist")
		{
			
			return nme.Assets.getBytes ("assets/particles/crazy.plist");
			
		}
		
		if (inName == "assets/particles/crazy.png")
		{
			
			return nme.Assets.getBitmapData ("assets/particles/crazy.png");
			
		}
		
		if (inName == "assets/particles/defaultEmitter.png")
		{
			
			return nme.Assets.getBitmapData ("assets/particles/defaultEmitter.png");
			
		}
		
		if (inName == "assets/particles/electrons.plist")
		{
			
			return nme.Assets.getBytes ("assets/particles/electrons.plist");
			
		}
		
		if (inName == "assets/particles/electrons.png")
		{
			
			return nme.Assets.getBitmapData ("assets/particles/electrons.png");
			
		}
		
		if (inName == "assets/particles/emit.plist")
		{
			
			return nme.Assets.getBytes ("assets/particles/emit.plist");
			
		}
		
		if (inName == "assets/particles/emit.png")
		{
			
			return nme.Assets.getBitmapData ("assets/particles/emit.png");
			
		}
		
		if (inName == "assets/particles/fire.plist")
		{
			
			return nme.Assets.getBytes ("assets/particles/fire.plist");
			
		}
		
		if (inName == "assets/particles/fire.png")
		{
			
			return nme.Assets.getBitmapData ("assets/particles/fire.png");
			
		}
		
		if (inName == "assets/particles/fireForest.plist")
		{
			
			return nme.Assets.getBytes ("assets/particles/fireForest.plist");
			
		}
		
		if (inName == "assets/particles/fireForest.png")
		{
			
			return nme.Assets.getBitmapData ("assets/particles/fireForest.png");
			
		}
		
		if (inName == "assets/particles/firepart.png")
		{
			
			return nme.Assets.getBitmapData ("assets/particles/firepart.png");
			
		}
		
		if (inName == "assets/particles/Firework.plist")
		{
			
			return nme.Assets.getBytes ("assets/particles/Firework.plist");
			
		}
		
		if (inName == "assets/particles/firework.png")
		{
			
			return nme.Assets.getBitmapData ("assets/particles/firework.png");
			
		}
		
		if (inName == "assets/particles/forestFire.plist")
		{
			
			return nme.Assets.getBytes ("assets/particles/forestFire.plist");
			
		}
		
		if (inName == "assets/particles/forestFire.png")
		{
			
			return nme.Assets.getBitmapData ("assets/particles/forestFire.png");
			
		}
		
		if (inName == "assets/particles/galaxy.plist")
		{
			
			return nme.Assets.getBytes ("assets/particles/galaxy.plist");
			
		}
		
		if (inName == "assets/particles/galaxy.png")
		{
			
			return nme.Assets.getBitmapData ("assets/particles/galaxy.png");
			
		}
		
		if (inName == "assets/particles/magicBall.plist")
		{
			
			return nme.Assets.getBytes ("assets/particles/magicBall.plist");
			
		}
		
		if (inName == "assets/particles/magicBall.png")
		{
			
			return nme.Assets.getBitmapData ("assets/particles/magicBall.png");
			
		}
		
		if (inName == "assets/particles/particleTexture.png")
		{
			
			return nme.Assets.getBitmapData ("assets/particles/particleTexture.png");
			
		}
		
		if (inName == "assets/particles/pinkNormal.png")
		{
			
			return nme.Assets.getBitmapData ("assets/particles/pinkNormal.png");
			
		}
		
		if (inName == "assets/particles/pinkParticle.png")
		{
			
			return nme.Assets.getBitmapData ("assets/particles/pinkParticle.png");
			
		}
		
		if (inName == "assets/particles/pinkStream.plist")
		{
			
			return nme.Assets.getBytes ("assets/particles/pinkStream.plist");
			
		}
		
		if (inName == "assets/particles/pinkStreamAddMode.plist")
		{
			
			return nme.Assets.getBytes ("assets/particles/pinkStreamAddMode.plist");
			
		}
		
		if (inName == "assets/particles/pinkStreamAddMode.png")
		{
			
			return nme.Assets.getBitmapData ("assets/particles/pinkStreamAddMode.png");
			
		}
		
		if (inName == "assets/particles/pinkStreamNormal.pex")
		{
			
			return nme.Assets.getBytes ("assets/particles/pinkStreamNormal.pex");
			
		}
		
		if (inName == "assets/particles/pinkStreamNormal.plist")
		{
			
			return nme.Assets.getBytes ("assets/particles/pinkStreamNormal.plist");
			
		}
		
		if (inName == "assets/particles/pop.plist")
		{
			
			return nme.Assets.getBytes ("assets/particles/pop.plist");
			
		}
		
		if (inName == "assets/particles/radialTest.pex")
		{
			
			return nme.Assets.getBytes ("assets/particles/radialTest.pex");
			
		}
		
		if (inName == "assets/particles/radialTest.plist")
		{
			
			return nme.Assets.getBytes ("assets/particles/radialTest.plist");
			
		}
		
		if (inName == "assets/particles/radialTest.png")
		{
			
			return nme.Assets.getBitmapData ("assets/particles/radialTest.png");
			
		}
		
		if (inName == "assets/particles/radialTest2.pex")
		{
			
			return nme.Assets.getBytes ("assets/particles/radialTest2.pex");
			
		}
		
		if (inName == "assets/particles/radialtest2.plist")
		{
			
			return nme.Assets.getBytes ("assets/particles/radialtest2.plist");
			
		}
		
		if (inName == "assets/particles/radialTest2.png")
		{
			
			return nme.Assets.getBitmapData ("assets/particles/radialTest2.png");
			
		}
		
		if (inName == "assets/particles/radialTexture.png")
		{
			
			return nme.Assets.getBitmapData ("assets/particles/radialTexture.png");
			
		}
		
		if (inName == "assets/particles/SnowFlake1.png")
		{
			
			return nme.Assets.getBitmapData ("assets/particles/SnowFlake1.png");
			
		}
		
		if (inName == "assets/particles/space.plist")
		{
			
			return nme.Assets.getBytes ("assets/particles/space.plist");
			
		}
		
		if (inName == "assets/particles/space.png")
		{
			
			return nme.Assets.getBitmapData ("assets/particles/space.png");
			
		}
		
		if (inName == "assets/particles/starLines.plist")
		{
			
			return nme.Assets.getBytes ("assets/particles/starLines.plist");
			
		}
		
		if (inName == "assets/particles/starLines.png")
		{
			
			return nme.Assets.getBitmapData ("assets/particles/starLines.png");
			
		}
		
		if (inName == "assets/particles/test.plist")
		{
			
			return nme.Assets.getBytes ("assets/particles/test.plist");
			
		}
		
		if (inName == "assets/particles/tourni.plist")
		{
			
			return nme.Assets.getBytes ("assets/particles/tourni.plist");
			
		}
		
		if (inName == "assets/particles/tourni.png")
		{
			
			return nme.Assets.getBitmapData ("assets/particles/tourni.png");
			
		}
		
		if (inName == "assets/particles/waterfall.plist")
		{
			
			return nme.Assets.getBytes ("assets/particles/waterfall.plist");
			
		}
		
		if (inName == "assets/particles/waterfall.png")
		{
			
			return nme.Assets.getBitmapData ("assets/particles/waterfall.png");
			
		}
		
		if (inName == "assets/particles/waterFountain.plist")
		{
			
			return nme.Assets.getBytes ("assets/particles/waterFountain.plist");
			
		}
		
		if (inName == "assets/particles/waterFountain.png")
		{
			
			return nme.Assets.getBitmapData ("assets/particles/waterFountain.png");
			
		}
		
		#end
		return null;
	}
	
	
}
