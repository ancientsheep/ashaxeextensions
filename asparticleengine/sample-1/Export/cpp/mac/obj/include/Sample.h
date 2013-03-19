#ifndef INCLUDED_Sample
#define INCLUDED_Sample

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <neash/display/Sprite.h>
HX_DECLARE_CLASS0(Sample)
HX_DECLARE_CLASS3(com,ancientsheep,particles,ASParticleSystem)
HX_DECLARE_CLASS2(neash,display,DisplayObject)
HX_DECLARE_CLASS2(neash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(neash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(neash,display,InteractiveObject)
HX_DECLARE_CLASS2(neash,display,Sprite)
HX_DECLARE_CLASS2(neash,events,Event)
HX_DECLARE_CLASS2(neash,events,EventDispatcher)
HX_DECLARE_CLASS2(neash,events,IEventDispatcher)
HX_DECLARE_CLASS2(neash,events,KeyboardEvent)
HX_DECLARE_CLASS2(neash,events,MouseEvent)


class Sample_obj : public ::neash::display::Sprite_obj{
	public:
		typedef ::neash::display::Sprite_obj super;
		typedef Sample_obj OBJ_;
		Sample_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Sample_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Sample_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("Sample"); }

		::com::ancientsheep::particles::ASParticleSystem particleSystem; /* REM */ 
		Array< ::String > systems; /* REM */ 
		int currIndex; /* REM */ 
		virtual Void init( );
		Dynamic init_dyn();

		virtual Void addToStage( ::neash::events::KeyboardEvent evt);
		Dynamic addToStage_dyn();

		virtual Void switchParticles( ::neash::events::KeyboardEvent key);
		Dynamic switchParticles_dyn();

		virtual Void mMove( ::neash::events::MouseEvent evt);
		Dynamic mMove_dyn();

		virtual Void firework( ::neash::events::MouseEvent evt);
		Dynamic firework_dyn();

		virtual Void stage_onActivate( ::neash::events::Event event);
		Dynamic stage_onActivate_dyn();

		virtual Void stage_onDeactivate( ::neash::events::Event event);
		Dynamic stage_onDeactivate_dyn();

		static Void main( );
		static Dynamic main_dyn();

};


#endif /* INCLUDED_Sample */ 
