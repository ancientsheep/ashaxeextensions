package com.ancientsheep.particles;

import nme.display.Sprite;
import nme.display.BitmapData;
import nme.events.Event;
import nme.Assets;
import nme.Lib;
import nme.system.Capabilities;
import nme.geom.Point;

import com.ancientsheep.particles.ASTypes;

class ASParticle 
{
	public var pos :Point;
	public var startPos :Point;
	public var color :ASColor4F;
	public var deltaColor :ASColor4F;
	public var size :Float;
	public var deltaSize :Float;
	public var rotation :Float;
	public var deltaRotation :Float;
	public var timeToLive :Float;
	public var mode :Mode;//A or B

	public function new()
	{
		//trace("ASParticle :: new");
		pos = new Point();
		startPos = new Point();

		// Mode A: Gravity + tangential accel + radial accel
		mode = {
			A:{ gravity:new Point(), dir: new Point(),speed:.0, speedVar:.0, tangentialAccel:.0, tangentialAccelVar:.0, radialAccel:.0, radialAccelVar:.0 },
			B:{startRadius:.0, startRadiusVar:.0, endRadius:.0, endRadiusVar:.0, rotatePerSecond:.0, rotatePerSecondVar:.0,deltaRadius: .0,angle: .0,degreesPerSecond: .0,radius: .0}
		};
	}
}