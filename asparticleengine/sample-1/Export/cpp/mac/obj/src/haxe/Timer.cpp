#include <hxcpp.h>

#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_neash_Loader
#include <neash/Loader.h>
#endif
namespace haxe{

Void Timer_obj::__construct(double time)
{
{
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/haxe/Timer.hx",115)
	this->mTime = time;
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/haxe/Timer.hx",116)
	::haxe::Timer_obj::sRunningTimers->push(hx::ObjectPtr<OBJ_>(this));
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/haxe/Timer.hx",117)
	this->mFireAt = (::haxe::Timer_obj::GetMS() + this->mTime);
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/haxe/Timer.hx",118)
	this->mRunning = true;
}
;
	return null();
}

Timer_obj::~Timer_obj() { }

Dynamic Timer_obj::__CreateEmpty() { return  new Timer_obj; }
hx::ObjectPtr< Timer_obj > Timer_obj::__new(double time)
{  hx::ObjectPtr< Timer_obj > result = new Timer_obj();
	result->__construct(time);
	return result;}

Dynamic Timer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Timer_obj > result = new Timer_obj();
	result->__construct(inArgs[0]);
	return result;}

HX_BEGIN_DEFAULT_FUNC(__default_run,Timer_obj)
Void run(){
{
		HX_SOURCE_PUSH("Timer_obj::run")
	}
return null();
}
HX_END_LOCAL_FUNC0((void))
HX_END_DEFAULT_FUNC

Void Timer_obj::stop( ){
{
		HX_SOURCE_PUSH("Timer_obj::stop")
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/haxe/Timer.hx",139)
		if ((this->mRunning)){
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/haxe/Timer.hx",143)
			this->mRunning = false;
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/haxe/Timer.hx",144)
			::haxe::Timer_obj::sRunningTimers->remove(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,stop,(void))

Void Timer_obj::nmeCheck( double inTime){
{
		HX_SOURCE_PUSH("Timer_obj::nmeCheck")
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/haxe/Timer.hx",181)
		if (((inTime >= this->mFireAt))){
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/haxe/Timer.hx",185)
			hx::AddEq(this->mFireAt,this->mTime);
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/haxe/Timer.hx",186)
			this->run();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Timer_obj,nmeCheck,(void))

Array< ::haxe::Timer > Timer_obj::sRunningTimers;

Dynamic Timer_obj::measure( Dynamic f,Dynamic pos){
	HX_SOURCE_PUSH("Timer_obj::measure")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/haxe/Timer.hx",124)
	double t0 = ::haxe::Timer_obj::stamp();
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/haxe/Timer.hx",125)
	Dynamic r = f();
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/haxe/Timer.hx",126)
	::haxe::Log_obj::trace(((::haxe::Timer_obj::stamp() - t0) + HX_CSTRING("s")),pos);
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/haxe/Timer.hx",127)
	return r;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Timer_obj,measure,return )

double Timer_obj::nmeNextWake( double limit){
	HX_SOURCE_PUSH("Timer_obj::nmeNextWake")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/haxe/Timer.hx",156)
	double now = (::haxe::Timer_obj::nme_time_stamp() * 1000.0);
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/haxe/Timer.hx",158)
	{
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/haxe/Timer.hx",158)
		int _g = (int)0;
		Array< ::haxe::Timer > _g1 = ::haxe::Timer_obj::sRunningTimers;
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/haxe/Timer.hx",158)
		while(((_g < _g1->length))){
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/haxe/Timer.hx",158)
			::haxe::Timer timer = _g1->__get(_g);
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/haxe/Timer.hx",158)
			++(_g);
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/haxe/Timer.hx",160)
			double sleep = (timer->mFireAt - now);
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/haxe/Timer.hx",162)
			if (((sleep < limit))){
				HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/haxe/Timer.hx",164)
				limit = sleep;
				HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/haxe/Timer.hx",166)
				if (((limit < (int)0))){
					HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/haxe/Timer.hx",166)
					return (int)0;
				}
			}
		}
	}
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/haxe/Timer.hx",176)
	return (limit * 0.001);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Timer_obj,nmeNextWake,return )

Void Timer_obj::nmeCheckTimers( ){
{
		HX_SOURCE_PUSH("Timer_obj::nmeCheckTimers")
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/haxe/Timer.hx",198)
		double now = ::haxe::Timer_obj::GetMS();
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/haxe/Timer.hx",200)
		{
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/haxe/Timer.hx",200)
			int _g = (int)0;
			Array< ::haxe::Timer > _g1 = ::haxe::Timer_obj::sRunningTimers;
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/haxe/Timer.hx",200)
			while(((_g < _g1->length))){
				HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/haxe/Timer.hx",200)
				::haxe::Timer timer = _g1->__get(_g);
				HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/haxe/Timer.hx",200)
				++(_g);
				HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/haxe/Timer.hx",202)
				timer->nmeCheck(now);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,nmeCheckTimers,(void))

double Timer_obj::GetMS( ){
	HX_SOURCE_PUSH("Timer_obj::GetMS")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/haxe/Timer.hx",209)
	return (::haxe::Timer_obj::stamp() * 1000.0);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,GetMS,return )

::haxe::Timer Timer_obj::delay( Dynamic f,int time){
	HX_SOURCE_PUSH("Timer_obj::delay")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/haxe/Timer.hx",217)
	Dynamic f1 = Dynamic( Array_obj<Dynamic>::__new().Add(f));
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/haxe/Timer.hx",219)
	Array< ::haxe::Timer > t = Array_obj< ::haxe::Timer >::__new().Add(::haxe::Timer_obj::__new(time));

	HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,Array< ::haxe::Timer >,t,Dynamic,f1)
	Void run(){
{
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/haxe/Timer.hx",222)
			t->__get((int)0)->stop();
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/haxe/Timer.hx",223)
			f1->__GetItem((int)0)().Cast< Void >();
		}
		return null();
	}
	HX_END_LOCAL_FUNC0((void))

	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/haxe/Timer.hx",221)
	t->__get((int)0)->run =  Dynamic(new _Function_1_1(t,f1));
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/haxe/Timer.hx",226)
	return t->__get((int)0);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Timer_obj,delay,return )

double Timer_obj::stamp( ){
	HX_SOURCE_PUSH("Timer_obj::stamp")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/haxe/Timer.hx",231)
	return ::haxe::Timer_obj::nme_time_stamp();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,stamp,return )

Dynamic Timer_obj::nme_time_stamp;


Timer_obj::Timer_obj()
{
	run = new __default_run(this);
}

void Timer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Timer);
	HX_MARK_MEMBER_NAME(mTime,"mTime");
	HX_MARK_MEMBER_NAME(mFireAt,"mFireAt");
	HX_MARK_MEMBER_NAME(mRunning,"mRunning");
	HX_MARK_MEMBER_NAME(run,"run");
	HX_MARK_END_CLASS();
}

Dynamic Timer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return run; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"GetMS") ) { return GetMS_dyn(); }
		if (HX_FIELD_EQ(inName,"delay") ) { return delay_dyn(); }
		if (HX_FIELD_EQ(inName,"stamp") ) { return stamp_dyn(); }
		if (HX_FIELD_EQ(inName,"mTime") ) { return mTime; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"measure") ) { return measure_dyn(); }
		if (HX_FIELD_EQ(inName,"mFireAt") ) { return mFireAt; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mRunning") ) { return mRunning; }
		if (HX_FIELD_EQ(inName,"nmeCheck") ) { return nmeCheck_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"nmeNextWake") ) { return nmeNextWake_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"sRunningTimers") ) { return sRunningTimers; }
		if (HX_FIELD_EQ(inName,"nmeCheckTimers") ) { return nmeCheckTimers_dyn(); }
		if (HX_FIELD_EQ(inName,"nme_time_stamp") ) { return nme_time_stamp; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Timer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { run=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"mTime") ) { mTime=inValue.Cast< double >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"mFireAt") ) { mFireAt=inValue.Cast< double >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mRunning") ) { mRunning=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"sRunningTimers") ) { sRunningTimers=inValue.Cast< Array< ::haxe::Timer > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_time_stamp") ) { nme_time_stamp=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Timer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("mTime"));
	outFields->push(HX_CSTRING("mFireAt"));
	outFields->push(HX_CSTRING("mRunning"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("sRunningTimers"),
	HX_CSTRING("measure"),
	HX_CSTRING("nmeNextWake"),
	HX_CSTRING("nmeCheckTimers"),
	HX_CSTRING("GetMS"),
	HX_CSTRING("delay"),
	HX_CSTRING("stamp"),
	HX_CSTRING("nme_time_stamp"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("mTime"),
	HX_CSTRING("mFireAt"),
	HX_CSTRING("mRunning"),
	HX_CSTRING("run"),
	HX_CSTRING("stop"),
	HX_CSTRING("nmeCheck"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Timer_obj::sRunningTimers,"sRunningTimers");
	HX_MARK_MEMBER_NAME(Timer_obj::nme_time_stamp,"nme_time_stamp");
};

Class Timer_obj::__mClass;

void Timer_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.Timer"), hx::TCanCast< Timer_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Timer_obj::__boot()
{
	hx::Static(sRunningTimers) = Array_obj< ::haxe::Timer >::__new();
	hx::Static(nme_time_stamp) = ::neash::Loader_obj::load(HX_CSTRING("nme_time_stamp"),(int)0);
}

} // end namespace haxe
