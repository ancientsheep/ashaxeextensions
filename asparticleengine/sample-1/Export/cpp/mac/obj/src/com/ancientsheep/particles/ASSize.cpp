#include <hxcpp.h>

#ifndef INCLUDED_com_ancientsheep_particles_ASSize
#include <com/ancientsheep/particles/ASSize.h>
#endif
namespace com{
namespace ancientsheep{
namespace particles{

Void ASSize_obj::__construct(hx::Null< double >  __o_w,hx::Null< double >  __o_h)
{
double w = __o_w.Default(0.0);
double h = __o_h.Default(0.0);
{
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASSize.hx",18)
	this->width = w;
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASSize.hx",19)
	this->height = h;
}
;
	return null();
}

ASSize_obj::~ASSize_obj() { }

Dynamic ASSize_obj::__CreateEmpty() { return  new ASSize_obj; }
hx::ObjectPtr< ASSize_obj > ASSize_obj::__new(hx::Null< double >  __o_w,hx::Null< double >  __o_h)
{  hx::ObjectPtr< ASSize_obj > result = new ASSize_obj();
	result->__construct(__o_w,__o_h);
	return result;}

Dynamic ASSize_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ASSize_obj > result = new ASSize_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::String ASSize_obj::toString( ){
	HX_SOURCE_PUSH("ASSize_obj::toString")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASSize.hx",21)
	return ((((HX_CSTRING("[ASSize width=") + this->width) + HX_CSTRING(", height=")) + this->height) + HX_CSTRING("]"));
}


HX_DEFINE_DYNAMIC_FUNC0(ASSize_obj,toString,return )


ASSize_obj::ASSize_obj()
{
}

void ASSize_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ASSize);
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_END_CLASS();
}

Dynamic ASSize_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ASSize_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< double >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< double >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ASSize_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("height"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("width"),
	HX_CSTRING("height"),
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class ASSize_obj::__mClass;

void ASSize_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.ancientsheep.particles.ASSize"), hx::TCanCast< ASSize_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void ASSize_obj::__boot()
{
}

} // end namespace com
} // end namespace ancientsheep
} // end namespace particles
