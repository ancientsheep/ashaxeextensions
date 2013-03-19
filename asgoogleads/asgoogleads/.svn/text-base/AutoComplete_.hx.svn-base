/**
*  
*  if you want to use AD, you must change nme to set keyWindows.rootViewController
*  
*  */
package asgoogleads;

import nme.Lib;

class AsGoogleAd{
	// iphone
	private static var running:Bool = false;
	private static var initialized:Bool = false;

	private static inline var ASGAD_PAUSE:Int=1;
	private static inline var ASGAD_RESUME:Int=2;

	private var onAdClick:Dynamic;
	private var onAdClickFinished:Dynamic;

	public static function showAd(id:String = "",x:Int = 0,y:Int = 0, sizeType:Int=0):Void{

		trace("showAd");

		if(!running){
			trace("not currently running");

			asgad_showad(id,x,y,sizeType);
			running = true;
		}	
	}	

	public static function init(f1:Dynamic,f2:Dynamic):Void
	{
		trace("asgad_init");
		
		if(initialized==false)
		{
			asgad_init(asgaevent_callback);
			initialized = true;
		}

		else
			trace("asgad_init :: already initialized");

		//Setup our callback functions
		onAdClick = f1;
		onAdClickFinished = f2;
	}
	
	public static function hideAd():Void{
		trace("hideAd");

		if(running){
			trace("currently running");
			asgad_hidead();
			running = false;
		}
	}

	static function asgaevent_callback(eventId:Int):Void
	{
		trace("HX: received event: "+eventId);

		if(eventId==ASGAD_PAUSE)
		{
			onAdClick();
			Lib.pause();
		}

		else if(eventId==ASGAD_RESUME)
		{
			onAdClickFinished
			Lib.resume();
		}
	}
	

	static var asgad_init= nme.Loader.load("asgad_init",1);
	static var asgad_showad = nme.Loader.load("asgad_showad",4);
	static var asgad_hidead = nme.Loader.load("asgad_hidead",0);
}