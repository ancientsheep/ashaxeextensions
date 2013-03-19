#include <hxcpp.h>

#ifndef INCLUDED_com_ancientsheep_particles_CCTypes
#include <com/ancientsheep/particles/CCTypes.h>
#endif
namespace com{
namespace ancientsheep{
namespace particles{

Void CCTypes_obj::__construct()
{
	return null();
}

CCTypes_obj::~CCTypes_obj() { }

Dynamic CCTypes_obj::__CreateEmpty() { return  new CCTypes_obj; }
hx::ObjectPtr< CCTypes_obj > CCTypes_obj::__new()
{  hx::ObjectPtr< CCTypes_obj > result = new CCTypes_obj();
	result->__construct();
	return result;}

Dynamic CCTypes_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CCTypes_obj > result = new CCTypes_obj();
	result->__construct();
	return result;}

Dynamic CCTypes_obj::ccWHITE;

Dynamic CCTypes_obj::ccYELLOW;

Dynamic CCTypes_obj::ccBLUE;

Dynamic CCTypes_obj::ccGREEN;

Dynamic CCTypes_obj::ccRED;

Dynamic CCTypes_obj::ccMAGENTA;

Dynamic CCTypes_obj::ccBLACK;

Dynamic CCTypes_obj::ccORANGE;

Dynamic CCTypes_obj::ccGRAY;

Dynamic CCTypes_obj::ccc3( int r,int g,int b){
	HX_SOURCE_PUSH("CCTypes_obj::ccc3")
	struct _Function_1_1{
		inline static Dynamic Block( int &b,int &g,int &r){
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("r") , r,false);
				__result->Add(HX_CSTRING("g") , g,false);
				__result->Add(HX_CSTRING("b") , b,false);
				return __result;
			}
			return null();
		}
	};
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASTypes.hx",292)
	Dynamic c = _Function_1_1::Block(b,g,r);
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASTypes.hx",293)
	return c;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CCTypes_obj,ccc3,return )

Dynamic CCTypes_obj::ccc4FFromccc3B( Dynamic c){
	HX_SOURCE_PUSH("CCTypes_obj::ccc4FFromccc3B")
	struct _Function_1_1{
		inline static Dynamic Block( Dynamic &c){
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("r") , (double(c->__Field(HX_CSTRING("r"),true)) / double((int)255)),false);
				__result->Add(HX_CSTRING("g") , (double(c->__Field(HX_CSTRING("g"),true)) / double((int)255)),false);
				__result->Add(HX_CSTRING("b") , (double(c->__Field(HX_CSTRING("b"),true)) / double((int)255)),false);
				__result->Add(HX_CSTRING("a") , 1.0,false);
				return __result;
			}
			return null();
		}
	};
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASTypes.hx",301)
	Dynamic c1 = _Function_1_1::Block(c);
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASTypes.hx",302)
	return c1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CCTypes_obj,ccc4FFromccc3B,return )

Dynamic CCTypes_obj::ccc4FFromccc4B( Dynamic c){
	HX_SOURCE_PUSH("CCTypes_obj::ccc4FFromccc4B")
	struct _Function_1_1{
		inline static Dynamic Block( Dynamic &c){
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("r") , (double(c->__Field(HX_CSTRING("r"),true)) / double((int)255)),false);
				__result->Add(HX_CSTRING("g") , (double(c->__Field(HX_CSTRING("g"),true)) / double((int)255)),false);
				__result->Add(HX_CSTRING("b") , (double(c->__Field(HX_CSTRING("b"),true)) / double((int)255)),false);
				__result->Add(HX_CSTRING("a") , (double(c->__Field(HX_CSTRING("a"),true)) / double((int)255)),false);
				return __result;
			}
			return null();
		}
	};
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASTypes.hx",310)
	Dynamic c1 = _Function_1_1::Block(c);
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASTypes.hx",311)
	return c1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CCTypes_obj,ccc4FFromccc4B,return )

bool CCTypes_obj::ccc4FEqual( Dynamic a,Dynamic b){
	HX_SOURCE_PUSH("CCTypes_obj::ccc4FEqual")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASTypes.hx",318)
	return (bool((bool((bool((a->__Field(HX_CSTRING("r"),true) == b->__Field(HX_CSTRING("r"),true))) && bool((a->__Field(HX_CSTRING("g"),true) == b->__Field(HX_CSTRING("g"),true))))) && bool((a->__Field(HX_CSTRING("b"),true) == b->__Field(HX_CSTRING("b"),true))))) && bool((a->__Field(HX_CSTRING("a"),true) == b->__Field(HX_CSTRING("a"),true))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CCTypes_obj,ccc4FEqual,return )

Dynamic CCTypes_obj::ccc4( int r,int g,int b,int a){
	HX_SOURCE_PUSH("CCTypes_obj::ccc4")
	struct _Function_1_1{
		inline static Dynamic Block( int &b,int &g,int &a,int &r){
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("r") , r,false);
				__result->Add(HX_CSTRING("g") , g,false);
				__result->Add(HX_CSTRING("b") , b,false);
				__result->Add(HX_CSTRING("a") , a,false);
				return __result;
			}
			return null();
		}
	};
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASTypes.hx",325)
	Dynamic c = _Function_1_1::Block(b,g,a,r);
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASTypes.hx",326)
	return c;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(CCTypes_obj,ccc4,return )

Dynamic CCTypes_obj::ASGridSizeMake( int x,int y){
	HX_SOURCE_PUSH("CCTypes_obj::ASGridSizeMake")
	struct _Function_1_1{
		inline static Dynamic Block( int &x,int &y){
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("x") , x,false);
				__result->Add(HX_CSTRING("y") , y,false);
				return __result;
			}
			return null();
		}
	};
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASTypes.hx",332)
	Dynamic v = _Function_1_1::Block(x,y);
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/ASTypes.hx",333)
	return v;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CCTypes_obj,ASGridSizeMake,return )


CCTypes_obj::CCTypes_obj()
{
}

void CCTypes_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CCTypes);
	HX_MARK_END_CLASS();
}

Dynamic CCTypes_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"ccc3") ) { return ccc3_dyn(); }
		if (HX_FIELD_EQ(inName,"ccc4") ) { return ccc4_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ccRED") ) { return ccRED; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ccBLUE") ) { return ccBLUE; }
		if (HX_FIELD_EQ(inName,"ccGRAY") ) { return ccGRAY; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ccWHITE") ) { return ccWHITE; }
		if (HX_FIELD_EQ(inName,"ccGREEN") ) { return ccGREEN; }
		if (HX_FIELD_EQ(inName,"ccBLACK") ) { return ccBLACK; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"ccYELLOW") ) { return ccYELLOW; }
		if (HX_FIELD_EQ(inName,"ccORANGE") ) { return ccORANGE; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ccMAGENTA") ) { return ccMAGENTA; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"ccc4FEqual") ) { return ccc4FEqual_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"ccc4FFromccc3B") ) { return ccc4FFromccc3B_dyn(); }
		if (HX_FIELD_EQ(inName,"ccc4FFromccc4B") ) { return ccc4FFromccc4B_dyn(); }
		if (HX_FIELD_EQ(inName,"ASGridSizeMake") ) { return ASGridSizeMake_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CCTypes_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"ccRED") ) { ccRED=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ccBLUE") ) { ccBLUE=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ccGRAY") ) { ccGRAY=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ccWHITE") ) { ccWHITE=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ccGREEN") ) { ccGREEN=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ccBLACK") ) { ccBLACK=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"ccYELLOW") ) { ccYELLOW=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ccORANGE") ) { ccORANGE=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ccMAGENTA") ) { ccMAGENTA=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CCTypes_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("ccWHITE"),
	HX_CSTRING("ccYELLOW"),
	HX_CSTRING("ccBLUE"),
	HX_CSTRING("ccGREEN"),
	HX_CSTRING("ccRED"),
	HX_CSTRING("ccMAGENTA"),
	HX_CSTRING("ccBLACK"),
	HX_CSTRING("ccORANGE"),
	HX_CSTRING("ccGRAY"),
	HX_CSTRING("ccc3"),
	HX_CSTRING("ccc4FFromccc3B"),
	HX_CSTRING("ccc4FFromccc4B"),
	HX_CSTRING("ccc4FEqual"),
	HX_CSTRING("ccc4"),
	HX_CSTRING("ASGridSizeMake"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CCTypes_obj::ccWHITE,"ccWHITE");
	HX_MARK_MEMBER_NAME(CCTypes_obj::ccYELLOW,"ccYELLOW");
	HX_MARK_MEMBER_NAME(CCTypes_obj::ccBLUE,"ccBLUE");
	HX_MARK_MEMBER_NAME(CCTypes_obj::ccGREEN,"ccGREEN");
	HX_MARK_MEMBER_NAME(CCTypes_obj::ccRED,"ccRED");
	HX_MARK_MEMBER_NAME(CCTypes_obj::ccMAGENTA,"ccMAGENTA");
	HX_MARK_MEMBER_NAME(CCTypes_obj::ccBLACK,"ccBLACK");
	HX_MARK_MEMBER_NAME(CCTypes_obj::ccORANGE,"ccORANGE");
	HX_MARK_MEMBER_NAME(CCTypes_obj::ccGRAY,"ccGRAY");
};

Class CCTypes_obj::__mClass;

void CCTypes_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.ancientsheep.particles.CCTypes"), hx::TCanCast< CCTypes_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void CCTypes_obj::__boot()
{
struct _Function_0_1{
	inline static Dynamic Block( ){
		{
			hx::Anon __result = hx::Anon_obj::Create();
			__result->Add(HX_CSTRING("r") , (int)255,false);
			__result->Add(HX_CSTRING("g") , (int)255,false);
			__result->Add(HX_CSTRING("b") , (int)255,false);
			return __result;
		}
		return null();
	}
};
	hx::Static(ccWHITE) = _Function_0_1::Block();
struct _Function_0_2{
	inline static Dynamic Block( ){
		{
			hx::Anon __result = hx::Anon_obj::Create();
			__result->Add(HX_CSTRING("r") , (int)255,false);
			__result->Add(HX_CSTRING("g") , (int)255,false);
			__result->Add(HX_CSTRING("b") , (int)0,false);
			return __result;
		}
		return null();
	}
};
	hx::Static(ccYELLOW) = _Function_0_2::Block();
struct _Function_0_3{
	inline static Dynamic Block( ){
		{
			hx::Anon __result = hx::Anon_obj::Create();
			__result->Add(HX_CSTRING("r") , (int)0,false);
			__result->Add(HX_CSTRING("g") , (int)0,false);
			__result->Add(HX_CSTRING("b") , (int)255,false);
			return __result;
		}
		return null();
	}
};
	hx::Static(ccBLUE) = _Function_0_3::Block();
struct _Function_0_4{
	inline static Dynamic Block( ){
		{
			hx::Anon __result = hx::Anon_obj::Create();
			__result->Add(HX_CSTRING("r") , (int)0,false);
			__result->Add(HX_CSTRING("g") , (int)255,false);
			__result->Add(HX_CSTRING("b") , (int)0,false);
			return __result;
		}
		return null();
	}
};
	hx::Static(ccGREEN) = _Function_0_4::Block();
struct _Function_0_5{
	inline static Dynamic Block( ){
		{
			hx::Anon __result = hx::Anon_obj::Create();
			__result->Add(HX_CSTRING("r") , (int)255,false);
			__result->Add(HX_CSTRING("g") , (int)0,false);
			__result->Add(HX_CSTRING("b") , (int)0,false);
			return __result;
		}
		return null();
	}
};
	hx::Static(ccRED) = _Function_0_5::Block();
struct _Function_0_6{
	inline static Dynamic Block( ){
		{
			hx::Anon __result = hx::Anon_obj::Create();
			__result->Add(HX_CSTRING("r") , (int)255,false);
			__result->Add(HX_CSTRING("g") , (int)0,false);
			__result->Add(HX_CSTRING("b") , (int)255,false);
			return __result;
		}
		return null();
	}
};
	hx::Static(ccMAGENTA) = _Function_0_6::Block();
struct _Function_0_7{
	inline static Dynamic Block( ){
		{
			hx::Anon __result = hx::Anon_obj::Create();
			__result->Add(HX_CSTRING("r") , (int)0,false);
			__result->Add(HX_CSTRING("g") , (int)0,false);
			__result->Add(HX_CSTRING("b") , (int)0,false);
			return __result;
		}
		return null();
	}
};
	hx::Static(ccBLACK) = _Function_0_7::Block();
struct _Function_0_8{
	inline static Dynamic Block( ){
		{
			hx::Anon __result = hx::Anon_obj::Create();
			__result->Add(HX_CSTRING("r") , (int)255,false);
			__result->Add(HX_CSTRING("g") , (int)127,false);
			__result->Add(HX_CSTRING("b") , (int)0,false);
			return __result;
		}
		return null();
	}
};
	hx::Static(ccORANGE) = _Function_0_8::Block();
struct _Function_0_9{
	inline static Dynamic Block( ){
		{
			hx::Anon __result = hx::Anon_obj::Create();
			__result->Add(HX_CSTRING("r") , (int)166,false);
			__result->Add(HX_CSTRING("g") , (int)166,false);
			__result->Add(HX_CSTRING("b") , (int)166,false);
			return __result;
		}
		return null();
	}
};
	hx::Static(ccGRAY) = _Function_0_9::Block();
}

} // end namespace com
} // end namespace ancientsheep
} // end namespace particles
