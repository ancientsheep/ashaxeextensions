package com.ancientsheep.particles;

import com.ancientsheep.particles.ASConfig;
import com.ancientsheep.particles.ASTypes;
import nme.geom.Rectangle;

class ASMacros
{
	//inline public static var ASM_PI = Math.PI;
	//inline public static var ASM_PI_2 = Math.PI*2;


	/** @def ASSWAP
	simple macro that swaps 2 variables
	You have to extract them from the anonymous object
	*/
	public static function ASSWAP( x, y ) :{x:Dynamic, y:Dynamic} {
	 	return {x:y, y:x};
	}

	/** @def RANDOM_MINUS1_1
	 returns a random Float between -1 and 1
	 */
	public static function RANDOM_MINUS1_1() :Float {
		return Math.random() * 2.0 - 1.0;
	}

	/** @def RANDOM_0_1
	 returns a random Float between 0 and 1
	 */
	public static function RANDOM_0_1() :Float {
		return Math.random() * 1.0;
	}

	/** @def ASDEGREES_TO_RADIANS
	 converts degrees to radians
	 */
	public static function ASDEGREES_TO_RADIANS(angle:Float) :Float {
		return angle * 0.01745329252; // PI / 180
	}

	/** @def ASRADIANS_TO_DEGREES
	 converts radians to degrees
	 */
	public static function ASRADIANS_TO_DEGREES(angle:Float) :Float {
		return angle * 57.29577951; // PI * 180
	}



	#if ASIS_RETINA_DISPLAY_SUPPORTED

	/****************************/
	/** RETINA DISPLAY ENABLED **/
	/****************************/

	public static function ASRectangle_PIXELS_TO_POINTS (pixels:Rectangle) :Rectangle
	{
		return new Rectangle (	pixels.origin.x / ASConfig.ASCONTENT_SCALE_FACTOR,
							pixels.origin.y / ASConfig.ASCONTENT_SCALE_FACTOR,
							pixels.size.width / ASConfig.ASCONTENT_SCALE_FACTOR,
							pixels.size.height / ASConfig.ASCONTENT_SCALE_FACTOR );
	}

	/** @def ASRectangle_POINTS_TO_PIXELS
	 Converts a Rectangle in points to pixels
	 */
	public static function ASRectangle_POINTS_TO_PIXELS (points:Rectangle) :Rectangle
	{
		return new Rectangle (	points.origin.x * ASConfig.ASCONTENT_SCALE_FACTOR,
							points.origin.y * ASConfig.ASCONTENT_SCALE_FACTOR,
							points.size.width * ASConfig.ASCONTENT_SCALE_FACTOR,
							points.size.height * ASConfig.ASCONTENT_SCALE_FACTOR );
	}

	#else
	/*****************************/
	/** RETINA DISPLAY DISABLED **/
	/*****************************/

	public static function ASRectangle_PIXELS_TO_POINTS (pixels:Rectangle) :Rectangle { return pixels; }
	public static function ASRectangle_POINTS_TO_PIXELS (points:Rectangle) :Rectangle { return points; }

	#end // ASIS_RETINA_DISPLAY_SUPPORTED
}