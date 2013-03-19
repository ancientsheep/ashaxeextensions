
package com.ancientsheep.particles;

/*
 * cocos2d for iPhone: http://www.cocos2d-iphone.org
 *
 * Copyright (c) 2008-2010 Ricardo Quesada
 * Copyright (c) 2011 Zynga Inc.
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */
//import platforms.CCGL;

/** RGB color composed of bytes 3 bytes
@since v0.8
 */

import nme.geom.Point;

typedef A = {
	var gravity :Point;
	var dir:Point;
	var speed :Float;
	var speedVar :Float;//variance
	var tangentialAccel :Float;
	var tangentialAccelVar :Float;
	var radialAccel :Float;
	var radialAccelVar :Float;
}	
// Mode B: circular movement (gravity, radial accel and tangential accel are not used in this mode)
typedef B = {
	var startRadius :Float;
	var startRadiusVar :Float;
	var endRadius :Float;
	var endRadiusVar :Float ;
	var rotatePerSecond :Float;
	var rotatePerSecondVar :Float;


	//Custom vars not included in plist
	var deltaRadius:Float;
	var angle:Float;
	var degreesPerSecond:Float;
	var radius:Float;
}

typedef Mode = {
	var A :A;
	var B :B;
}




typedef ASColor3B =
{
	var r :Int;
	var g :Int;
	var b :Int;
}

/** RGBA color composed of 4 bytes
@since v0.8
*/
typedef ASColor4B =
{
	var r :Int;
	var g :Int;
	var b :Int;
	var a :Int;
}


/** RGBA color composed of 4 Floats
@since v0.8
*/
typedef ASColor4F =
{
	var r :Float;
	var g :Float;
	var b :Float;
	var a :Float;
}

/** A vertex composed of 2 Floats: x, y
 @since v0.8
 */
typedef ASVertex2F =
{
	var x :Float;
	var y :Float;
}

/** A vertex composed of 2 Floats: x, y
 @since v0.8
 */
typedef ASVertex3F =
{
	var x :Float;
	var y :Float;
	var z :Float;
}

/** A texcoord composed of 2 Floats: u, y
 @since v0.8
 */
typedef ASTex2F =
{
	var u :Float;
	var v :Float;
}


//! Point Sprite component
typedef ASPointSprite =
{
	var pos :ASVertex2F;	// 8 bytes
	var color :ASColor4B;	// 4 bytes
	var size :Float;		// 4 bytes
}

//!	A 2D Quad. 4 * 2 Floats
typedef ASQuad2 =
{
	var tl :ASVertex2F;
	var tr :ASVertex2F;
	var bl :ASVertex2F;
	var br :ASVertex2F;
};


//!	A 3D Quad. 4 * 3 Floats
typedef ASQuad3 =
{
	var bl :ASVertex3F;
	var br :ASVertex3F;
	var tl :ASVertex3F;
	var tr :ASVertex3F;
}

//! A 2D grid size
typedef ASGridSize =
{
	var x :Int;
	var y :Int;
}

//! a Point with a vertex point, a tex coord point and a color 4B
typedef ASV2F_C4B_T2F =
{
	//! vertices (2F)
	var vertices :ASVertex2F;
	//! colors (4B)
	var colors :ASColor4B;
	//! tex coords (2F)
	var texCoords :ASTex2F;
}

//! a Point with a vertex point, a tex coord point and a color 4F
typedef ASV2F_C4F_T2F =
{
	//! vertices (2F)
	var vertices :ASVertex2F;
	//! colors (4F)
	var colors :ASColor4F;
	//! tex coords (2F)
	var texCoords :ASTex2F;
}

//! a Point with a vertex point, a tex coord point and a color 4B
typedef ASV3F_C4B_T2F =
{
	//! vertices (3F)
	var vertices :ASVertex3F;			// 12 bytes
//	char __padding__[4();

	//! colors (4B)
	var colors :ASColor4B;				// 4 bytes
//	char __padding2__[4();

	// tex coords (2F)
	var texCoords :ASTex2F;			// 8 byts
}

//! 4 ASVertex2FTex2FColor4B Quad
typedef ASV2F_C4B_T2F_Quad =
{
	//! bottom left
	var bl :ASV2F_C4B_T2F;
	//! bottom right
	var br :ASV2F_C4B_T2F;
	//! top left
	var tl :ASV2F_C4B_T2F;
	//! top right
	var tr :ASV2F_C4B_T2F;
}

//! 4 ASVertex3FTex2FColor4B
typedef ASV3F_C4B_T2F_Quad =
{
	//! top left
	var tl :ASV3F_C4B_T2F;
	//! bottom left
	var bl :ASV3F_C4B_T2F;
	//! top right
	var tr :ASV3F_C4B_T2F;
	//! bottom right
	var br :ASV3F_C4B_T2F;
}

//! 4 ASVertex2FTex2FColor4F Quad
typedef ASV2F_C4F_T2F_Quad =
{
	//! bottom left
	var bl :ASV2F_C4F_T2F;
	//! bottom right
	var br :ASV2F_C4F_T2F;
	//! top left
	var tl :ASV2F_C4F_T2F;
	//! top right
	var tr :ASV2F_C4F_T2F;
}

//! Blend Function used for textures
typedef ASBlendFunc =
{
	//! source blend function
	var src :Dynamic;
	//! destination blend function
	var dst :Dynamic;
}



enum GL {
	SRC_ALPHA;
	ONE_MINUS_SRC_ALPHA;
	LINEAR;
	REPEAT;
	CLAMP_TO_EDGE;
	NEAREST;
	FLOAT;
	UNSIGNED_BYTE;
	UNSIGNED_SHORT;
	TRIANGLES;
	ONE;
}


class CCTypes
{

//predefined :ASColor3B colors
//! White color (255,255,255)
static public var ccWHITE :ASColor3B = {r:255,g:255,b:255};
//! Yellow color (255,255,0)
static public var ccYELLOW :ASColor3B = {r:255,g:255,b:0};
//! Blue color (0,0,255)
static public var ccBLUE :ASColor3B = {r:0,g:0,b:255};
//! Green Color (0,255,0)
static public var ccGREEN :ASColor3B = {r:0,g:255,b:0};
//! Red Color (255,0,0,)
static public var ccRED :ASColor3B = {r:255,g:0,b:0};
//! Magenta Color (255,0,255)
static public var ccMAGENTA :ASColor3B = {r:255,g:0,b:255};
//! Black Color (0,0,0)
static public var ccBLACK :ASColor3B = {r:0,g:0,b:0};
//! Orange Color (255,127,0)
static public var ccORANGE :ASColor3B = {r:255,g:127,b:0};
//! Gray Color (166,166,166)
static public var ccGRAY :ASColor3B = {r:166,g:166,b:166};

//! helper macro that creates an type :ASColor3B
static public inline function ccc3(r:Int, g:Int, b:Int) :ASColor3B
{
	var c:ASColor3B = {r:r, g:g, b:b};
	return c;
}

/** Returns a ASColor4F from a ASColor3B. Alpha will be 1.
 @since v0.99.1
 */
static public inline function ccc4FFromccc3B(c:ASColor3B) :ASColor4F
{
	var c:ASColor4F = {r:c.r/255, g:c.g/255, b:c.b/255, a:1.0};
	return c;
}

/** Returns a ASColor4F from a ASColor4B.
 @since v0.99.1
 */
static public inline function ccc4FFromccc4B(c:ASColor4B) :ASColor4F
{
	var c:ASColor4F = {r:c.r/255, g:c.g/255, b:c.b/255, a:c.a/255};
	return c;
}

/** returns true if both ASColor4F are equal. Otherwise it returns NO.
 @since v0.99.1
 */
static public inline function ccc4FEqual (a:ASColor4F, b:ASColor4F) :Bool
{
	return a.r == b.r && a.g == b.g && a.b == b.b && a.a == b.a;
}

//! helper macro that creates an ASColor4B type
static public inline function ccc4(r:Int, g:Int, b:Int, a:Int) :ASColor4B
{
	var c:ASColor4B = {r:r, g:g, b:b, a:a};
	return c;
}

//! helper function to create a ASGridSize
static public inline function ASGridSizeMake (x:Int, y:Int) :ASGridSize
{
	var v :ASGridSize = {x:x, y:y};
	return v;
}

}
