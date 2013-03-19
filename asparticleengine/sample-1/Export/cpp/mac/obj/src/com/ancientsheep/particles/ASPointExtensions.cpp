#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_ancientsheep_particles_ASPointExtensions
#include <com/ancientsheep/particles/ASPointExtensions.h>
#endif
#ifndef INCLUDED_com_ancientsheep_particles_ASSize
#include <com/ancientsheep/particles/ASSize.h>
#endif
#ifndef INCLUDED_com_ancientsheep_particles_CGAffineTransform
#include <com/ancientsheep/particles/CGAffineTransform.h>
#endif
#ifndef INCLUDED_neash_geom_Point
#include <neash/geom/Point.h>
#endif
namespace com{
namespace ancientsheep{
namespace particles{

Void ASPointExtensions_obj::__construct()
{
	return null();
}

ASPointExtensions_obj::~ASPointExtensions_obj() { }

Dynamic ASPointExtensions_obj::__CreateEmpty() { return  new ASPointExtensions_obj; }
hx::ObjectPtr< ASPointExtensions_obj > ASPointExtensions_obj::__new()
{  hx::ObjectPtr< ASPointExtensions_obj > result = new ASPointExtensions_obj();
	result->__construct();
	return result;}

Dynamic ASPointExtensions_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ASPointExtensions_obj > result = new ASPointExtensions_obj();
	result->__construct();
	return result;}

double ASPointExtensions_obj::kPointEpsilon;

::neash::geom::Point ASPointExtensions_obj::neg( ::neash::geom::Point v){
	HX_SOURCE_PUSH("ASPointExtensions_obj::neg")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",46)
	return ::neash::geom::Point_obj::__new(-(v->x),-(v->y));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ASPointExtensions_obj,neg,return )

::neash::geom::Point ASPointExtensions_obj::add( ::neash::geom::Point v1,::neash::geom::Point v2){
	HX_SOURCE_PUSH("ASPointExtensions_obj::add")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",55)
	return ::neash::geom::Point_obj::__new((v1->x + v2->x),(v1->y + v2->y));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ASPointExtensions_obj,add,return )

::neash::geom::Point ASPointExtensions_obj::sub( ::neash::geom::Point v1,::neash::geom::Point v2){
	HX_SOURCE_PUSH("ASPointExtensions_obj::sub")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",64)
	return ::neash::geom::Point_obj::__new((v1->x - v2->x),(v1->y - v2->y));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ASPointExtensions_obj,sub,return )

::neash::geom::Point ASPointExtensions_obj::mult( ::neash::geom::Point v,double s){
	HX_SOURCE_PUSH("ASPointExtensions_obj::mult")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",73)
	return ::neash::geom::Point_obj::__new((v->x * s),(v->y * s));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ASPointExtensions_obj,mult,return )

::neash::geom::Point ASPointExtensions_obj::compMult( ::neash::geom::Point a,::neash::geom::Point b){
	HX_SOURCE_PUSH("ASPointExtensions_obj::compMult")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",82)
	return ::neash::geom::Point_obj::__new((a->x * b->x),(a->y * b->y));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ASPointExtensions_obj,compMult,return )

::neash::geom::Point ASPointExtensions_obj::midpoint( ::neash::geom::Point v1,::neash::geom::Point v2){
	HX_SOURCE_PUSH("ASPointExtensions_obj::midpoint")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",92)
	return ::com::ancientsheep::particles::ASPointExtensions_obj::mult(::com::ancientsheep::particles::ASPointExtensions_obj::add(v1,v2),0.5);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ASPointExtensions_obj,midpoint,return )

double ASPointExtensions_obj::dot( ::neash::geom::Point v1,::neash::geom::Point v2){
	HX_SOURCE_PUSH("ASPointExtensions_obj::dot")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",101)
	return ((v1->x * v2->x) + (v1->y * v2->y));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ASPointExtensions_obj,dot,return )

double ASPointExtensions_obj::cross( ::neash::geom::Point v1,::neash::geom::Point v2){
	HX_SOURCE_PUSH("ASPointExtensions_obj::cross")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",110)
	return ((v1->x * v2->y) - (v1->y * v2->x));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ASPointExtensions_obj,cross,return )

::neash::geom::Point ASPointExtensions_obj::perp( ::neash::geom::Point v){
	HX_SOURCE_PUSH("ASPointExtensions_obj::perp")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",119)
	return ::neash::geom::Point_obj::__new(-(v->y),v->x);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ASPointExtensions_obj,perp,return )

::neash::geom::Point ASPointExtensions_obj::rperp( ::neash::geom::Point v){
	HX_SOURCE_PUSH("ASPointExtensions_obj::rperp")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",128)
	return ::neash::geom::Point_obj::__new(v->y,-(v->x));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ASPointExtensions_obj,rperp,return )

::neash::geom::Point ASPointExtensions_obj::project( ::neash::geom::Point v1,::neash::geom::Point v2){
	HX_SOURCE_PUSH("ASPointExtensions_obj::project")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",137)
	return ::com::ancientsheep::particles::ASPointExtensions_obj::mult(v2,(double(::com::ancientsheep::particles::ASPointExtensions_obj::dot(v1,v2)) / double(::com::ancientsheep::particles::ASPointExtensions_obj::dot(v2,v2))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ASPointExtensions_obj,project,return )

::neash::geom::Point ASPointExtensions_obj::rotate( ::neash::geom::Point v1,::neash::geom::Point v2){
	HX_SOURCE_PUSH("ASPointExtensions_obj::rotate")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",145)
	return ::neash::geom::Point_obj::__new(((v1->x * v2->x) - (v1->y * v2->y)),((v1->x * v2->y) + (v1->y * v2->x)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ASPointExtensions_obj,rotate,return )

::neash::geom::Point ASPointExtensions_obj::unrotate( ::neash::geom::Point v1,::neash::geom::Point v2){
	HX_SOURCE_PUSH("ASPointExtensions_obj::unrotate")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",153)
	return ::neash::geom::Point_obj::__new(((v1->x * v2->x) + (v1->y * v2->y)),((v1->y * v2->x) - (v1->x * v2->y)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ASPointExtensions_obj,unrotate,return )

double ASPointExtensions_obj::lengthSQ( ::neash::geom::Point v){
	HX_SOURCE_PUSH("ASPointExtensions_obj::lengthSQ")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",164)
	return ::com::ancientsheep::particles::ASPointExtensions_obj::dot(v,v);
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",165)
	return ::Math_obj::sqrt((v->x + v->y));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ASPointExtensions_obj,lengthSQ,return )

double ASPointExtensions_obj::length( ::neash::geom::Point v){
	HX_SOURCE_PUSH("ASPointExtensions_obj::length")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",173)
	return ::Math_obj::sqrt(::com::ancientsheep::particles::ASPointExtensions_obj::lengthSQ(v));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ASPointExtensions_obj,length,return )

double ASPointExtensions_obj::distance( ::neash::geom::Point v1,::neash::geom::Point v2){
	HX_SOURCE_PUSH("ASPointExtensions_obj::distance")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",182)
	return ::Math_obj::sqrt(::com::ancientsheep::particles::ASPointExtensions_obj::lengthSQ(::com::ancientsheep::particles::ASPointExtensions_obj::sub(v1,v2)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ASPointExtensions_obj,distance,return )

::neash::geom::Point ASPointExtensions_obj::normalize( ::neash::geom::Point v){
	HX_SOURCE_PUSH("ASPointExtensions_obj::normalize")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",191)
	return ::com::ancientsheep::particles::ASPointExtensions_obj::mult(v,(double(1.0) / double(::Math_obj::sqrt(::com::ancientsheep::particles::ASPointExtensions_obj::lengthSQ(v)))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ASPointExtensions_obj,normalize,return )

::neash::geom::Point ASPointExtensions_obj::forAngle( double a){
	HX_SOURCE_PUSH("ASPointExtensions_obj::forAngle")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",200)
	return ::neash::geom::Point_obj::__new(::Math_obj::cos(a),::Math_obj::sin(a));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ASPointExtensions_obj,forAngle,return )

double ASPointExtensions_obj::toAngle( ::neash::geom::Point v){
	HX_SOURCE_PUSH("ASPointExtensions_obj::toAngle")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",209)
	return ::Math_obj::atan2(v->y,v->x);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ASPointExtensions_obj,toAngle,return )

::neash::geom::Point ASPointExtensions_obj::lerp( ::neash::geom::Point a,::neash::geom::Point b,double alpha){
	HX_SOURCE_PUSH("ASPointExtensions_obj::lerp")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",221)
	return ::com::ancientsheep::particles::ASPointExtensions_obj::add(::com::ancientsheep::particles::ASPointExtensions_obj::mult(a,(1.0 - alpha)),::com::ancientsheep::particles::ASPointExtensions_obj::mult(b,alpha));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ASPointExtensions_obj,lerp,return )

double ASPointExtensions_obj::clampf( double value,double min_inclusive,double max_inclusive){
	HX_SOURCE_PUSH("ASPointExtensions_obj::clampf")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",230)
	if (((min_inclusive > max_inclusive))){
	}
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",235)
	return (  (((value < min_inclusive))) ? double(min_inclusive) : double((  (((value < max_inclusive))) ? double(value) : double(max_inclusive) )) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ASPointExtensions_obj,clampf,return )

::neash::geom::Point ASPointExtensions_obj::clamp( ::neash::geom::Point p,::neash::geom::Point min_inclusive,::neash::geom::Point max_inclusive){
	HX_SOURCE_PUSH("ASPointExtensions_obj::clamp")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",242)
	return ::neash::geom::Point_obj::__new(::com::ancientsheep::particles::ASPointExtensions_obj::clampf(p->x,min_inclusive->x,max_inclusive->x),::com::ancientsheep::particles::ASPointExtensions_obj::clampf(p->y,min_inclusive->y,max_inclusive->y));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ASPointExtensions_obj,clamp,return )

::neash::geom::Point ASPointExtensions_obj::fromSize( ::com::ancientsheep::particles::ASSize s){
	HX_SOURCE_PUSH("ASPointExtensions_obj::fromSize")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",250)
	return ::neash::geom::Point_obj::__new(s->width,s->height);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ASPointExtensions_obj,fromSize,return )

::neash::geom::Point ASPointExtensions_obj::compOp( ::neash::geom::Point p,Dynamic opFunc){
	HX_SOURCE_PUSH("ASPointExtensions_obj::compOp")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",262)
	return ::neash::geom::Point_obj::__new(opFunc(p->x),opFunc(p->y));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ASPointExtensions_obj,compOp,return )

bool ASPointExtensions_obj::fuzzyEqual( ::neash::geom::Point a,::neash::geom::Point b,double v){
	HX_SOURCE_PUSH("ASPointExtensions_obj::fuzzyEqual")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",271)
	if (((bool(((a->x - v) <= b->x)) && bool((b->x <= (a->x + v)))))){
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",272)
		if (((bool(((a->y - v) <= b->y)) && bool((b->y <= (a->y + v)))))){
			HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",273)
			return true;
		}
	}
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",274)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ASPointExtensions_obj,fuzzyEqual,return )

double ASPointExtensions_obj::angleSigned( ::neash::geom::Point a,::neash::geom::Point b){
	HX_SOURCE_PUSH("ASPointExtensions_obj::angleSigned")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",282)
	::neash::geom::Point a2 = ::com::ancientsheep::particles::ASPointExtensions_obj::mult(a,(double(1.0) / double(::Math_obj::sqrt(::com::ancientsheep::particles::ASPointExtensions_obj::lengthSQ(a)))));
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",283)
	::neash::geom::Point b2 = ::com::ancientsheep::particles::ASPointExtensions_obj::mult(b,(double(1.0) / double(::Math_obj::sqrt(::com::ancientsheep::particles::ASPointExtensions_obj::lengthSQ(b)))));
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",284)
	double angle = ::Math_obj::atan2(((a2->x * b2->y) - (a2->y * b2->x)),::com::ancientsheep::particles::ASPointExtensions_obj::dot(a2,b2));
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",285)
	if (((::Math_obj::abs(angle) < 0.0))){
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",285)
		return 0.0;
	}
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",286)
	return angle;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ASPointExtensions_obj,angleSigned,return )

double ASPointExtensions_obj::angle( ::neash::geom::Point a,::neash::geom::Point b){
	HX_SOURCE_PUSH("ASPointExtensions_obj::angle")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",294)
	double ang = ::Math_obj::acos(::com::ancientsheep::particles::ASPointExtensions_obj::dot(::com::ancientsheep::particles::ASPointExtensions_obj::mult(a,(double(1.0) / double(::Math_obj::sqrt(::com::ancientsheep::particles::ASPointExtensions_obj::lengthSQ(a))))),::com::ancientsheep::particles::ASPointExtensions_obj::mult(b,(double(1.0) / double(::Math_obj::sqrt(::com::ancientsheep::particles::ASPointExtensions_obj::lengthSQ(b)))))));
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",295)
	if (((::Math_obj::abs(ang) < 0.0))){
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",295)
		return 0.0;
	}
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",296)
	return ang;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ASPointExtensions_obj,angle,return )

::neash::geom::Point ASPointExtensions_obj::rotateByAngle( ::neash::geom::Point v,::neash::geom::Point pivot,double angle){
	HX_SOURCE_PUSH("ASPointExtensions_obj::rotateByAngle")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",309)
	::neash::geom::Point r = ::com::ancientsheep::particles::ASPointExtensions_obj::sub(v,pivot);
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",310)
	double cosa = ::Math_obj::cos(angle);
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",311)
	double sina = ::Math_obj::sin(angle);
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",312)
	double t = r->x;
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",313)
	r->x = (((t * cosa) - (r->y * sina)) + pivot->x);
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",314)
	r->y = (((t * sina) + (r->y * cosa)) + pivot->y);
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",315)
	return r;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ASPointExtensions_obj,rotateByAngle,return )

Dynamic ASPointExtensions_obj::lineIntersect( ::neash::geom::Point A,::neash::geom::Point B,::neash::geom::Point C,::neash::geom::Point D,double S,double T){
	HX_SOURCE_PUSH("ASPointExtensions_obj::lineIntersect")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",344)
	if (((bool((bool((A->x == B->x)) && bool((A->y == B->y)))) || bool((bool((C->x == D->x)) && bool((C->y == D->y))))))){
		struct _Function_2_1{
			inline static Dynamic Block( double &S,double &T){
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("S") , S,false);
					__result->Add(HX_CSTRING("T") , T,false);
					__result->Add(HX_CSTRING("bool") , false,false);
					return __result;
				}
				return null();
			}
		};
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",344)
		return _Function_2_1::Block(S,T);
	}
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",346)
	double BAx = (B->x - A->x);
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",347)
	double BAy = (B->y - A->y);
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",348)
	double DCx = (D->x - C->x);
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",349)
	double DCy = (D->y - C->y);
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",350)
	double ACx = (A->x - C->x);
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",351)
	double ACy = (A->y - C->y);
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",353)
	double denom = ((DCy * BAx) - (DCx * BAy));
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",354)
	bool b = false;
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",356)
	S = ((DCx * ACy) - (DCy * ACx));
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",357)
	T = ((BAx * ACy) - (BAy * ACx));
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",359)
	if (((denom == (int)0))){
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",359)
		if (((bool((S == (int)0)) || bool((T == (int)0))))){
			HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",360)
			b = true;
		}
		else{
			HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",364)
			b = false;
		}
	}
	else{
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",370)
		S = (double(S) / double(denom));
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",371)
		T = (double(T) / double(denom));
	}
	struct _Function_1_1{
		inline static Dynamic Block( double &S,bool &b,double &T){
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("S") , S,false);
				__result->Add(HX_CSTRING("T") , T,false);
				__result->Add(HX_CSTRING("bool") , b,false);
				return __result;
			}
			return null();
		}
	};
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",379)
	return _Function_1_1::Block(S,b,T);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(ASPointExtensions_obj,lineIntersect,return )

bool ASPointExtensions_obj::segmentIntersect( ::neash::geom::Point A,::neash::geom::Point B,::neash::geom::Point C,::neash::geom::Point D){
	HX_SOURCE_PUSH("ASPointExtensions_obj::segmentIntersect")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",388)
	double S = (int)0;
	double T = (int)0;
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",389)
	Dynamic ST = ::com::ancientsheep::particles::ASPointExtensions_obj::lineIntersect(A,B,C,D,S,T);
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",390)
	S = ST->__Field(HX_CSTRING("S"),true);
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",391)
	T = ST->__Field(HX_CSTRING("T"),true);
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",392)
	if (((bool(ST->__Field(HX_CSTRING("bool"),true)) && bool(((bool((bool((bool((S >= 0.0)) && bool((S <= 1.0)))) && bool((T >= 0.0)))) && bool((T <= 1.0)))))))){
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",393)
		return true;
	}
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",395)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ASPointExtensions_obj,segmentIntersect,return )

::neash::geom::Point ASPointExtensions_obj::intersectPoint( ::neash::geom::Point A,::neash::geom::Point B,::neash::geom::Point C,::neash::geom::Point D){
	HX_SOURCE_PUSH("ASPointExtensions_obj::intersectPoint")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",404)
	double S = (int)0;
	double T = (int)0;
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",405)
	Dynamic ST = ::com::ancientsheep::particles::ASPointExtensions_obj::lineIntersect(A,B,C,D,S,T);
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",406)
	S = ST->__Field(HX_CSTRING("S"),true);
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",407)
	T = ST->__Field(HX_CSTRING("T"),true);
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",408)
	if ((ST->__Field(HX_CSTRING("bool"),true))){
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",408)
		return ::neash::geom::Point_obj::__new((A->x + (S * ((B->x - A->x)))),(A->y + (S * ((B->y - A->y)))));
	}
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",413)
	return ::neash::geom::Point_obj::__new((int)0,(int)0);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ASPointExtensions_obj,intersectPoint,return )

bool ASPointExtensions_obj::equalToPoint( ::neash::geom::Point point,::neash::geom::Point newPoint){
	HX_SOURCE_PUSH("ASPointExtensions_obj::equalToPoint")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",419)
	if (((point->x == newPoint->x))){
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",419)
		if (((point->y == newPoint->y))){
			HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",419)
			return true;
		}
	}
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",420)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ASPointExtensions_obj,equalToPoint,return )

::neash::geom::Point ASPointExtensions_obj::applyAffineTransform( ::neash::geom::Point point,::com::ancientsheep::particles::CGAffineTransform t){
	HX_SOURCE_PUSH("ASPointExtensions_obj::applyAffineTransform")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",422)
	return point;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ASPointExtensions_obj,applyAffineTransform,return )

::neash::geom::Point ASPointExtensions_obj::pointFromString( ::String p){
	HX_SOURCE_PUSH("ASPointExtensions_obj::pointFromString")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",427)
	Array< ::String > arr = p.split(HX_CSTRING("{"))->join(HX_CSTRING("")).split(HX_CSTRING("}"))->join(HX_CSTRING("")).split(HX_CSTRING(","));
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASPointExtensions.hx",428)
	return ::neash::geom::Point_obj::__new(::Std_obj::parseInt(arr->__get((int)0)),::Std_obj::parseInt(arr->__get((int)1)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ASPointExtensions_obj,pointFromString,return )


ASPointExtensions_obj::ASPointExtensions_obj()
{
}

void ASPointExtensions_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ASPointExtensions);
	HX_MARK_END_CLASS();
}

Dynamic ASPointExtensions_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"neg") ) { return neg_dyn(); }
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		if (HX_FIELD_EQ(inName,"sub") ) { return sub_dyn(); }
		if (HX_FIELD_EQ(inName,"dot") ) { return dot_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mult") ) { return mult_dyn(); }
		if (HX_FIELD_EQ(inName,"perp") ) { return perp_dyn(); }
		if (HX_FIELD_EQ(inName,"lerp") ) { return lerp_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cross") ) { return cross_dyn(); }
		if (HX_FIELD_EQ(inName,"rperp") ) { return rperp_dyn(); }
		if (HX_FIELD_EQ(inName,"clamp") ) { return clamp_dyn(); }
		if (HX_FIELD_EQ(inName,"angle") ) { return angle_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"rotate") ) { return rotate_dyn(); }
		if (HX_FIELD_EQ(inName,"length") ) { return length_dyn(); }
		if (HX_FIELD_EQ(inName,"clampf") ) { return clampf_dyn(); }
		if (HX_FIELD_EQ(inName,"compOp") ) { return compOp_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"project") ) { return project_dyn(); }
		if (HX_FIELD_EQ(inName,"toAngle") ) { return toAngle_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"compMult") ) { return compMult_dyn(); }
		if (HX_FIELD_EQ(inName,"midpoint") ) { return midpoint_dyn(); }
		if (HX_FIELD_EQ(inName,"unrotate") ) { return unrotate_dyn(); }
		if (HX_FIELD_EQ(inName,"lengthSQ") ) { return lengthSQ_dyn(); }
		if (HX_FIELD_EQ(inName,"distance") ) { return distance_dyn(); }
		if (HX_FIELD_EQ(inName,"forAngle") ) { return forAngle_dyn(); }
		if (HX_FIELD_EQ(inName,"fromSize") ) { return fromSize_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"normalize") ) { return normalize_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fuzzyEqual") ) { return fuzzyEqual_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"angleSigned") ) { return angleSigned_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"equalToPoint") ) { return equalToPoint_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"kPointEpsilon") ) { return kPointEpsilon; }
		if (HX_FIELD_EQ(inName,"rotateByAngle") ) { return rotateByAngle_dyn(); }
		if (HX_FIELD_EQ(inName,"lineIntersect") ) { return lineIntersect_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"intersectPoint") ) { return intersectPoint_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"pointFromString") ) { return pointFromString_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"segmentIntersect") ) { return segmentIntersect_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"applyAffineTransform") ) { return applyAffineTransform_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ASPointExtensions_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"kPointEpsilon") ) { kPointEpsilon=inValue.Cast< double >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ASPointExtensions_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("kPointEpsilon"),
	HX_CSTRING("neg"),
	HX_CSTRING("add"),
	HX_CSTRING("sub"),
	HX_CSTRING("mult"),
	HX_CSTRING("compMult"),
	HX_CSTRING("midpoint"),
	HX_CSTRING("dot"),
	HX_CSTRING("cross"),
	HX_CSTRING("perp"),
	HX_CSTRING("rperp"),
	HX_CSTRING("project"),
	HX_CSTRING("rotate"),
	HX_CSTRING("unrotate"),
	HX_CSTRING("lengthSQ"),
	HX_CSTRING("length"),
	HX_CSTRING("distance"),
	HX_CSTRING("normalize"),
	HX_CSTRING("forAngle"),
	HX_CSTRING("toAngle"),
	HX_CSTRING("lerp"),
	HX_CSTRING("clampf"),
	HX_CSTRING("clamp"),
	HX_CSTRING("fromSize"),
	HX_CSTRING("compOp"),
	HX_CSTRING("fuzzyEqual"),
	HX_CSTRING("angleSigned"),
	HX_CSTRING("angle"),
	HX_CSTRING("rotateByAngle"),
	HX_CSTRING("lineIntersect"),
	HX_CSTRING("segmentIntersect"),
	HX_CSTRING("intersectPoint"),
	HX_CSTRING("equalToPoint"),
	HX_CSTRING("applyAffineTransform"),
	HX_CSTRING("pointFromString"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ASPointExtensions_obj::kPointEpsilon,"kPointEpsilon");
};

Class ASPointExtensions_obj::__mClass;

void ASPointExtensions_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.ancientsheep.particles.ASPointExtensions"), hx::TCanCast< ASPointExtensions_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void ASPointExtensions_obj::__boot()
{
	hx::Static(kPointEpsilon) = 0.0;
}

} // end namespace com
} // end namespace ancientsheep
} // end namespace particles
