#ifndef INCLUDED_com_ancientsheep_particles_ASParticleSystem
#define INCLUDED_com_ancientsheep_particles_ASParticleSystem

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <neash/display/Sprite.h>
HX_DECLARE_CLASS3(com,ancientsheep,particles,ASParticle)
HX_DECLARE_CLASS3(com,ancientsheep,particles,ASParticleSystem)
HX_DECLARE_CLASS3(com,ancientsheep,particles,NSDictionary)
HX_DECLARE_CLASS2(neash,display,Bitmap)
HX_DECLARE_CLASS2(neash,display,BitmapData)
HX_DECLARE_CLASS2(neash,display,DisplayObject)
HX_DECLARE_CLASS2(neash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(neash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(neash,display,InteractiveObject)
HX_DECLARE_CLASS2(neash,display,Sprite)
HX_DECLARE_CLASS2(neash,display,Tilesheet)
HX_DECLARE_CLASS2(neash,events,Event)
HX_DECLARE_CLASS2(neash,events,EventDispatcher)
HX_DECLARE_CLASS2(neash,events,IEventDispatcher)
HX_DECLARE_CLASS2(neash,geom,Point)
namespace com{
namespace ancientsheep{
namespace particles{


class ASParticleSystem_obj : public ::neash::display::Sprite_obj{
	public:
		typedef ::neash::display::Sprite_obj super;
		typedef ASParticleSystem_obj OBJ_;
		ASParticleSystem_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ASParticleSystem_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ASParticleSystem_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("ASParticleSystem"); }

		::neash::geom::Point position; /* REM */ 
		bool active; /* REM */ 
		double duration; /* REM */ 
		double elapsed; /* REM */ 
		::neash::geom::Point posVar; /* REM */ 
		double angle; /* REM */ 
		double angleVar; /* REM */ 
		int emitterMode; /* REM */ 
		Dynamic mode; /* REM */ 
		double startSize; /* REM */ 
		double startSizeVar; /* REM */ 
		double endSize; /* REM */ 
		double endSizeVar; /* REM */ 
		double life; /* REM */ 
		double lifeVar; /* REM */ 
		Dynamic startColor; /* REM */ 
		Dynamic startColorVar; /* REM */ 
		Dynamic endColor; /* REM */ 
		Dynamic endColorVar; /* REM */ 
		double startSpin; /* REM */ 
		double startSpinVar; /* REM */ 
		double endSpin; /* REM */ 
		double endSpinVar; /* REM */ 
		Array< ::com::ancientsheep::particles::ASParticle > particles; /* REM */ 
		int totalParticles; /* REM */ 
		int particleCount; /* REM */ 
		double emissionRate; /* REM */ 
		double emitCounter; /* REM */ 
		::neash::display::Bitmap texture_; /* REM */ 
		int positionType_; /* REM */ 
		int particleIdx; /* REM */ 
		Dynamic updateParticleImp; /* REM */ 
		Dynamic updateParticleSel; /* REM */ 
		::String assetsPath; /* REM */ 
		int lastTime; /* REM */ 
		::neash::display::Tilesheet tilesheet; /* REM */ 
		::neash::display::BitmapData particleBMD; /* REM */ 
		Array< double > drawList; /* REM */ 
		bool addBlendMode; /* REM */ 
		::neash::geom::Point gravity; /* REM */ 
		double speed; /* REM */ 
		double speedVar; /* REM */ 
		double tangentialAccel; /* REM */ 
		double tangentialAccelVar; /* REM */ 
		double radialAccel; /* REM */ 
		double radialAccelVar; /* REM */ 
		double startRadius; /* REM */ 
		double startRadiusVar; /* REM */ 
		double endRadius; /* REM */ 
		double endRadiusVar; /* REM */ 
		double rotatePerSecond; /* REM */ 
		double rotatePerSecondVar; /* REM */ 
		::neash::display::Bitmap texture; /* REM */ 
		Dynamic blendFunc; /* REM */ 
		bool blendAdditive; /* REM */ 
		int positionType; /* REM */ 
		bool autoRemoveOnFinish; /* REM */ 
		virtual ::com::ancientsheep::particles::ASParticleSystem initWithFile( ::String plistFile,::String pAssets);
		Dynamic initWithFile_dyn();

		virtual ::com::ancientsheep::particles::ASParticleSystem initWithDictionary( ::com::ancientsheep::particles::NSDictionary dictionary);
		Dynamic initWithDictionary_dyn();

		virtual ::com::ancientsheep::particles::ASParticleSystem initWithTotalParticles( int numberOfParticles);
		Dynamic initWithTotalParticles_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual bool addParticle( );
		Dynamic addParticle_dyn();

		virtual Void initParticle( ::com::ancientsheep::particles::ASParticle particle);
		Dynamic initParticle_dyn();

		virtual Void startSystem( );
		Dynamic startSystem_dyn();

		virtual Void updateSystem( ::neash::events::Event e);
		Dynamic updateSystem_dyn();

		virtual Void draw( );
		Dynamic draw_dyn();

		virtual Void stopSystem( );
		Dynamic stopSystem_dyn();

		virtual Void resetSystem( );
		Dynamic resetSystem_dyn();

		virtual bool isFull( );
		Dynamic isFull_dyn();

		virtual Void update( double dt);
		Dynamic update_dyn();

		virtual Void updateQuadWithParticle( ::com::ancientsheep::particles::ASParticle particle,::neash::geom::Point pos);
		Dynamic updateQuadWithParticle_dyn();

		virtual Void postStep( );
		Dynamic postStep_dyn();

		virtual ::neash::display::Bitmap set_texture( ::neash::display::Bitmap texture);
		Dynamic set_texture_dyn();

		virtual ::neash::display::Bitmap get_texture( );
		Dynamic get_texture_dyn();

		virtual bool set_blendAdditive( bool additive);
		Dynamic set_blendAdditive_dyn();

		virtual bool get_blendAdditive( );
		Dynamic get_blendAdditive_dyn();

		virtual double set_tangentialAccel( double t);
		Dynamic set_tangentialAccel_dyn();

		virtual double get_tangentialAccel( );
		Dynamic get_tangentialAccel_dyn();

		virtual double set_tangentialAccelVar( double t);
		Dynamic set_tangentialAccelVar_dyn();

		virtual double get_tangentialAccelVar( );
		Dynamic get_tangentialAccelVar_dyn();

		virtual double set_radialAccel( double t);
		Dynamic set_radialAccel_dyn();

		virtual double get_radialAccel( );
		Dynamic get_radialAccel_dyn();

		virtual double set_radialAccelVar( double t);
		Dynamic set_radialAccelVar_dyn();

		virtual double get_radialAccelVar( );
		Dynamic get_radialAccelVar_dyn();

		virtual ::neash::geom::Point set_gravity( ::neash::geom::Point g);
		Dynamic set_gravity_dyn();

		virtual ::neash::geom::Point get_gravity( );
		Dynamic get_gravity_dyn();

		virtual double set_speed( double speed);
		Dynamic set_speed_dyn();

		virtual double get_speed( );
		Dynamic get_speed_dyn();

		virtual double set_speedVar( double speedVar);
		Dynamic set_speedVar_dyn();

		virtual double get_speedVar( );
		Dynamic get_speedVar_dyn();

		virtual double set_startRadius( double startRadius);
		Dynamic set_startRadius_dyn();

		virtual double get_startRadius( );
		Dynamic get_startRadius_dyn();

		virtual double set_startRadiusVar( double startRadiusVar);
		Dynamic set_startRadiusVar_dyn();

		virtual double get_startRadiusVar( );
		Dynamic get_startRadiusVar_dyn();

		virtual double set_endRadius( double endRadius);
		Dynamic set_endRadius_dyn();

		virtual double get_endRadius( );
		Dynamic get_endRadius_dyn();

		virtual double set_endRadiusVar( double endRadiusVar);
		Dynamic set_endRadiusVar_dyn();

		virtual double get_endRadiusVar( );
		Dynamic get_endRadiusVar_dyn();

		virtual double set_rotatePerSecond( double degrees);
		Dynamic set_rotatePerSecond_dyn();

		virtual double get_rotatePerSecond( );
		Dynamic get_rotatePerSecond_dyn();

		virtual double set_rotatePerSecondVar( double degrees);
		Dynamic set_rotatePerSecondVar_dyn();

		virtual double get_rotatePerSecondVar( );
		Dynamic get_rotatePerSecondVar_dyn();

		static int kCCParticleModeGravity; /* REM */ 
		static int kCCParticleModeRadius; /* REM */ 
		static int kCCPositionTypeFree; /* REM */ 
		static int kCCPositionTypeRelative; /* REM */ 
		static int kCCPositionTypeGrouped; /* REM */ 
		static int kCCParticleDurationInfinity; /* REM */ 
		static int kCCParticleStartSizeEqualToEndSize; /* REM */ 
		static int kCCParticleStartRadiusEqualToEndRadius; /* REM */ 
		static ::com::ancientsheep::particles::ASParticleSystem particleWithFile( ::String plistFile,::String pAssets);
		static Dynamic particleWithFile_dyn();

};

} // end namespace com
} // end namespace ancientsheep
} // end namespace particles

#endif /* INCLUDED_com_ancientsheep_particles_ASParticleSystem */ 
