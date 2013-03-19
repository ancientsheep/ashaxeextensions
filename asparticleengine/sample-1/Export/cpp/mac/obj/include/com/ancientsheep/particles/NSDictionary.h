#ifndef INCLUDED_com_ancientsheep_particles_NSDictionary
#define INCLUDED_com_ancientsheep_particles_NSDictionary

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Hash)
HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS3(com,ancientsheep,particles,NSDictionary)
namespace com{
namespace ancientsheep{
namespace particles{


class NSDictionary_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef NSDictionary_obj OBJ_;
		NSDictionary_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< NSDictionary_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~NSDictionary_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("NSDictionary"); }

		::Hash hash_; /* REM */ 
		::Hash data_; /* REM */ 
		int count; /* REM */ 
		virtual Void loadContentsOfFile( ::String path);
		Dynamic loadContentsOfFile_dyn();

		virtual Void release( );
		Dynamic release_dyn();

		virtual Void parse( ::Xml xmlPlist);
		Dynamic parse_dyn();

		virtual ::Hash parseDictionary( ::Xml xmlDict);
		Dynamic parseDictionary_dyn();

		virtual ::Hash parseArray( ::Xml dictArr);
		Dynamic parseArray_dyn();

		virtual int getLength( );
		Dynamic getLength_dyn();

		virtual Dynamic valueForKey( ::String key);
		Dynamic valueForKey_dyn();

		virtual Dynamic objectForKey( ::String key);
		Dynamic objectForKey_dyn();

		virtual Array< ::String > allKeys( );
		Dynamic allKeys_dyn();

		virtual Dynamic keyEnumerator( );
		Dynamic keyEnumerator_dyn();

		virtual Dynamic iterator( );
		Dynamic iterator_dyn();

		virtual Array< ::String > allKeysForObject( Dynamic anObject);
		Dynamic allKeysForObject_dyn();

		virtual Dynamic allValues( );
		Dynamic allValues_dyn();

		virtual Dynamic objectEnumerator( );
		Dynamic objectEnumerator_dyn();

		virtual bool isEqualToDictionary( ::com::ancientsheep::particles::NSDictionary otherDictionary);
		Dynamic isEqualToDictionary_dyn();

		virtual Void setValue( Dynamic value,::String key);
		Dynamic setValue_dyn();

		virtual Void setObject( Dynamic value,::String key);
		Dynamic setObject_dyn();

		virtual Void removeObjectForKey( ::String key);
		Dynamic removeObjectForKey_dyn();

		virtual Void removeObjectsForKeys( Array< ::String > keys);
		Dynamic removeObjectsForKeys_dyn();

		virtual Void removeAllObjects( );
		Dynamic removeAllObjects_dyn();

		virtual Void logAll( );
		Dynamic logAll_dyn();

		static ::com::ancientsheep::particles::NSDictionary dictionary( );
		static Dynamic dictionary_dyn();

		static ::com::ancientsheep::particles::NSDictionary dictionaryWithContentsOfFile( ::String path);
		static Dynamic dictionaryWithContentsOfFile_dyn();

		static ::com::ancientsheep::particles::NSDictionary dictionaryWithDictionary( ::com::ancientsheep::particles::NSDictionary dic);
		static Dynamic dictionaryWithDictionary_dyn();

		static ::com::ancientsheep::particles::NSDictionary dictionaryWithObject( Dynamic obj,::String key);
		static Dynamic dictionaryWithObject_dyn();

		static ::com::ancientsheep::particles::NSDictionary dictionaryWithObjects( Dynamic obj,Array< ::String > key);
		static Dynamic dictionaryWithObjects_dyn();

};

} // end namespace com
} // end namespace ancientsheep
} // end namespace particles

#endif /* INCLUDED_com_ancientsheep_particles_NSDictionary */ 
