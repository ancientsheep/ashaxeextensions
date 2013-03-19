#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_neash_Loader
#include <neash/Loader.h>
#endif
#ifndef INCLUDED_neash_errors_Error
#include <neash/errors/Error.h>
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
#ifndef INCLUDED_neash_events_IEventDispatcher
#include <neash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_neash_events_IOErrorEvent
#include <neash/events/IOErrorEvent.h>
#endif
#ifndef INCLUDED_neash_events_SampleDataEvent
#include <neash/events/SampleDataEvent.h>
#endif
#ifndef INCLUDED_neash_events_TextEvent
#include <neash/events/TextEvent.h>
#endif
#ifndef INCLUDED_neash_media_ID3Info
#include <neash/media/ID3Info.h>
#endif
#ifndef INCLUDED_neash_media_Sound
#include <neash/media/Sound.h>
#endif
#ifndef INCLUDED_neash_media_SoundChannel
#include <neash/media/SoundChannel.h>
#endif
#ifndef INCLUDED_neash_media_SoundLoaderContext
#include <neash/media/SoundLoaderContext.h>
#endif
#ifndef INCLUDED_neash_media_SoundTransform
#include <neash/media/SoundTransform.h>
#endif
#ifndef INCLUDED_neash_net_URLRequest
#include <neash/net/URLRequest.h>
#endif
#ifndef INCLUDED_neash_utils_ByteArray
#include <neash/utils/ByteArray.h>
#endif
#ifndef INCLUDED_neash_utils_IDataInput
#include <neash/utils/IDataInput.h>
#endif
namespace neash{
namespace media{

Void Sound_obj::__construct(::neash::net::URLRequest stream,::neash::media::SoundLoaderContext context,hx::Null< bool >  __o_forcePlayAsMusic)
{
bool forcePlayAsMusic = __o_forcePlayAsMusic.Default(false);
{
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",32)
	super::__construct(null());
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",33)
	this->bytesLoaded = this->bytesTotal = (int)0;
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",34)
	this->nmeLoading = false;
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",35)
	this->nmeDynamicSound = false;
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",36)
	if (((stream != null()))){
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",37)
		this->load(stream,context,forcePlayAsMusic);
	}
}
;
	return null();
}

Sound_obj::~Sound_obj() { }

Dynamic Sound_obj::__CreateEmpty() { return  new Sound_obj; }
hx::ObjectPtr< Sound_obj > Sound_obj::__new(::neash::net::URLRequest stream,::neash::media::SoundLoaderContext context,hx::Null< bool >  __o_forcePlayAsMusic)
{  hx::ObjectPtr< Sound_obj > result = new Sound_obj();
	result->__construct(stream,context,__o_forcePlayAsMusic);
	return result;}

Dynamic Sound_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Sound_obj > result = new Sound_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void Sound_obj::addEventListener( ::String type,Dynamic listener,hx::Null< bool >  __o_useCapture,hx::Null< int >  __o_priority,hx::Null< bool >  __o_useWeakReference){
bool useCapture = __o_useCapture.Default(false);
int priority = __o_priority.Default(0);
bool useWeakReference = __o_useWeakReference.Default(false);
	HX_SOURCE_PUSH("Sound_obj::addEventListener");
{
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",42)
		this->super::addEventListener(type,listener,useCapture,priority,useWeakReference);
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",43)
		if (((type == ::neash::events::SampleDataEvent_obj::SAMPLE_DATA))){
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",45)
			if (((this->nmeHandle != null()))){
				HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",46)
				hx::Throw (HX_CSTRING("Can't use dynamic sound once file loaded"));
			}
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",47)
			this->nmeDynamicSound = true;
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",48)
			this->nmeLoading = false;
		}
	}
return null();
}


Void Sound_obj::close( ){
{
		HX_SOURCE_PUSH("Sound_obj::close")
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",56)
		if (((this->nmeHandle != null()))){
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",57)
			::neash::media::Sound_obj::nme_sound_close(this->nmeHandle);
		}
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",58)
		this->nmeHandle = (int)0;
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",59)
		this->nmeLoading = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,close,(void))

Void Sound_obj::load( ::neash::net::URLRequest stream,::neash::media::SoundLoaderContext context,hx::Null< bool >  __o_forcePlayAsMusic){
bool forcePlayAsMusic = __o_forcePlayAsMusic.Default(false);
	HX_SOURCE_PUSH("Sound_obj::load");
{
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",65)
		this->bytesLoaded = this->bytesTotal = (int)0;
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",66)
		this->nmeHandle = ::neash::media::Sound_obj::nme_sound_from_file(stream->url,forcePlayAsMusic);
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",67)
		if (((this->nmeHandle == null()))){
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",68)
			hx::Throw ((HX_CSTRING("Could not load:") + stream->url));
		}
		else{
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",73)
			this->url = stream->url;
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",74)
			this->nmeLoading = true;
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",75)
			this->nmeLoading = false;
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",76)
			this->nmeCheckLoading();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Sound_obj,load,(void))

Void Sound_obj::loadCompressedDataFromByteArray( ::neash::utils::ByteArray bytes,int length,hx::Null< bool >  __o_forcePlayAsMusic){
bool forcePlayAsMusic = __o_forcePlayAsMusic.Default(false);
	HX_SOURCE_PUSH("Sound_obj::loadCompressedDataFromByteArray");
{
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",81)
		this->bytesLoaded = this->bytesTotal = length;
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",82)
		this->nmeHandle = ::neash::media::Sound_obj::nme_sound_from_data(bytes->b,length,forcePlayAsMusic);
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",83)
		if (((this->nmeHandle == null()))){
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",84)
			hx::Throw ((HX_CSTRING("Could not load buffer with length: ") + length));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Sound_obj,loadCompressedDataFromByteArray,(void))

Void Sound_obj::loadPCMFromByteArray( ::neash::utils::ByteArray Bytes,int samples,hx::Null< ::String >  __o_format,hx::Null< bool >  __o_stereo,hx::Null< double >  __o_sampleRate){
::String format = __o_format.Default(HX_CSTRING("float"));
bool stereo = __o_stereo.Default(true);
double sampleRate = __o_sampleRate.Default(44100.0);
	HX_SOURCE_PUSH("Sound_obj::loadPCMFromByteArray");
{
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",92)
		::neash::utils::ByteArray wav = ::neash::utils::ByteArray_obj::__new(null());
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",93)
		wav->nmeSetEndian(HX_CSTRING("littleEndian"));
		struct _Function_1_1{
			inline static int Block( ::String &format){
				{
					HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",95)
					::String _switch_1 = (format);
					if (  ( _switch_1==HX_CSTRING("float"))){
						HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",96)
						return (int)3;
					}
					else if (  ( _switch_1==HX_CSTRING("short"))){
						HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",97)
						return (int)1;
					}
					else  {
						HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",98)
						return hx::Throw (::neash::errors::Error_obj::__new((HX_CSTRING("Unsupported format ") + format),null()));
					}
;
;
				}
				return null();
			}
		};
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",95)
		int AudioFormat = _Function_1_1::Block(format);
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",100)
		int NumChannels = (  ((stereo)) ? int((int)2) : int((int)1) );
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",101)
		int SampleRate = ::Std_obj::_int(sampleRate);
		struct _Function_1_2{
			inline static int Block( ::String &format){
				{
					HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",102)
					::String _switch_2 = (format);
					if (  ( _switch_2==HX_CSTRING("float"))){
						HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",103)
						return (int)32;
					}
					else if (  ( _switch_2==HX_CSTRING("short"))){
						HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",104)
						return (int)16;
					}
					else  {
						HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",105)
						return hx::Throw (::neash::errors::Error_obj::__new((HX_CSTRING("Unsupported format ") + format),null()));
					}
;
;
				}
				return null();
			}
		};
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",102)
		int BitsPerSample = _Function_1_2::Block(format);
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",107)
		int ByteRate = ::Std_obj::_int((double(((SampleRate * NumChannels) * BitsPerSample)) / double((int)8)));
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",108)
		int BlockAlign = ::Std_obj::_int((double((NumChannels * BitsPerSample)) / double((int)8)));
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",109)
		int NumSamples = ::Std_obj::_int((double(Bytes->length) / double(BlockAlign)));
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",111)
		wav->writeUTFBytes(HX_CSTRING("RIFF"));
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",112)
		wav->writeInt(((int)36 + Bytes->length));
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",113)
		wav->writeUTFBytes(HX_CSTRING("WAVE"));
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",114)
		wav->writeUTFBytes(HX_CSTRING("fmt "));
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",115)
		wav->writeInt((int)16);
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",116)
		wav->writeShort(AudioFormat);
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",117)
		wav->writeShort(NumChannels);
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",118)
		wav->writeInt(SampleRate);
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",119)
		wav->writeInt(ByteRate);
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",120)
		wav->writeShort(BlockAlign);
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",121)
		wav->writeShort(BitsPerSample);
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",122)
		wav->writeUTFBytes(HX_CSTRING("data"));
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",123)
		wav->writeInt(Bytes->length);
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",124)
		wav->writeBytes(Bytes,(int)0,Bytes->length);
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",126)
		wav->position = (int)0;
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",127)
		this->loadCompressedDataFromByteArray(wav,wav->length,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Sound_obj,loadPCMFromByteArray,(void))

Void Sound_obj::nmeCheckLoading( ){
{
		HX_SOURCE_PUSH("Sound_obj::nmeCheckLoading")
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",131)
		if (((bool((bool(!(this->nmeDynamicSound)) && bool(this->nmeLoading))) && bool((this->nmeHandle != null()))))){
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",134)
			Dynamic status = ::neash::media::Sound_obj::nme_sound_get_status(this->nmeHandle);
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",135)
			if (((status == null()))){
				HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",136)
				hx::Throw (HX_CSTRING("Could not get sound status"));
			}
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",137)
			this->bytesLoaded = status->__Field(HX_CSTRING("bytesLoaded"),true);
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",138)
			this->bytesTotal = status->__Field(HX_CSTRING("bytesTotal"),true);
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",140)
			this->nmeLoading = (this->bytesLoaded < this->bytesTotal);
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",141)
			if (((status->__Field(HX_CSTRING("error"),true) != null()))){
				HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",142)
				hx::Throw (status->__Field(HX_CSTRING("error"),true));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,nmeCheckLoading,(void))

Void Sound_obj::nmeOnError( ::String msg){
{
		HX_SOURCE_PUSH("Sound_obj::nmeOnError")
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",151)
		this->dispatchEvent(::neash::events::IOErrorEvent_obj::__new(::neash::events::IOErrorEvent_obj::IO_ERROR,true,false,msg,null()));
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",152)
		this->nmeHandle = null();
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",153)
		this->nmeLoading = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Sound_obj,nmeOnError,(void))

::neash::media::SoundChannel Sound_obj::play( hx::Null< double >  __o_startTime,hx::Null< int >  __o_loops,::neash::media::SoundTransform sndTransform){
double startTime = __o_startTime.Default(0);
int loops = __o_loops.Default(0);
	HX_SOURCE_PUSH("Sound_obj::play");
{
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",159)
		this->nmeCheckLoading();
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",160)
		if ((this->nmeDynamicSound)){
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",162)
			::neash::events::SampleDataEvent request = ::neash::events::SampleDataEvent_obj::__new(::neash::events::SampleDataEvent_obj::SAMPLE_DATA,null(),null());
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",163)
			this->dispatchEvent(request);
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",164)
			if (((request->data->length > (int)0))){
				HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",165)
				this->nmeHandle = ::neash::media::Sound_obj::nme_sound_channel_create_dynamic(request->data,sndTransform);
			}
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",168)
			if (((this->nmeHandle == null()))){
				HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",169)
				return null();
			}
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",170)
			::neash::media::SoundChannel result = ::neash::media::SoundChannel_obj::createDynamic(this->nmeHandle,sndTransform,hx::ObjectPtr<OBJ_>(this));
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",171)
			this->nmeHandle = null();
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",172)
			return result;
		}
		else{
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",176)
			if (((bool((this->nmeHandle == null())) || bool(this->nmeLoading)))){
				HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",177)
				return null();
			}
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",178)
			return ::neash::media::SoundChannel_obj::__new(this->nmeHandle,startTime,loops,sndTransform);
		}
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",160)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Sound_obj,play,return )

::neash::media::ID3Info Sound_obj::nmeGetID3( ){
	HX_SOURCE_PUSH("Sound_obj::nmeGetID3")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",190)
	this->nmeCheckLoading();
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",191)
	if (((bool((this->nmeHandle == null())) || bool(this->nmeLoading)))){
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",192)
		return null();
	}
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",193)
	::neash::media::ID3Info id3 = ::neash::media::ID3Info_obj::__new();
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",194)
	::neash::media::Sound_obj::nme_sound_get_id3(this->nmeHandle,id3);
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",195)
	return id3;
}


HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,nmeGetID3,return )

bool Sound_obj::nmeGetIsBuffering( ){
	HX_SOURCE_PUSH("Sound_obj::nmeGetIsBuffering")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",201)
	this->nmeCheckLoading();
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",202)
	return (bool(this->nmeLoading) && bool((this->nmeHandle == null())));
}


HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,nmeGetIsBuffering,return )

double Sound_obj::nmeGetLength( ){
	HX_SOURCE_PUSH("Sound_obj::nmeGetLength")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",208)
	if (((bool((this->nmeHandle == null())) || bool(this->nmeLoading)))){
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",209)
		return (int)0;
	}
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/media/Sound.hx",210)
	return ::neash::media::Sound_obj::nme_sound_get_length(this->nmeHandle);
}


HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,nmeGetLength,return )

Dynamic Sound_obj::nme_sound_from_file;

Dynamic Sound_obj::nme_sound_from_data;

Dynamic Sound_obj::nme_sound_get_id3;

Dynamic Sound_obj::nme_sound_get_length;

Dynamic Sound_obj::nme_sound_close;

Dynamic Sound_obj::nme_sound_get_status;

Dynamic Sound_obj::nme_sound_channel_create_dynamic;


Sound_obj::Sound_obj()
{
}

void Sound_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Sound);
	HX_MARK_MEMBER_NAME(bytesLoaded,"bytesLoaded");
	HX_MARK_MEMBER_NAME(bytesTotal,"bytesTotal");
	HX_MARK_MEMBER_NAME(id3,"id3");
	HX_MARK_MEMBER_NAME(isBuffering,"isBuffering");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(url,"url");
	HX_MARK_MEMBER_NAME(nmeHandle,"nmeHandle");
	HX_MARK_MEMBER_NAME(nmeLoading,"nmeLoading");
	HX_MARK_MEMBER_NAME(nmeDynamicSound,"nmeDynamicSound");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

Dynamic Sound_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"id3") ) { return inCallProp ? nmeGetID3() : id3; }
		if (HX_FIELD_EQ(inName,"url") ) { return url; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return inCallProp ? nmeGetLength() : length; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"nmeHandle") ) { return nmeHandle; }
		if (HX_FIELD_EQ(inName,"nmeGetID3") ) { return nmeGetID3_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { return bytesTotal; }
		if (HX_FIELD_EQ(inName,"nmeLoading") ) { return nmeLoading; }
		if (HX_FIELD_EQ(inName,"nmeOnError") ) { return nmeOnError_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { return bytesLoaded; }
		if (HX_FIELD_EQ(inName,"isBuffering") ) { return inCallProp ? nmeGetIsBuffering() : isBuffering; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"nmeGetLength") ) { return nmeGetLength_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"nme_sound_close") ) { return nme_sound_close; }
		if (HX_FIELD_EQ(inName,"nmeDynamicSound") ) { return nmeDynamicSound; }
		if (HX_FIELD_EQ(inName,"nmeCheckLoading") ) { return nmeCheckLoading_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"addEventListener") ) { return addEventListener_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"nme_sound_get_id3") ) { return nme_sound_get_id3; }
		if (HX_FIELD_EQ(inName,"nmeGetIsBuffering") ) { return nmeGetIsBuffering_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"nme_sound_from_file") ) { return nme_sound_from_file; }
		if (HX_FIELD_EQ(inName,"nme_sound_from_data") ) { return nme_sound_from_data; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"nme_sound_get_length") ) { return nme_sound_get_length; }
		if (HX_FIELD_EQ(inName,"nme_sound_get_status") ) { return nme_sound_get_status; }
		if (HX_FIELD_EQ(inName,"loadPCMFromByteArray") ) { return loadPCMFromByteArray_dyn(); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"loadCompressedDataFromByteArray") ) { return loadCompressedDataFromByteArray_dyn(); }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"nme_sound_channel_create_dynamic") ) { return nme_sound_channel_create_dynamic; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Sound_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"id3") ) { id3=inValue.Cast< ::neash::media::ID3Info >(); return inValue; }
		if (HX_FIELD_EQ(inName,"url") ) { url=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< double >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"nmeHandle") ) { nmeHandle=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { bytesTotal=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nmeLoading") ) { nmeLoading=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { bytesLoaded=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isBuffering") ) { isBuffering=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"nme_sound_close") ) { nme_sound_close=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nmeDynamicSound") ) { nmeDynamicSound=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"nme_sound_get_id3") ) { nme_sound_get_id3=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"nme_sound_from_file") ) { nme_sound_from_file=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_sound_from_data") ) { nme_sound_from_data=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"nme_sound_get_length") ) { nme_sound_get_length=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_sound_get_status") ) { nme_sound_get_status=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"nme_sound_channel_create_dynamic") ) { nme_sound_channel_create_dynamic=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Sound_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("bytesLoaded"));
	outFields->push(HX_CSTRING("bytesTotal"));
	outFields->push(HX_CSTRING("id3"));
	outFields->push(HX_CSTRING("isBuffering"));
	outFields->push(HX_CSTRING("length"));
	outFields->push(HX_CSTRING("url"));
	outFields->push(HX_CSTRING("nmeHandle"));
	outFields->push(HX_CSTRING("nmeLoading"));
	outFields->push(HX_CSTRING("nmeDynamicSound"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("nme_sound_from_file"),
	HX_CSTRING("nme_sound_from_data"),
	HX_CSTRING("nme_sound_get_id3"),
	HX_CSTRING("nme_sound_get_length"),
	HX_CSTRING("nme_sound_close"),
	HX_CSTRING("nme_sound_get_status"),
	HX_CSTRING("nme_sound_channel_create_dynamic"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("bytesLoaded"),
	HX_CSTRING("bytesTotal"),
	HX_CSTRING("id3"),
	HX_CSTRING("isBuffering"),
	HX_CSTRING("length"),
	HX_CSTRING("url"),
	HX_CSTRING("nmeHandle"),
	HX_CSTRING("nmeLoading"),
	HX_CSTRING("nmeDynamicSound"),
	HX_CSTRING("addEventListener"),
	HX_CSTRING("close"),
	HX_CSTRING("load"),
	HX_CSTRING("loadCompressedDataFromByteArray"),
	HX_CSTRING("loadPCMFromByteArray"),
	HX_CSTRING("nmeCheckLoading"),
	HX_CSTRING("nmeOnError"),
	HX_CSTRING("play"),
	HX_CSTRING("nmeGetID3"),
	HX_CSTRING("nmeGetIsBuffering"),
	HX_CSTRING("nmeGetLength"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Sound_obj::nme_sound_from_file,"nme_sound_from_file");
	HX_MARK_MEMBER_NAME(Sound_obj::nme_sound_from_data,"nme_sound_from_data");
	HX_MARK_MEMBER_NAME(Sound_obj::nme_sound_get_id3,"nme_sound_get_id3");
	HX_MARK_MEMBER_NAME(Sound_obj::nme_sound_get_length,"nme_sound_get_length");
	HX_MARK_MEMBER_NAME(Sound_obj::nme_sound_close,"nme_sound_close");
	HX_MARK_MEMBER_NAME(Sound_obj::nme_sound_get_status,"nme_sound_get_status");
	HX_MARK_MEMBER_NAME(Sound_obj::nme_sound_channel_create_dynamic,"nme_sound_channel_create_dynamic");
};

Class Sound_obj::__mClass;

void Sound_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("neash.media.Sound"), hx::TCanCast< Sound_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Sound_obj::__boot()
{
	hx::Static(nme_sound_from_file) = ::neash::Loader_obj::load(HX_CSTRING("nme_sound_from_file"),(int)2);
	hx::Static(nme_sound_from_data) = ::neash::Loader_obj::load(HX_CSTRING("nme_sound_from_data"),(int)3);
	hx::Static(nme_sound_get_id3) = ::neash::Loader_obj::load(HX_CSTRING("nme_sound_get_id3"),(int)2);
	hx::Static(nme_sound_get_length) = ::neash::Loader_obj::load(HX_CSTRING("nme_sound_get_length"),(int)1);
	hx::Static(nme_sound_close) = ::neash::Loader_obj::load(HX_CSTRING("nme_sound_close"),(int)1);
	hx::Static(nme_sound_get_status) = ::neash::Loader_obj::load(HX_CSTRING("nme_sound_get_status"),(int)1);
	hx::Static(nme_sound_channel_create_dynamic) = ::neash::Loader_obj::load(HX_CSTRING("nme_sound_channel_create_dynamic"),(int)2);
}

} // end namespace neash
} // end namespace media
