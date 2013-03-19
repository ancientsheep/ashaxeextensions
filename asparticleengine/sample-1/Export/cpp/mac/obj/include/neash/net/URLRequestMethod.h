#ifndef INCLUDED_neash_net_URLRequestMethod
#define INCLUDED_neash_net_URLRequestMethod

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(neash,net,URLRequestMethod)
namespace neash{
namespace net{


class URLRequestMethod_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef URLRequestMethod_obj OBJ_;
		URLRequestMethod_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< URLRequestMethod_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~URLRequestMethod_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("URLRequestMethod"); }

		static ::String DELETE; /* REM */ 
		static ::String GET; /* REM */ 
		static ::String HEAD; /* REM */ 
		static ::String OPTIONS; /* REM */ 
		static ::String POST; /* REM */ 
		static ::String PUT; /* REM */ 
};

} // end namespace neash
} // end namespace net

#endif /* INCLUDED_neash_net_URLRequestMethod */ 