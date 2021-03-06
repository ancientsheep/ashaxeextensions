#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_neash_Loader
#include <neash/Loader.h>
#endif
#ifndef INCLUDED_neash_events_ErrorEvent
#include <neash/events/ErrorEvent.h>
#endif
#ifndef INCLUDED_neash_events_Event
#include <neash/events/Event.h>
#endif
#ifndef INCLUDED_neash_events_EventDispatcher
#include <neash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_neash_events_HTTPStatusEvent
#include <neash/events/HTTPStatusEvent.h>
#endif
#ifndef INCLUDED_neash_events_IEventDispatcher
#include <neash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_neash_events_IOErrorEvent
#include <neash/events/IOErrorEvent.h>
#endif
#ifndef INCLUDED_neash_events_ProgressEvent
#include <neash/events/ProgressEvent.h>
#endif
#ifndef INCLUDED_neash_events_TextEvent
#include <neash/events/TextEvent.h>
#endif
#ifndef INCLUDED_neash_net_URLLoader
#include <neash/net/URLLoader.h>
#endif
#ifndef INCLUDED_neash_net_URLLoaderDataFormat
#include <neash/net/URLLoaderDataFormat.h>
#endif
#ifndef INCLUDED_neash_net_URLRequest
#include <neash/net/URLRequest.h>
#endif
#ifndef INCLUDED_neash_net_URLVariables
#include <neash/net/URLVariables.h>
#endif
#ifndef INCLUDED_neash_utils_ByteArray
#include <neash/utils/ByteArray.h>
#endif
#ifndef INCLUDED_neash_utils_IDataInput
#include <neash/utils/IDataInput.h>
#endif
namespace neash{
namespace net{

Void URLLoader_obj::__construct(::neash::net::URLRequest request)
{
{
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/net/URLLoader.hx",50)
	super::__construct(null());
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/net/URLLoader.hx",51)
	this->nmeHandle = (int)0;
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/net/URLLoader.hx",52)
	this->bytesLoaded = (int)0;
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/net/URLLoader.hx",53)
	this->bytesTotal = (int)-1;
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/net/URLLoader.hx",54)
	this->state = (int)0;
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/net/URLLoader.hx",55)
	this->dataFormat = ::neash::net::URLLoaderDataFormat_obj::TEXT_dyn();
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/net/URLLoader.hx",56)
	if (((request != null()))){
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/net/URLLoader.hx",57)
		this->load(request);
	}
}
;
	return null();
}

URLLoader_obj::~URLLoader_obj() { }

Dynamic URLLoader_obj::__CreateEmpty() { return  new URLLoader_obj; }
hx::ObjectPtr< URLLoader_obj > URLLoader_obj::__new(::neash::net::URLRequest request)
{  hx::ObjectPtr< URLLoader_obj > result = new URLLoader_obj();
	result->__construct(request);
	return result;}

Dynamic URLLoader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< URLLoader_obj > result = new URLLoader_obj();
	result->__construct(inArgs[0]);
	return result;}

Void URLLoader_obj::close( ){
{
		HX_SOURCE_PUSH("URLLoader_obj::close")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(URLLoader_obj,close,(void))

Array< ::String > URLLoader_obj::getCookies( ){
	HX_SOURCE_PUSH("URLLoader_obj::getCookies")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/net/URLLoader.hx",62)
	return ::neash::net::URLLoader_obj::nme_curl_get_cookies(this->nmeHandle);
}


HX_DEFINE_DYNAMIC_FUNC0(URLLoader_obj,getCookies,return )

Void URLLoader_obj::load( ::neash::net::URLRequest request){
{
		HX_SOURCE_PUSH("URLLoader_obj::load")
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/net/URLLoader.hx",75)
		this->state = (int)1;
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/net/URLLoader.hx",76)
		::String pref = request->url.substr((int)0,(int)7);
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/net/URLLoader.hx",77)
		if (((bool((pref != HX_CSTRING("http://"))) && bool((pref != HX_CSTRING("https:/")))))){
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/net/URLLoader.hx",78)
			try{
				HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/net/URLLoader.hx",79)
				::neash::utils::ByteArray bytes = ::neash::utils::ByteArray_obj::readFile(request->url);
				HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/net/URLLoader.hx",80)
				if (((bytes == null()))){
					HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/net/URLLoader.hx",81)
					hx::Throw (((HX_CSTRING("Could not open file \"") + request->url) + HX_CSTRING("\"")));
				}
				HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/net/URLLoader.hx",82)
				{
::neash::net::URLLoaderDataFormat _switch_1 = (this->dataFormat);
					switch((_switch_1)->GetIndex()){
						case 1: {
							HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/net/URLLoader.hx",83)
							this->data = bytes->asString();
						}
						;break;
						case 2: {
							HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/net/URLLoader.hx",85)
							this->data = ::neash::net::URLVariables_obj::__new(bytes->asString());
						}
						;break;
						default: {
							HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/net/URLLoader.hx",87)
							this->data = bytes;
						}
					}
				}
			}
			catch(Dynamic __e){
				{
					Dynamic e = __e;{
						HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/net/URLLoader.hx",91)
						this->onError(e);
						HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/net/URLLoader.hx",92)
						return null();
					}
				}
			}
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/net/URLLoader.hx",95)
			this->nmeDataComplete();
		}
		else{
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/net/URLLoader.hx",97)
			request->nmePrepare();
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/net/URLLoader.hx",98)
			this->nmeHandle = ::neash::net::URLLoader_obj::nme_curl_create(request);
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/net/URLLoader.hx",99)
			if (((this->nmeHandle == null()))){
				HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/net/URLLoader.hx",100)
				this->onError(HX_CSTRING("Could not open URL"));
			}
			else{
				HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/net/URLLoader.hx",102)
				::neash::net::URLLoader_obj::activeLoaders->push(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(URLLoader_obj,load,(void))

Void URLLoader_obj::nmeDataComplete( ){
{
		HX_SOURCE_PUSH("URLLoader_obj::nmeDataComplete")
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/net/URLLoader.hx",107)
		::neash::net::URLLoader_obj::activeLoaders->remove(hx::ObjectPtr<OBJ_>(this));
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/net/URLLoader.hx",108)
		if (((this->nmeOnComplete_dyn() != null()))){
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/net/URLLoader.hx",108)
			if ((this->nmeOnComplete(this->data))){
				HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/net/URLLoader.hx",110)
				this->dispatchEvent(::neash::events::Event_obj::__new(::neash::events::Event_obj::COMPLETE,null(),null()));
			}
			else{
				HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/net/URLLoader.hx",112)
				this->DispatchIOErrorEvent();
			}
		}
		else{
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/net/URLLoader.hx",113)
			this->dispatchEvent(::neash::events::Event_obj::__new(::neash::events::Event_obj::COMPLETE,null(),null()));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(URLLoader_obj,nmeDataComplete,(void))

Void URLLoader_obj::onError( ::String msg){
{
		HX_SOURCE_PUSH("URLLoader_obj::onError")
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/net/URLLoader.hx",136)
		::neash::net::URLLoader_obj::activeLoaders->remove(hx::ObjectPtr<OBJ_>(this));
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/net/URLLoader.hx",137)
		this->dispatchEvent(::neash::events::IOErrorEvent_obj::__new(::neash::events::IOErrorEvent_obj::IO_ERROR,true,false,msg,null()));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(URLLoader_obj,onError,(void))

Void URLLoader_obj::dispatchHTTPStatus( int code){
{
		HX_SOURCE_PUSH("URLLoader_obj::dispatchHTTPStatus")
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/net/URLLoader.hx",140)
		this->dispatchEvent(::neash::events::HTTPStatusEvent_obj::__new(::neash::events::HTTPStatusEvent_obj::HTTP_STATUS,false,false,code));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(URLLoader_obj,dispatchHTTPStatus,(void))

Void URLLoader_obj::update( ){
{
		HX_SOURCE_PUSH("URLLoader_obj::update")
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/net/URLLoader.hx",144)
		if (((this->nmeHandle != null()))){
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/net/URLLoader.hx",146)
			int old_loaded = this->bytesLoaded;
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/net/URLLoader.hx",147)
			int old_total = this->bytesTotal;
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/net/URLLoader.hx",148)
			::neash::net::URLLoader_obj::nme_curl_update_loader(this->nmeHandle,hx::ObjectPtr<OBJ_>(this));
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/net/URLLoader.hx",149)
			if (((bool((old_total < (int)0)) && bool((this->bytesTotal > (int)0))))){
				HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/net/URLLoader.hx",149)
				this->dispatchEvent(::neash::events::Event_obj::__new(::neash::events::Event_obj::OPEN,null(),null()));
			}
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/net/URLLoader.hx",153)
			if (((bool((this->bytesTotal > (int)0)) && bool((this->bytesLoaded != old_loaded))))){
				HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/net/URLLoader.hx",153)
				this->dispatchEvent(::neash::events::ProgressEvent_obj::__new(HX_CSTRING("progress"),false,false,this->bytesLoaded,this->bytesTotal));
			}
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/net/URLLoader.hx",157)
			int code = ::neash::net::URLLoader_obj::nme_curl_get_code(this->nmeHandle);
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/net/URLLoader.hx",159)
			if (((this->state == (int)3))){
				HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/net/URLLoader.hx",160)
				this->dispatchHTTPStatus(code);
				HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/net/URLLoader.hx",162)
				if (((code < (int)400))){
					HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/net/URLLoader.hx",163)
					::neash::utils::ByteArray bytes = ::neash::net::URLLoader_obj::nme_curl_get_data(this->nmeHandle);
					HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/net/URLLoader.hx",164)
					{
::neash::net::URLLoaderDataFormat _switch_2 = (this->dataFormat);
						switch((_switch_2)->GetIndex()){
							case 1: case 2: {
								HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/net/URLLoader.hx",165)
								this->data = (  (((bytes == null()))) ? ::String(HX_CSTRING("")) : ::String(bytes->asString()) );
							}
							;break;
							default: {
								HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/net/URLLoader.hx",167)
								this->data = bytes;
							}
						}
					}
					HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/net/URLLoader.hx",170)
					this->nmeDataComplete();
				}
				else{
					HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/net/URLLoader.hx",173)
					::neash::events::IOErrorEvent evt = ::neash::events::IOErrorEvent_obj::__new(::neash::events::IOErrorEvent_obj::IO_ERROR,true,false,(HX_CSTRING("HTTP status code ") + ::Std_obj::string(code)),code);
					HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/net/URLLoader.hx",174)
					this->nmeHandle = null();
					HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/net/URLLoader.hx",175)
					this->dispatchEvent(evt);
				}
			}
			else{
				HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/net/URLLoader.hx",177)
				if (((this->state == (int)4))){
					HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/net/URLLoader.hx",178)
					this->dispatchHTTPStatus(code);
					HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/net/URLLoader.hx",180)
					::neash::events::IOErrorEvent evt = ::neash::events::IOErrorEvent_obj::__new(::neash::events::IOErrorEvent_obj::IO_ERROR,true,false,::neash::net::URLLoader_obj::nme_curl_get_error_message(this->nmeHandle),code);
					HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/net/URLLoader.hx",181)
					this->nmeHandle = null();
					HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/net/URLLoader.hx",182)
					this->dispatchEvent(evt);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(URLLoader_obj,update,(void))

::List URLLoader_obj::activeLoaders;

int URLLoader_obj::urlInvalid;

int URLLoader_obj::urlInit;

int URLLoader_obj::urlLoading;

int URLLoader_obj::urlComplete;

int URLLoader_obj::urlError;

bool URLLoader_obj::hasActive( ){
	HX_SOURCE_PUSH("URLLoader_obj::hasActive")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/net/URLLoader.hx",66)
	return !(::neash::net::URLLoader_obj::activeLoaders->isEmpty());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(URLLoader_obj,hasActive,return )

Void URLLoader_obj::initialize( ::String inCACertFilePath){
{
		HX_SOURCE_PUSH("URLLoader_obj::initialize")
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/net/URLLoader.hx",70)
		::neash::net::URLLoader_obj::nme_curl_initialize(inCACertFilePath);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(URLLoader_obj,initialize,(void))

bool URLLoader_obj::nmeLoadPending( ){
	HX_SOURCE_PUSH("URLLoader_obj::nmeLoadPending")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/net/URLLoader.hx",118)
	return !(::neash::net::URLLoader_obj::activeLoaders->isEmpty());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(URLLoader_obj,nmeLoadPending,return )

Void URLLoader_obj::nmePollData( ){
{
		HX_SOURCE_PUSH("URLLoader_obj::nmePollData")
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/net/URLLoader.hx",122)
		if ((!(::neash::net::URLLoader_obj::activeLoaders->isEmpty()))){
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/net/URLLoader.hx",124)
			::neash::net::URLLoader_obj::nme_curl_process_loaders();
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/net/URLLoader.hx",125)
			::List oldLoaders = ::neash::net::URLLoader_obj::activeLoaders;
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/net/URLLoader.hx",126)
			::neash::net::URLLoader_obj::activeLoaders = ::List_obj::__new();
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/net/URLLoader.hx",127)
			for(::cpp::FastIterator_obj< ::neash::net::URLLoader > *__it = ::cpp::CreateFastIterator< ::neash::net::URLLoader >(oldLoaders->iterator());  __it->hasNext(); ){
				::neash::net::URLLoader loader = __it->next();
				{
					HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/net/URLLoader.hx",128)
					loader->update();
					HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/net/URLLoader.hx",129)
					if (((loader->state == (int)2))){
						HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/net/URLLoader.hx",130)
						::neash::net::URLLoader_obj::activeLoaders->push(loader);
					}
				}
;
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(URLLoader_obj,nmePollData,(void))

Dynamic URLLoader_obj::nme_curl_create;

Dynamic URLLoader_obj::nme_curl_process_loaders;

Dynamic URLLoader_obj::nme_curl_update_loader;

Dynamic URLLoader_obj::nme_curl_get_code;

Dynamic URLLoader_obj::nme_curl_get_error_message;

Dynamic URLLoader_obj::nme_curl_get_data;

Dynamic URLLoader_obj::nme_curl_get_cookies;

Dynamic URLLoader_obj::nme_curl_initialize;


URLLoader_obj::URLLoader_obj()
{
}

void URLLoader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(URLLoader);
	HX_MARK_MEMBER_NAME(bytesLoaded,"bytesLoaded");
	HX_MARK_MEMBER_NAME(bytesTotal,"bytesTotal");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(dataFormat,"dataFormat");
	HX_MARK_MEMBER_NAME(nmeHandle,"nmeHandle");
	HX_MARK_MEMBER_NAME(state,"state");
	HX_MARK_MEMBER_NAME(nmeOnComplete,"nmeOnComplete");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

Dynamic URLLoader_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { return state; }
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"urlInit") ) { return urlInit; }
		if (HX_FIELD_EQ(inName,"onError") ) { return onError_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"urlError") ) { return urlError; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"hasActive") ) { return hasActive_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeHandle") ) { return nmeHandle; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"urlInvalid") ) { return urlInvalid; }
		if (HX_FIELD_EQ(inName,"urlLoading") ) { return urlLoading; }
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { return bytesTotal; }
		if (HX_FIELD_EQ(inName,"dataFormat") ) { return dataFormat; }
		if (HX_FIELD_EQ(inName,"getCookies") ) { return getCookies_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"urlComplete") ) { return urlComplete; }
		if (HX_FIELD_EQ(inName,"nmePollData") ) { return nmePollData_dyn(); }
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { return bytesLoaded; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"activeLoaders") ) { return activeLoaders; }
		if (HX_FIELD_EQ(inName,"nmeOnComplete") ) { return nmeOnComplete; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"nmeLoadPending") ) { return nmeLoadPending_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"nme_curl_create") ) { return nme_curl_create; }
		if (HX_FIELD_EQ(inName,"nmeDataComplete") ) { return nmeDataComplete_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"nme_curl_get_code") ) { return nme_curl_get_code; }
		if (HX_FIELD_EQ(inName,"nme_curl_get_data") ) { return nme_curl_get_data; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"dispatchHTTPStatus") ) { return dispatchHTTPStatus_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"nme_curl_initialize") ) { return nme_curl_initialize; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"nme_curl_get_cookies") ) { return nme_curl_get_cookies; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"nme_curl_update_loader") ) { return nme_curl_update_loader; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"nme_curl_process_loaders") ) { return nme_curl_process_loaders; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"nme_curl_get_error_message") ) { return nme_curl_get_error_message; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic URLLoader_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { state=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"urlInit") ) { urlInit=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"urlError") ) { urlError=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"nmeHandle") ) { nmeHandle=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"urlInvalid") ) { urlInvalid=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"urlLoading") ) { urlLoading=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { bytesTotal=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dataFormat") ) { dataFormat=inValue.Cast< ::neash::net::URLLoaderDataFormat >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"urlComplete") ) { urlComplete=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { bytesLoaded=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"activeLoaders") ) { activeLoaders=inValue.Cast< ::List >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nmeOnComplete") ) { nmeOnComplete=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"nme_curl_create") ) { nme_curl_create=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"nme_curl_get_code") ) { nme_curl_get_code=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_curl_get_data") ) { nme_curl_get_data=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"nme_curl_initialize") ) { nme_curl_initialize=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"nme_curl_get_cookies") ) { nme_curl_get_cookies=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"nme_curl_update_loader") ) { nme_curl_update_loader=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"nme_curl_process_loaders") ) { nme_curl_process_loaders=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"nme_curl_get_error_message") ) { nme_curl_get_error_message=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void URLLoader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("bytesLoaded"));
	outFields->push(HX_CSTRING("bytesTotal"));
	outFields->push(HX_CSTRING("data"));
	outFields->push(HX_CSTRING("dataFormat"));
	outFields->push(HX_CSTRING("nmeHandle"));
	outFields->push(HX_CSTRING("state"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("activeLoaders"),
	HX_CSTRING("urlInvalid"),
	HX_CSTRING("urlInit"),
	HX_CSTRING("urlLoading"),
	HX_CSTRING("urlComplete"),
	HX_CSTRING("urlError"),
	HX_CSTRING("hasActive"),
	HX_CSTRING("initialize"),
	HX_CSTRING("nmeLoadPending"),
	HX_CSTRING("nmePollData"),
	HX_CSTRING("nme_curl_create"),
	HX_CSTRING("nme_curl_process_loaders"),
	HX_CSTRING("nme_curl_update_loader"),
	HX_CSTRING("nme_curl_get_code"),
	HX_CSTRING("nme_curl_get_error_message"),
	HX_CSTRING("nme_curl_get_data"),
	HX_CSTRING("nme_curl_get_cookies"),
	HX_CSTRING("nme_curl_initialize"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("bytesLoaded"),
	HX_CSTRING("bytesTotal"),
	HX_CSTRING("data"),
	HX_CSTRING("dataFormat"),
	HX_CSTRING("nmeHandle"),
	HX_CSTRING("state"),
	HX_CSTRING("nmeOnComplete"),
	HX_CSTRING("close"),
	HX_CSTRING("getCookies"),
	HX_CSTRING("load"),
	HX_CSTRING("nmeDataComplete"),
	HX_CSTRING("onError"),
	HX_CSTRING("dispatchHTTPStatus"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(URLLoader_obj::activeLoaders,"activeLoaders");
	HX_MARK_MEMBER_NAME(URLLoader_obj::urlInvalid,"urlInvalid");
	HX_MARK_MEMBER_NAME(URLLoader_obj::urlInit,"urlInit");
	HX_MARK_MEMBER_NAME(URLLoader_obj::urlLoading,"urlLoading");
	HX_MARK_MEMBER_NAME(URLLoader_obj::urlComplete,"urlComplete");
	HX_MARK_MEMBER_NAME(URLLoader_obj::urlError,"urlError");
	HX_MARK_MEMBER_NAME(URLLoader_obj::nme_curl_create,"nme_curl_create");
	HX_MARK_MEMBER_NAME(URLLoader_obj::nme_curl_process_loaders,"nme_curl_process_loaders");
	HX_MARK_MEMBER_NAME(URLLoader_obj::nme_curl_update_loader,"nme_curl_update_loader");
	HX_MARK_MEMBER_NAME(URLLoader_obj::nme_curl_get_code,"nme_curl_get_code");
	HX_MARK_MEMBER_NAME(URLLoader_obj::nme_curl_get_error_message,"nme_curl_get_error_message");
	HX_MARK_MEMBER_NAME(URLLoader_obj::nme_curl_get_data,"nme_curl_get_data");
	HX_MARK_MEMBER_NAME(URLLoader_obj::nme_curl_get_cookies,"nme_curl_get_cookies");
	HX_MARK_MEMBER_NAME(URLLoader_obj::nme_curl_initialize,"nme_curl_initialize");
};

Class URLLoader_obj::__mClass;

void URLLoader_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("neash.net.URLLoader"), hx::TCanCast< URLLoader_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void URLLoader_obj::__boot()
{
	hx::Static(activeLoaders) = ::List_obj::__new();
	hx::Static(urlInvalid) = (int)0;
	hx::Static(urlInit) = (int)1;
	hx::Static(urlLoading) = (int)2;
	hx::Static(urlComplete) = (int)3;
	hx::Static(urlError) = (int)4;
	hx::Static(nme_curl_create) = ::neash::Loader_obj::load(HX_CSTRING("nme_curl_create"),(int)1);
	hx::Static(nme_curl_process_loaders) = ::neash::Loader_obj::load(HX_CSTRING("nme_curl_process_loaders"),(int)0);
	hx::Static(nme_curl_update_loader) = ::neash::Loader_obj::load(HX_CSTRING("nme_curl_update_loader"),(int)2);
	hx::Static(nme_curl_get_code) = ::neash::Loader_obj::load(HX_CSTRING("nme_curl_get_code"),(int)1);
	hx::Static(nme_curl_get_error_message) = ::neash::Loader_obj::load(HX_CSTRING("nme_curl_get_error_message"),(int)1);
	hx::Static(nme_curl_get_data) = ::neash::Loader_obj::load(HX_CSTRING("nme_curl_get_data"),(int)1);
	hx::Static(nme_curl_get_cookies) = ::neash::Loader_obj::load(HX_CSTRING("nme_curl_get_cookies"),(int)1);
	hx::Static(nme_curl_initialize) = ::neash::Loader_obj::load(HX_CSTRING("nme_curl_initialize"),(int)1);
}

} // end namespace neash
} // end namespace net
