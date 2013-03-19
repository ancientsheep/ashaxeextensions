package ;

import flash.Lib;
import flash.events.MouseEvent;
import flash.display.Sprite;
import flash.text.TextField;
import ganalytics.GAnalytics;
import haxe.Timer;

/**
IAP sample
*/

class Sample extends Sprite
{
	public function new()
	{
		trace("GA Sample :: new");

		super();

		asIAP.debuggerMode(true);
		//Call google tracking code
		asIAP.startTracker("UA-3286161-48",10);


		haxe.Timer.delay(trackMe,5);
	}

	public function doPurchase()
	{
		trace("asIAP sample :: trackMe (track page)");

		asIAP.trackPage("Testing page");
	}
}

		
