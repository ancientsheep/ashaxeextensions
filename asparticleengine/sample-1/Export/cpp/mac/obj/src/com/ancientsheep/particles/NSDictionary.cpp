#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_Hash
#include <Hash.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_com_ancientsheep_particles_NSDictionary
#include <com/ancientsheep/particles/NSDictionary.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_nme_installer_Assets
#include <nme/installer/Assets.h>
#endif
namespace com{
namespace ancientsheep{
namespace particles{

Void NSDictionary_obj::__construct()
{
{
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/NSDictionary.hx",66)
	::haxe::Log_obj::trace(HX_CSTRING("NSDictionary :: new"),hx::SourceInfo(HX_CSTRING("NSDictionary.hx"),66,HX_CSTRING("com.ancientsheep.particles.NSDictionary"),HX_CSTRING("new")));
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/NSDictionary.hx",67)
	this->hash_ = ::Hash_obj::__new();
}
;
	return null();
}

NSDictionary_obj::~NSDictionary_obj() { }

Dynamic NSDictionary_obj::__CreateEmpty() { return  new NSDictionary_obj; }
hx::ObjectPtr< NSDictionary_obj > NSDictionary_obj::__new()
{  hx::ObjectPtr< NSDictionary_obj > result = new NSDictionary_obj();
	result->__construct();
	return result;}

Dynamic NSDictionary_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NSDictionary_obj > result = new NSDictionary_obj();
	result->__construct();
	return result;}

Void NSDictionary_obj::loadContentsOfFile( ::String path){
{
		HX_SOURCE_PUSH("NSDictionary_obj::loadContentsOfFile")
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/NSDictionary.hx",35)
		::haxe::Log_obj::trace((HX_CSTRING("NSDictionary :: dictionaryWithContentsOfFile - ") + path),hx::SourceInfo(HX_CSTRING("NSDictionary.hx"),35,HX_CSTRING("com.ancientsheep.particles.NSDictionary"),HX_CSTRING("loadContentsOfFile")));
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/NSDictionary.hx",37)
		::String dictstring = ::nme::installer::Assets_obj::getText(path);
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/NSDictionary.hx",39)
		::haxe::Log_obj::trace((HX_CSTRING("NSDictionary :: dictionaryWithContentsOfFile - ") + dictstring),hx::SourceInfo(HX_CSTRING("NSDictionary.hx"),39,HX_CSTRING("com.ancientsheep.particles.NSDictionary"),HX_CSTRING("loadContentsOfFile")));
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/NSDictionary.hx",40)
		this->parse(::Xml_obj::parse(dictstring)->firstElement());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NSDictionary_obj,loadContentsOfFile,(void))

Void NSDictionary_obj::release( ){
{
		HX_SOURCE_PUSH("NSDictionary_obj::release")
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/NSDictionary.hx",69)
		this->hash_ = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NSDictionary_obj,release,(void))

Void NSDictionary_obj::parse( ::Xml xmlPlist){
{
		HX_SOURCE_PUSH("NSDictionary_obj::parse")
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/NSDictionary.hx",77)
		for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(xmlPlist->elements());  __it->hasNext(); ){
			::Xml element = __it->next();
			if (((element->getNodeName() == HX_CSTRING("array")))){
				HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/NSDictionary.hx",80)
				this->hash_ = this->parseArray(element);
			}
			else{
				HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/NSDictionary.hx",83)
				if (((element->getNodeName() == HX_CSTRING("dict")))){
					HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/NSDictionary.hx",83)
					this->hash_ = this->parseDictionary(element);
				}
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NSDictionary_obj,parse,(void))

::Hash NSDictionary_obj::parseDictionary( ::Xml xmlDict){
	HX_SOURCE_PUSH("NSDictionary_obj::parseDictionary")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/NSDictionary.hx",90)
	::Hash h = ::Hash_obj::__new();
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/NSDictionary.hx",91)
	::String key = null();
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/NSDictionary.hx",93)
	for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(xmlDict->elements());  __it->hasNext(); ){
		::Xml element = __it->next();
		if (((bool((key == null())) && bool((element->getNodeName() == HX_CSTRING("key")))))){
			HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/NSDictionary.hx",94)
			key = element->firstChild()->toString();
		}
		else{
			HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/NSDictionary.hx",98)
			::String _switch_1 = (element->getNodeName());
			if (  ( _switch_1==HX_CSTRING("dict"))){
				HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/NSDictionary.hx",99)
				h->set(key,this->parseDictionary(element));
			}
			else if (  ( _switch_1==HX_CSTRING("array"))){
				HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/NSDictionary.hx",100)
				h->set(key,this->parseArray(element));
			}
			else if (  ( _switch_1==HX_CSTRING("string"))){
				HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/NSDictionary.hx",101)
				h->set(key,element->firstChild()->toString());
			}
			else if (  ( _switch_1==HX_CSTRING("integer"))){
				HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/NSDictionary.hx",102)
				h->set(key,::Std_obj::parseInt(element->firstChild()->toString()));
			}
			else if (  ( _switch_1==HX_CSTRING("real"))){
				HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/NSDictionary.hx",103)
				h->set(key,::Std_obj::parseFloat(element->firstChild()->toString()));
			}
			else if (  ( _switch_1==HX_CSTRING("data"))){
				HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/NSDictionary.hx",104)
				h->set(key,element->firstChild());
			}
			else if (  ( _switch_1==HX_CSTRING("date"))){
				HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/NSDictionary.hx",106)
				::String d = element->firstChild()->toString();
				HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/NSDictionary.hx",107)
				d = ::StringTools_obj::replace(d,HX_CSTRING("T"),HX_CSTRING(" "));
				HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/NSDictionary.hx",108)
				d = ::StringTools_obj::replace(d,HX_CSTRING("Z"),HX_CSTRING(""));
				HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/NSDictionary.hx",109)
				h->set(key,::Date_obj::fromString(d));
			}
			HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/NSDictionary.hx",111)
			key = null();
		}
;
	}
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/NSDictionary.hx",115)
	return h;
}


HX_DEFINE_DYNAMIC_FUNC1(NSDictionary_obj,parseDictionary,return )

::Hash NSDictionary_obj::parseArray( ::Xml dictArr){
	HX_SOURCE_PUSH("NSDictionary_obj::parseArray")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/NSDictionary.hx",117)
	return this->parseDictionary(dictArr);
}


HX_DEFINE_DYNAMIC_FUNC1(NSDictionary_obj,parseArray,return )

int NSDictionary_obj::getLength( ){
	HX_SOURCE_PUSH("NSDictionary_obj::getLength")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/NSDictionary.hx",123)
	Dynamic keys = this->hash_->keys();
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/NSDictionary.hx",124)
	int len = (int)0;
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/NSDictionary.hx",125)
	for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(keys);  __it->hasNext(); ){
		::String key = __it->next();
		(len)++;
	}
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/NSDictionary.hx",127)
	return len;
}


HX_DEFINE_DYNAMIC_FUNC0(NSDictionary_obj,getLength,return )

Dynamic NSDictionary_obj::valueForKey( ::String key){
	HX_SOURCE_PUSH("NSDictionary_obj::valueForKey")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/NSDictionary.hx",135)
	return this->hash_->get(key);
}


HX_DEFINE_DYNAMIC_FUNC1(NSDictionary_obj,valueForKey,return )

Dynamic NSDictionary_obj::objectForKey( ::String key){
	HX_SOURCE_PUSH("NSDictionary_obj::objectForKey")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/NSDictionary.hx",139)
	return this->hash_->get(key);
}


HX_DEFINE_DYNAMIC_FUNC1(NSDictionary_obj,objectForKey,return )

Array< ::String > NSDictionary_obj::allKeys( ){
	HX_SOURCE_PUSH("NSDictionary_obj::allKeys")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/NSDictionary.hx",145)
	Array< ::String > keys = Array_obj< ::String >::__new();
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/NSDictionary.hx",146)
	for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->keyEnumerator());  __it->hasNext(); ){
		::String key = __it->next();
		keys->push(key);
	}
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/NSDictionary.hx",148)
	return keys;
}


HX_DEFINE_DYNAMIC_FUNC0(NSDictionary_obj,allKeys,return )

Dynamic NSDictionary_obj::keyEnumerator( ){
	HX_SOURCE_PUSH("NSDictionary_obj::keyEnumerator")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/NSDictionary.hx",150)
	return this->hash_->keys();
}


HX_DEFINE_DYNAMIC_FUNC0(NSDictionary_obj,keyEnumerator,return )

Dynamic NSDictionary_obj::iterator( ){
	HX_SOURCE_PUSH("NSDictionary_obj::iterator")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/NSDictionary.hx",153)
	return this->hash_->keys();
}


HX_DEFINE_DYNAMIC_FUNC0(NSDictionary_obj,iterator,return )

Array< ::String > NSDictionary_obj::allKeysForObject( Dynamic anObject){
	HX_SOURCE_PUSH("NSDictionary_obj::allKeysForObject")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/NSDictionary.hx",157)
	return Array_obj< ::String >::__new();
}


HX_DEFINE_DYNAMIC_FUNC1(NSDictionary_obj,allKeysForObject,return )

Dynamic NSDictionary_obj::allValues( ){
	HX_SOURCE_PUSH("NSDictionary_obj::allValues")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/NSDictionary.hx",162)
	Dynamic objs = Dynamic( Array_obj<Dynamic>::__new() );
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/NSDictionary.hx",163)
	for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(this->objectEnumerator());  __it->hasNext(); ){
		Dynamic obj = __it->next();
		objs->__Field(HX_CSTRING("push"),true)(obj);
	}
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/NSDictionary.hx",165)
	return objs;
}


HX_DEFINE_DYNAMIC_FUNC0(NSDictionary_obj,allValues,return )

Dynamic NSDictionary_obj::objectEnumerator( ){
	HX_SOURCE_PUSH("NSDictionary_obj::objectEnumerator")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/NSDictionary.hx",167)
	return this->hash_->iterator();
}


HX_DEFINE_DYNAMIC_FUNC0(NSDictionary_obj,objectEnumerator,return )

bool NSDictionary_obj::isEqualToDictionary( ::com::ancientsheep::particles::NSDictionary otherDictionary){
	HX_SOURCE_PUSH("NSDictionary_obj::isEqualToDictionary")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/NSDictionary.hx",171)
	return (hx::ObjectPtr<OBJ_>(this) == otherDictionary);
}


HX_DEFINE_DYNAMIC_FUNC1(NSDictionary_obj,isEqualToDictionary,return )

Void NSDictionary_obj::setValue( Dynamic value,::String key){
{
		HX_SOURCE_PUSH("NSDictionary_obj::setValue")
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/NSDictionary.hx",181)
		this->hash_->set(key,value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(NSDictionary_obj,setValue,(void))

Void NSDictionary_obj::setObject( Dynamic value,::String key){
{
		HX_SOURCE_PUSH("NSDictionary_obj::setObject")
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/NSDictionary.hx",185)
		this->hash_->set(key,value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(NSDictionary_obj,setObject,(void))

Void NSDictionary_obj::removeObjectForKey( ::String key){
{
		HX_SOURCE_PUSH("NSDictionary_obj::removeObjectForKey")
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/NSDictionary.hx",189)
		this->hash_->remove(key);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NSDictionary_obj,removeObjectForKey,(void))

Void NSDictionary_obj::removeObjectsForKeys( Array< ::String > keys){
{
		HX_SOURCE_PUSH("NSDictionary_obj::removeObjectsForKeys")
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/NSDictionary.hx",194)
		int _g = (int)0;
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/NSDictionary.hx",194)
		while(((_g < keys->length))){
			HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/NSDictionary.hx",194)
			::String key = keys->__get(_g);
			HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/NSDictionary.hx",194)
			++(_g);
			HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/NSDictionary.hx",195)
			this->removeObjectForKey(key);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NSDictionary_obj,removeObjectsForKeys,(void))

Void NSDictionary_obj::removeAllObjects( ){
{
		HX_SOURCE_PUSH("NSDictionary_obj::removeAllObjects")
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/NSDictionary.hx",198)
		this->hash_ = ::Hash_obj::__new();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NSDictionary_obj,removeAllObjects,(void))

Void NSDictionary_obj::logAll( ){
{
		HX_SOURCE_PUSH("NSDictionary_obj::logAll")
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/NSDictionary.hx",203)
		::haxe::Log_obj::trace((((HX_CSTRING("NSDictionary :: hash_ ") + this->hash_) + HX_CSTRING(" - data_ ")) + this->data_),hx::SourceInfo(HX_CSTRING("NSDictionary.hx"),204,HX_CSTRING("com.ancientsheep.particles.NSDictionary"),HX_CSTRING("logAll")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NSDictionary_obj,logAll,(void))

::com::ancientsheep::particles::NSDictionary NSDictionary_obj::dictionary( ){
	HX_SOURCE_PUSH("NSDictionary_obj::dictionary")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/NSDictionary.hx",15)
	return ::com::ancientsheep::particles::NSDictionary_obj::__new();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(NSDictionary_obj,dictionary,return )

::com::ancientsheep::particles::NSDictionary NSDictionary_obj::dictionaryWithContentsOfFile( ::String path){
	HX_SOURCE_PUSH("NSDictionary_obj::dictionaryWithContentsOfFile")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/NSDictionary.hx",21)
	::haxe::Log_obj::trace((HX_CSTRING("NSDictionary :: dictionaryWithContentsOfFile - ") + path),hx::SourceInfo(HX_CSTRING("NSDictionary.hx"),21,HX_CSTRING("com.ancientsheep.particles.NSDictionary"),HX_CSTRING("dictionaryWithContentsOfFile")));
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/NSDictionary.hx",23)
	::String dictstring = ::nme::installer::Assets_obj::getText(path);
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/NSDictionary.hx",25)
	::com::ancientsheep::particles::NSDictionary dict = ::com::ancientsheep::particles::NSDictionary_obj::__new();
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/NSDictionary.hx",26)
	dict->parse(::Xml_obj::parse(dictstring)->firstElement());
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/NSDictionary.hx",28)
	dict->logAll();
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/NSDictionary.hx",30)
	return dict;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NSDictionary_obj,dictionaryWithContentsOfFile,return )

::com::ancientsheep::particles::NSDictionary NSDictionary_obj::dictionaryWithDictionary( ::com::ancientsheep::particles::NSDictionary dic){
	HX_SOURCE_PUSH("NSDictionary_obj::dictionaryWithDictionary")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/NSDictionary.hx",45)
	::com::ancientsheep::particles::NSDictionary dict = ::com::ancientsheep::particles::NSDictionary_obj::__new();
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/NSDictionary.hx",46)
	return dict;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NSDictionary_obj,dictionaryWithDictionary,return )

::com::ancientsheep::particles::NSDictionary NSDictionary_obj::dictionaryWithObject( Dynamic obj,::String key){
	HX_SOURCE_PUSH("NSDictionary_obj::dictionaryWithObject")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/NSDictionary.hx",51)
	::com::ancientsheep::particles::NSDictionary dic = ::com::ancientsheep::particles::NSDictionary_obj::__new();
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/NSDictionary.hx",52)
	dic->setObject(obj,key);
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/NSDictionary.hx",53)
	return dic;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NSDictionary_obj,dictionaryWithObject,return )

::com::ancientsheep::particles::NSDictionary NSDictionary_obj::dictionaryWithObjects( Dynamic obj,Array< ::String > key){
	HX_SOURCE_PUSH("NSDictionary_obj::dictionaryWithObjects")
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/NSDictionary.hx",56)
	::com::ancientsheep::particles::NSDictionary dic = ::com::ancientsheep::particles::NSDictionary_obj::__new();
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/NSDictionary.hx",57)
	{
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/NSDictionary.hx",57)
		int _g1 = (int)0;
		int _g = key->length;
		HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/NSDictionary.hx",57)
		while(((_g1 < _g))){
			HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/NSDictionary.hx",57)
			int i = (_g1)++;
			HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/NSDictionary.hx",58)
			dic->setObject(obj->__GetItem(i),key->__get(i));
		}
	}
	HX_SOURCE_POS("/usr/lib/haxe/lib/asparticleengine/1,0,1/com/ancientsheep/particles/NSDictionary.hx",59)
	return dic;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NSDictionary_obj,dictionaryWithObjects,return )


NSDictionary_obj::NSDictionary_obj()
{
}

void NSDictionary_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NSDictionary);
	HX_MARK_MEMBER_NAME(hash_,"hash_");
	HX_MARK_MEMBER_NAME(data_,"data_");
	HX_MARK_MEMBER_NAME(count,"count");
	HX_MARK_END_CLASS();
}

Dynamic NSDictionary_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"hash_") ) { return hash_; }
		if (HX_FIELD_EQ(inName,"data_") ) { return data_; }
		if (HX_FIELD_EQ(inName,"count") ) { return inCallProp ? getLength() : count; }
		if (HX_FIELD_EQ(inName,"parse") ) { return parse_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"logAll") ) { return logAll_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"release") ) { return release_dyn(); }
		if (HX_FIELD_EQ(inName,"allKeys") ) { return allKeys_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"iterator") ) { return iterator_dyn(); }
		if (HX_FIELD_EQ(inName,"setValue") ) { return setValue_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getLength") ) { return getLength_dyn(); }
		if (HX_FIELD_EQ(inName,"allValues") ) { return allValues_dyn(); }
		if (HX_FIELD_EQ(inName,"setObject") ) { return setObject_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dictionary") ) { return dictionary_dyn(); }
		if (HX_FIELD_EQ(inName,"parseArray") ) { return parseArray_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"valueForKey") ) { return valueForKey_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"objectForKey") ) { return objectForKey_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"keyEnumerator") ) { return keyEnumerator_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"parseDictionary") ) { return parseDictionary_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"allKeysForObject") ) { return allKeysForObject_dyn(); }
		if (HX_FIELD_EQ(inName,"objectEnumerator") ) { return objectEnumerator_dyn(); }
		if (HX_FIELD_EQ(inName,"removeAllObjects") ) { return removeAllObjects_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"loadContentsOfFile") ) { return loadContentsOfFile_dyn(); }
		if (HX_FIELD_EQ(inName,"removeObjectForKey") ) { return removeObjectForKey_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"isEqualToDictionary") ) { return isEqualToDictionary_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"dictionaryWithObject") ) { return dictionaryWithObject_dyn(); }
		if (HX_FIELD_EQ(inName,"removeObjectsForKeys") ) { return removeObjectsForKeys_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"dictionaryWithObjects") ) { return dictionaryWithObjects_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"dictionaryWithDictionary") ) { return dictionaryWithDictionary_dyn(); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"dictionaryWithContentsOfFile") ) { return dictionaryWithContentsOfFile_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic NSDictionary_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"hash_") ) { hash_=inValue.Cast< ::Hash >(); return inValue; }
		if (HX_FIELD_EQ(inName,"data_") ) { data_=inValue.Cast< ::Hash >(); return inValue; }
		if (HX_FIELD_EQ(inName,"count") ) { count=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void NSDictionary_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("hash_"));
	outFields->push(HX_CSTRING("data_"));
	outFields->push(HX_CSTRING("count"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("dictionary"),
	HX_CSTRING("dictionaryWithContentsOfFile"),
	HX_CSTRING("dictionaryWithDictionary"),
	HX_CSTRING("dictionaryWithObject"),
	HX_CSTRING("dictionaryWithObjects"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("hash_"),
	HX_CSTRING("data_"),
	HX_CSTRING("count"),
	HX_CSTRING("loadContentsOfFile"),
	HX_CSTRING("release"),
	HX_CSTRING("parse"),
	HX_CSTRING("parseDictionary"),
	HX_CSTRING("parseArray"),
	HX_CSTRING("getLength"),
	HX_CSTRING("valueForKey"),
	HX_CSTRING("objectForKey"),
	HX_CSTRING("allKeys"),
	HX_CSTRING("keyEnumerator"),
	HX_CSTRING("iterator"),
	HX_CSTRING("allKeysForObject"),
	HX_CSTRING("allValues"),
	HX_CSTRING("objectEnumerator"),
	HX_CSTRING("isEqualToDictionary"),
	HX_CSTRING("setValue"),
	HX_CSTRING("setObject"),
	HX_CSTRING("removeObjectForKey"),
	HX_CSTRING("removeObjectsForKeys"),
	HX_CSTRING("removeAllObjects"),
	HX_CSTRING("logAll"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class NSDictionary_obj::__mClass;

void NSDictionary_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.ancientsheep.particles.NSDictionary"), hx::TCanCast< NSDictionary_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void NSDictionary_obj::__boot()
{
}

} // end namespace com
} // end namespace ancientsheep
} // end namespace particles
