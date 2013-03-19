#include <hxcpp.h>

#ifndef INCLUDED_com_ancientsheep_particles_CGAffineTransform
#include <com/ancientsheep/particles/CGAffineTransform.h>
#endif
#ifndef INCLUDED_neash_geom_Point
#include <neash/geom/Point.h>
#endif
namespace com{
namespace ancientsheep{
namespace particles{

Void CGAffineTransform_obj::__construct(hx::Null< double >  __o_a,hx::Null< double >  __o_b,hx::Null< double >  __o_c,hx::Null< double >  __o_d,hx::Null< double >  __o_tx,hx::Null< double >  __o_ty)
{
double a = __o_a.Default(0);
double b = __o_b.Default(0);
double c = __o_c.Default(0);
double d = __o_d.Default(0);
double tx = __o_tx.Default(0);
double ty = __o_ty.Default(0);
{
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/CGAffineTransform.hx",23)
	this->a = a;
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/CGAffineTransform.hx",24)
	this->b = b;
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/CGAffineTransform.hx",25)
	this->c = c;
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/CGAffineTransform.hx",26)
	this->d = d;
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/CGAffineTransform.hx",27)
	this->tx = tx;
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/CGAffineTransform.hx",28)
	this->ty = ty;
}
;
	return null();
}

CGAffineTransform_obj::~CGAffineTransform_obj() { }

Dynamic CGAffineTransform_obj::__CreateEmpty() { return  new CGAffineTransform_obj; }
hx::ObjectPtr< CGAffineTransform_obj > CGAffineTransform_obj::__new(hx::Null< double >  __o_a,hx::Null< double >  __o_b,hx::Null< double >  __o_c,hx::Null< double >  __o_d,hx::Null< double >  __o_tx,hx::Null< double >  __o_ty)
{  hx::ObjectPtr< CGAffineTransform_obj > result = new CGAffineTransform_obj();
	result->__construct(__o_a,__o_b,__o_c,__o_d,__o_tx,__o_ty);
	return result;}

Dynamic CGAffineTransform_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CGAffineTransform_obj > result = new CGAffineTransform_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}

::com::ancientsheep::particles::CGAffineTransform CGAffineTransform_obj::clone( ){
	HX_SOURCE_PUSH("CGAffineTransform_obj::clone")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/CGAffineTransform.hx",30)
	return ::com::ancientsheep::particles::CGAffineTransform_obj::__new(this->a,this->b,this->c,this->d,this->tx,this->ty);
}


HX_DEFINE_DYNAMIC_FUNC0(CGAffineTransform_obj,clone,return )

Void CGAffineTransform_obj::concat( ::com::ancientsheep::particles::CGAffineTransform m){
{
		HX_SOURCE_PUSH("CGAffineTransform_obj::concat")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CGAffineTransform_obj,concat,(void))

::com::ancientsheep::particles::CGAffineTransform CGAffineTransform_obj::identity( ){
	HX_SOURCE_PUSH("CGAffineTransform_obj::identity")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/CGAffineTransform.hx",36)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(CGAffineTransform_obj,identity,return )

Void CGAffineTransform_obj::invert( ){
{
		HX_SOURCE_PUSH("CGAffineTransform_obj::invert")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CGAffineTransform_obj,invert,(void))

Void CGAffineTransform_obj::rotate( double angle){
{
		HX_SOURCE_PUSH("CGAffineTransform_obj::rotate")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CGAffineTransform_obj,rotate,(void))

Void CGAffineTransform_obj::scale( double sx,double sy){
{
		HX_SOURCE_PUSH("CGAffineTransform_obj::scale")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(CGAffineTransform_obj,scale,(void))

Void CGAffineTransform_obj::setTo( double aa,double ba,double ca,double da,double txa,double tya){
{
		HX_SOURCE_PUSH("CGAffineTransform_obj::setTo")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(CGAffineTransform_obj,setTo,(void))

::neash::geom::Point CGAffineTransform_obj::transformPoint( ::neash::geom::Point point){
	HX_SOURCE_PUSH("CGAffineTransform_obj::transformPoint")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/CGAffineTransform.hx",51)
	return point;
}


HX_DEFINE_DYNAMIC_FUNC1(CGAffineTransform_obj,transformPoint,return )

Void CGAffineTransform_obj::translate( double dx,double dy){
{
		HX_SOURCE_PUSH("CGAffineTransform_obj::translate")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(CGAffineTransform_obj,translate,(void))


CGAffineTransform_obj::CGAffineTransform_obj()
{
}

void CGAffineTransform_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CGAffineTransform);
	HX_MARK_MEMBER_NAME(a,"a");
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_MEMBER_NAME(c,"c");
	HX_MARK_MEMBER_NAME(d,"d");
	HX_MARK_MEMBER_NAME(tx,"tx");
	HX_MARK_MEMBER_NAME(ty,"ty");
	HX_MARK_END_CLASS();
}

Dynamic CGAffineTransform_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { return a; }
		if (HX_FIELD_EQ(inName,"b") ) { return b; }
		if (HX_FIELD_EQ(inName,"c") ) { return c; }
		if (HX_FIELD_EQ(inName,"d") ) { return d; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"tx") ) { return tx; }
		if (HX_FIELD_EQ(inName,"ty") ) { return ty; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"scale") ) { return scale_dyn(); }
		if (HX_FIELD_EQ(inName,"setTo") ) { return setTo_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"concat") ) { return concat_dyn(); }
		if (HX_FIELD_EQ(inName,"invert") ) { return invert_dyn(); }
		if (HX_FIELD_EQ(inName,"rotate") ) { return rotate_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"identity") ) { return identity_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"translate") ) { return translate_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"transformPoint") ) { return transformPoint_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CGAffineTransform_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { a=inValue.Cast< double >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< double >(); return inValue; }
		if (HX_FIELD_EQ(inName,"c") ) { c=inValue.Cast< double >(); return inValue; }
		if (HX_FIELD_EQ(inName,"d") ) { d=inValue.Cast< double >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"tx") ) { tx=inValue.Cast< double >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ty") ) { ty=inValue.Cast< double >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CGAffineTransform_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("a"));
	outFields->push(HX_CSTRING("b"));
	outFields->push(HX_CSTRING("c"));
	outFields->push(HX_CSTRING("d"));
	outFields->push(HX_CSTRING("tx"));
	outFields->push(HX_CSTRING("ty"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("a"),
	HX_CSTRING("b"),
	HX_CSTRING("c"),
	HX_CSTRING("d"),
	HX_CSTRING("tx"),
	HX_CSTRING("ty"),
	HX_CSTRING("clone"),
	HX_CSTRING("concat"),
	HX_CSTRING("identity"),
	HX_CSTRING("invert"),
	HX_CSTRING("rotate"),
	HX_CSTRING("scale"),
	HX_CSTRING("setTo"),
	HX_CSTRING("transformPoint"),
	HX_CSTRING("translate"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class CGAffineTransform_obj::__mClass;

void CGAffineTransform_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.ancientsheep.particles.CGAffineTransform"), hx::TCanCast< CGAffineTransform_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void CGAffineTransform_obj::__boot()
{
}

} // end namespace com
} // end namespace ancientsheep
} // end namespace particles
