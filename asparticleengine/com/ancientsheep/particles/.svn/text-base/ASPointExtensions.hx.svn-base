package com.ancientsheep.particles;

/*
 * Some of the functions were based on Chipmunk's cpVect.h.
 */

/**
 @file
 Point extensions based on Chipmunk's cpVect file.
 These extensions work both with Point and cpVect.
 
 The "ccp" prefix means: "CoCos2d Point"
 
 Examples:
  - ccpAdd( ccp(1,1), ccp(2,2) ); // preferred cocos2d way
  - ccpAdd( PointMake(1,1), PointMake(2,2) ); // also ok but more verbose
  
  - cpvadd( cpv(1,1), cpv(2,2) ); // way of the chipmunk
  - ccpAdd( cpv(1,1), cpv(2,2) ); // mixing chipmunk and cocos2d (avoid)
  - cpvadd( PointMake(1,1), PointMake(2,2) ); // mixing chipmunk and CG (avoid)
 */

import com.ancientsheep.particles.CGAffineTransform;
import com.ancientsheep.particles.ASSize;
import nme.geom.Point;


typedef LineIntersection = {
	var S:Float;
	var T:Float;
	var bool:Bool;
}


class ASPointExtensions {
	
	inline static var kPointEpsilon = 0.0;
	
	
	
	/** Returns opposite of point.
	 @return Point
	 @since v0.7.2
	 */
	public static function neg(v:Point) :Point
	{
		return new Point (-v.x, -v.y);
	}
	
	/** Calculates sum of two points.
	 @return Point
	 @since v0.7.2
	 */
	public static function add(v1:Point, v2:Point) :Point
	{
		return new Point (v1.x + v2.x, v1.y + v2.y);
	}
	
	/** Calculates difference of two points.
	 @return Point
	 @since v0.7.2
	 */
	public static function sub(v1:Point, v2:Point) :Point
	{
		return new Point (v1.x - v2.x, v1.y - v2.y);
	}
	
	/** Returns point multiplied by given factor.
	 @return Point
	 @since v0.7.2
	 */
	public static function mult(v:Point, s:Float) :Point
	{
		return new Point (v.x*s, v.y*s);
	}
	
	/** Multiplies a nd b components, a.x*b.x, a.y*b.y
	 @returns a component-wise multiplication
	 @since v0.99.1
	 */
	public static function compMult(a:Point, b:Point) :Point
	{
		return new Point (a.x * b.x, a.y * b.y);
	}
	
	
	/** Calculates midpoint between two points.
	 @return Point
	 @since v0.7.2
	 */
	public static function midpoint(v1:Point, v2:Point) :Point
	{
		return mult (add (v1, v2), 0.5);
	}
	
	/** Calculates dot product of two points.
	 @return CGFloat
	 @since v0.7.2
	 */
	public static function dot(v1:Point, v2:Point) :Float
	{
		return v1.x*v2.x + v1.y*v2.y;
	}
	
	/** Calculates cross product of two points.
	 @return CGFloat
	 @since v0.7.2
	 */
	public static function cross(v1:Point, v2:Point) :Float
	{
		return v1.x*v2.y - v1.y*v2.x;
	}
	
	/** Calculates perpendicular of v, rotated 90 degrees counter-clockwise -- cross(v, perp(v)) >= 0
	 @return Point
	 @since v0.7.2
	 */
	public static function perp(v:Point) :Point
	{
		return new Point (-v.y, v.x);
	}
	
	/** Calculates perpendicular of v, rotated 90 degrees clockwise -- cross(v, rperp(v)) <= 0
	 @return Point
	 @since v0.7.2
	 */
	public static function rperp(v:Point) :Point
	{
		return new Point (v.y, -v.x);
	}
	
	/** Calculates the projection of v1 over v2.
	 @return Point
	 @since v0.7.2
	*/
	public static function project(v1:Point, v2:Point) :Point
	{
		return mult (v2, dot(v1,v2) / dot(v2,v2));
	}
	
	/** Rotates two points.
	 @return Point
	 @since v0.7.2
	 */
	public static function rotate (v1:Point, v2:Point) :Point {
		return new Point (v1.x*v2.x - v1.y*v2.y, v1.x*v2.y + v1.y*v2.x);
	}
	
	/** Unrotates two points.
	 @return Point
	 @since v0.7.2
	 */
	public static function unrotate (v1:Point, v2:Point) :Point {
		return new Point (v1.x*v2.x + v1.y*v2.y, v1.y*v2.x - v1.x*v2.y);
	}
	
	
	/** Calculates the square length of a Point (not calling sqrt() )
	 @return CGFloat
	 @since v0.7.2
	 */
	public static function lengthSQ(v:Point) :Float
	{
		return dot(v, v);
		return Math.sqrt ( v.x+v.y );
	}
	
	/** Calculates distance between point an origin
	 @return CGFloat
	 @since v0.7.2
	 */
	inline public static function length (v:Point) :Float
	{
		return Math.sqrt ( lengthSQ(v) );
	}

	/** Calculates the distance between two points
	 @return CGFloat
	 @since v0.7.2
	 */
	inline public static function distance(v1:Point, v2:Point) :Float
	{
		return length(sub(v1, v2));
	}

	/** Returns point multiplied to a length of 1.
	 @return Point
	 @since v0.7.2
	 */
	inline public static function normalize(v:Point) :Point
	{
		return mult (v, 1.0/length(v));
	}

	/** Converts radians to a normalized vector.
	 @return Point
	 @since v0.7.2
	 */
	public static function forAngle(a:Float) :Point
	{
		return new Point (Math.cos(a), Math.sin(a));
	}

	/** Converts a vector to radians.
	 @return CGFloat
	 @since v0.7.2
	 */
	public static function toAngle(v:Point) :Float
	{
		return Math.atan2 (v.y, v.x);
	}
	
	/** Linear Interpolation between two points a and b
	 @returns
		alpha == 0 ? a
		alpha == 1 ? b
		otherwise a value between a..b
	 @since v0.99.1
	 */
	public static function lerp(a:Point, b:Point, alpha:Float) :Point
	{
		return add (mult (a, 1.0 - alpha), mult (b, alpha));
	}

	/** Clamp a value between from and to.
	 @since v0.99.1
	 */
	public static function clampf(value:Float, min_inclusive:Float, max_inclusive:Float) :Float
	{
		if (min_inclusive > max_inclusive) {
			/*var obj = ASMacros.ASSWAP (min_inclusive, max_inclusive);
			min_inclusive = obj.x;
			max_inclusive = obj.y;*/
		}
		return value < min_inclusive ? min_inclusive : value < max_inclusive? value : max_inclusive;
	}

	/** Clamp a point between from and to.
	 @since v0.99.1
	 */
	public static function clamp(p:Point, min_inclusive:Point, max_inclusive:Point) :Point
	{
		return new Point (clampf(p.x,min_inclusive.x,max_inclusive.x), clampf(p.y, min_inclusive.y, max_inclusive.y));
	}

	/** Quickly convert CGSize to a Point
	 @since v0.99.1
	 */
	public static function fromSize(s:ASSize) :Point
	{
		return new Point (s.width, s.height);
	}

	/** Run a math operation function on each point component
	 * absf, fllorf, ceilf, roundf
	 * any function that has the signature: float func(float);
	 * For example: let's try to take the floor of x,y
	 * ccpCompOp(p,floorf);
	 @since v0.99.1
	 */
	public static function compOp(p:Point, opFunc:Dynamic) :Point
	{
		return new Point (opFunc(p.x), opFunc(p.y));
	}
	
	/** @returns if points have fuzzy equality which means equal with some degree of variance.
	 @since v0.99.1
	 */
	public static function fuzzyEqual(a:Point, b:Point, v:Float) :Bool
	{
		if(a.x - v <= b.x && b.x <= a.x + v)
			if(a.y - v <= b.y && b.y <= a.y + v)
				return true;
		return false;
	}
	
	/** @returns the signed angle in radians between two vector directions
	 @since v0.99.1
	 */
	public static function angleSigned(a:Point, b:Point) :Float
	{
		var a2:Point = normalize(a);
		var b2:Point = normalize(b);
		var angle:Float = Math.atan2 (a2.x * b2.y - a2.y * b2.x, dot(a2, b2));
		if( Math.abs(angle) < kPointEpsilon ) return 0.0;
		return angle;
	}
	
	/** @returns the angle in radians between two vector directions
	 @since v0.99.1
	*/
	public static function angle (a:Point, b:Point) :Float
	{
		var ang :Float = Math.acos ( dot (normalize(a), normalize(b)) );
		if( Math.abs(ang) < kPointEpsilon ) return 0.0;
		return ang;
	}
	
	
	/** Rotates a point counter clockwise by the angle around a pivot
	 @param v is the point to rotate
	 @param pivot is the pivot, naturally
	 @param angle is the angle of rotation cw in radians
	 @returns the rotated point
	 @since v0.99.1
	 */
	public static function rotateByAngle(v:Point, pivot:Point, angle:Float) :Point
	{
		var r :Point = sub(v, pivot);
		var cosa :Float = Math.cos(angle);
		var sina :Float = Math.sin(angle);
		var t :Float = r.x;
		r.x = t*cosa - r.y*sina + pivot.x;
		r.y = t*sina + r.y*cosa + pivot.y;
		return r;
	}

	
	
	/** A general line-line intersection test
	 @param p1 
		is the startpoint for the first line P1 = (p1 - p2)
	 @param p2 
		is the endpoint for the first line P1 = (p1 - p2)
	 @param p3 
		is the startpoint for the second line P2 = (p3 - p4)
	 @param p4 
		is the endpoint for the second line P2 = (p3 - p4)
	 @param s 
		is the range for a hitpoint in P1 (pa = p1 + s*(p2 - p1))
	 @param t
		is the range for a hitpoint in P3 (pa = p2 + t*(p4 - p3))
	 @return bool 
		indicating successful intersection of a line
		note that to truly test intersection for segments we have to make 
		sure that s & t lie within [0..1] and for rays, make sure s & t > 0
		the hit point is		p3 + t * (p4 - p3);
		the hit point also is	p1 + s * (p2 - p1);
	 @since v0.99.1
	 */
	public static function lineIntersect (A:Point, B:Point, C:Point, D:Point, S:Float, T:Float) :LineIntersection
	{    
		// FAIL: Line undefined
		if ( (A.x==B.x && A.y==B.y) || (C.x==D.x && C.y==D.y) ) return {S:S, T:T, bool:false};
		
		var BAx:Float = B.x - A.x;
		var BAy:Float = B.y - A.y;
		var DCx:Float = D.x - C.x;
		var DCy:Float = D.y - C.y;
		var ACx:Float = A.x - C.x;
		var ACy:Float = A.y - C.y;
		
		var denom:Float = DCy*BAx - DCx*BAy;
		var b :Bool = false;
		
		S = DCx*ACy - DCy*ACx;
		T = BAx*ACy - BAy*ACx;

		if (denom == 0) {
			if (S == 0 || T == 0) { 
				// Lines incident
				b = true;   
			}
			else {
				// Lines parallel and not incident
				b = false;
			}
		}
		else {
			S = S / denom;
			T = T / denom;
		}

		// Point of intersection
		// P:Point;
		// P.x = A.x + *S * (B.x - A.x);
		// P.y = A.y + *S * (B.y - A.y);

		return {S:S, T:T, bool:b};
	}
	
	/*
	 ccpSegmentIntersect returns YES if Segment A-B intersects with segment C-D
	 @since v1.0.0
	 */
	public static function segmentIntersect(A:Point, B:Point, C:Point, D:Point) :Bool
	{
		var S:Float = 0, T:Float = 0;
		var ST :LineIntersection = lineIntersect (A, B, C, D, S, T);
			S = ST.S;
			T = ST.T;
		if( ST.bool && (S >= 0.0 && S <= 1.0 && T >= 0.0 && T <= 1.0) )
			return true;

		return false;
	}
	
	/*
	 ccpIntersectPoint returns the intersection point of line A-B, C-D
	 @since v1.0.0
	 */
	public static function intersectPoint(A:Point, B:Point, C:Point, D:Point) :Point
	{
		var S:Float=0, T:Float=0;
		var ST :LineIntersection = lineIntersect (A, B, C, D, S, T);
			S = ST.S;
			T = ST.T;
		if( ST.bool ) {
			// Point of intersection
			return new Point (A.x + S * (B.x - A.x), A.y + S * (B.y - A.y));
		}

		return new Point (0,0);
	}
	
	
	
	public static function equalToPoint (point:Point, newPoint:Point) :Bool {
		if (point.x == newPoint.x) if (point.y == newPoint.y) return true;
		return false;
	}
	public static function applyAffineTransform (point:Point, t:CGAffineTransform) :Point {
		return point;
	}
	public static function pointFromString (p:String) :Point
	{
		var arr = p.split("{").join("").split("}").join("").split(",");
		return new Point ( Std.parseInt(arr[0]), Std.parseInt(arr[1]) );
	}
	
}