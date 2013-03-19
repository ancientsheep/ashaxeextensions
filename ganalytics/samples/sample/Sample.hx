package ;

import flash.Lib;
import flash.events.MouseEvent;
import flash.display.Sprite;
import flash.text.TextField;
import ganalytics.GAnalytics;
import haxe.Timer;

/**
Google analyics sample
*/

class Sample extends Sprite
{
	public function new()
	{
		trace("GA Sample :: new");

		super();

		GAnalytics.debuggerMode(true);
		//Call google tracking code
		GAnalytics.startTracker("UA-3286161-48",10);


		haxe.Timer.delay(trackMe,5);
	}

	public function trackMe()
	{
		trace("GA Sample :: trackMe (track page)");

		GAnalytics.trackPage("Testing page");
	}
}

		
