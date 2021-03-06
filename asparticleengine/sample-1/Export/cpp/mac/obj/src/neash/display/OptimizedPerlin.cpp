#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_neash_display_BitmapData
#include <neash/display/BitmapData.h>
#endif
#ifndef INCLUDED_neash_display_IBitmapDrawable
#include <neash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_neash_display_OptimizedPerlin
#include <neash/display/OptimizedPerlin.h>
#endif
namespace neash{
namespace display{

Void OptimizedPerlin_obj::__construct(hx::Null< int >  __o_seed,hx::Null< int >  __o_octaves,hx::Null< double >  __o_falloff)
{
int seed = __o_seed.Default(123);
int octaves = __o_octaves.Default(4);
double falloff = __o_falloff.Default(0.5);
{
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",583)
	this->baseFactor = 0.015625;
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",584)
	this->seedOffset(seed);
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",585)
	this->octFreqPers(falloff);
}
;
	return null();
}

OptimizedPerlin_obj::~OptimizedPerlin_obj() { }

Dynamic OptimizedPerlin_obj::__CreateEmpty() { return  new OptimizedPerlin_obj; }
hx::ObjectPtr< OptimizedPerlin_obj > OptimizedPerlin_obj::__new(hx::Null< int >  __o_seed,hx::Null< int >  __o_octaves,hx::Null< double >  __o_falloff)
{  hx::ObjectPtr< OptimizedPerlin_obj > result = new OptimizedPerlin_obj();
	result->__construct(__o_seed,__o_octaves,__o_falloff);
	return result;}

Dynamic OptimizedPerlin_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OptimizedPerlin_obj > result = new OptimizedPerlin_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void OptimizedPerlin_obj::fill( ::neash::display::BitmapData bitmap,double _x,double _y,double _z,Dynamic _){
{
		HX_SOURCE_PUSH("OptimizedPerlin_obj::fill")
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",591)
		double baseX;
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",593)
		baseX = ((_x * this->baseFactor) + this->iXoffset);
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",594)
		_y = ((_y * this->baseFactor) + this->iYoffset);
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",595)
		_z = ((_z * this->baseFactor) + this->iZoffset);
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",597)
		int width = bitmap->nmeGetWidth();
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",598)
		int height = bitmap->nmeGetHeight();
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",600)
		Array< int > p = ::neash::display::OptimizedPerlin_obj::P;
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",601)
		int octaves = this->octaves;
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",602)
		Array< double > aOctFreq = this->aOctFreq;
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",603)
		Array< double > aOctPers = this->aOctPers;
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",605)
		{
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",605)
			int _g = (int)0;
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",605)
			while(((_g < height))){
				HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",605)
				int py = (_g)++;
				HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",607)
				_x = baseX;
				HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",609)
				{
					HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",609)
					int _g1 = (int)0;
					HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",609)
					while(((_g1 < width))){
						HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",609)
						int px = (_g1)++;
						HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",611)
						double s = 0.;
						HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",613)
						{
							HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",613)
							int _g2 = (int)0;
							HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",613)
							while(((_g2 < octaves))){
								HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",613)
								int i = (_g2)++;
								HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",615)
								double fFreq = aOctFreq->__get(i);
								HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",616)
								double fPers = aOctPers->__get(i);
								HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",618)
								double x = (_x * fFreq);
								HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",619)
								double y = (_y * fFreq);
								HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",620)
								double z = (_z * fFreq);
								HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",622)
								double xf = (x - hx::Mod(x,(int)1));
								HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",623)
								double yf = (y - hx::Mod(y,(int)1));
								HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",624)
								double zf = (z - hx::Mod(z,(int)1));
								HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",626)
								int X = (int(::Std_obj::_int(xf)) & int((int)255));
								HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",627)
								int Y = (int(::Std_obj::_int(yf)) & int((int)255));
								HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",628)
								int Z = (int(::Std_obj::_int(zf)) & int((int)255));
								HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",630)
								hx::SubEq(x,xf);
								HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",631)
								hx::SubEq(y,yf);
								HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",632)
								hx::SubEq(z,zf);
								HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",634)
								double u = (((x * x) * x) * (((x * (((x * (int)6) - (int)15))) + (int)10)));
								HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",635)
								double v = (((y * y) * y) * (((y * (((y * (int)6) - (int)15))) + (int)10)));
								HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",636)
								double w = (((z * z) * z) * (((z * (((z * (int)6) - (int)15))) + (int)10)));
								HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",638)
								int A = (p->__get(X) + Y);
								HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",639)
								int AA = (p->__get(A) + Z);
								HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",640)
								int AB = (p->__get((A + (int)1)) + Z);
								HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",641)
								int B = (p->__get((X + (int)1)) + Y);
								HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",642)
								int BA = (p->__get(B) + Z);
								HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",643)
								int BB = (p->__get((B + (int)1)) + Z);
								HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",645)
								double x1 = (x - (int)1);
								HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",646)
								double y1 = (y - (int)1);
								HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",647)
								double z1 = (z - (int)1);
								HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",649)
								int hash = (int(p->__get((BB + (int)1))) & int((int)15));
								struct _Function_7_1{
									inline static double Block( double &y1,double &x1,int &hash){
										{
											HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",650)
											return (  (((hash < (int)8))) ? double(x1) : double(y1) );
										}
										return null();
									}
								};
								struct _Function_7_2{
									inline static double Block( double &y1,double &x1,int &hash,double &z1){
										{
											HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",650)
											return (  (((hash < (int)4))) ? double(y1) : double((  (((hash == (int)12))) ? double(x1) : double(z1) )) );
										}
										return null();
									}
								};
								HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",650)
								double g1 = (((  (((((int(hash) & int((int)1))) == (int)0))) ? double(_Function_7_1::Block(y1,x1,hash)) : double((  (((hash < (int)8))) ? double(-(x1)) : double(-(y1)) )) )) + ((  (((((int(hash) & int((int)2))) == (int)0))) ? double(_Function_7_2::Block(y1,x1,hash,z1)) : double((  (((hash < (int)4))) ? double(-(y1)) : double((  (((hash == (int)14))) ? double(-(x1)) : double(-(z1)) )) )) )));
								HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",652)
								hash = (int(p->__get((AB + (int)1))) & int((int)15));
								struct _Function_7_3{
									inline static double Block( double &y1,int &hash,double &x){
										{
											HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",653)
											return (  (((hash < (int)8))) ? double(x) : double(y1) );
										}
										return null();
									}
								};
								struct _Function_7_4{
									inline static double Block( double &y1,int &hash,double &x,double &z1){
										{
											HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",653)
											return (  (((hash < (int)4))) ? double(y1) : double((  (((hash == (int)12))) ? double(x) : double(z1) )) );
										}
										return null();
									}
								};
								HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",653)
								double g2 = (((  (((((int(hash) & int((int)1))) == (int)0))) ? double(_Function_7_3::Block(y1,hash,x)) : double((  (((hash < (int)8))) ? double(-(x)) : double(-(y1)) )) )) + ((  (((((int(hash) & int((int)2))) == (int)0))) ? double(_Function_7_4::Block(y1,hash,x,z1)) : double((  (((hash < (int)4))) ? double(-(y1)) : double((  (((hash == (int)14))) ? double(-(x)) : double(-(z1)) )) )) )));
								HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",655)
								hash = (int(p->__get((BA + (int)1))) & int((int)15));
								struct _Function_7_5{
									inline static double Block( double &x1,double &y,int &hash){
										{
											HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",656)
											return (  (((hash < (int)8))) ? double(x1) : double(y) );
										}
										return null();
									}
								};
								struct _Function_7_6{
									inline static double Block( double &y,double &x1,int &hash,double &z1){
										{
											HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",656)
											return (  (((hash < (int)4))) ? double(y) : double((  (((hash == (int)12))) ? double(x1) : double(z1) )) );
										}
										return null();
									}
								};
								HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",656)
								double g3 = (((  (((((int(hash) & int((int)1))) == (int)0))) ? double(_Function_7_5::Block(x1,y,hash)) : double((  (((hash < (int)8))) ? double(-(x1)) : double(-(y)) )) )) + ((  (((((int(hash) & int((int)2))) == (int)0))) ? double(_Function_7_6::Block(y,x1,hash,z1)) : double((  (((hash < (int)4))) ? double(-(y)) : double((  (((hash == (int)14))) ? double(-(x1)) : double(-(z1)) )) )) )));
								HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",658)
								hash = (int(p->__get((AA + (int)1))) & int((int)15));
								struct _Function_7_7{
									inline static double Block( double &y,int &hash,double &x){
										{
											HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",659)
											return (  (((hash < (int)8))) ? double(x) : double(y) );
										}
										return null();
									}
								};
								struct _Function_7_8{
									inline static double Block( double &y,int &hash,double &x,double &z1){
										{
											HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",659)
											return (  (((hash < (int)4))) ? double(y) : double((  (((hash == (int)12))) ? double(x) : double(z1) )) );
										}
										return null();
									}
								};
								HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",659)
								double g4 = (((  (((((int(hash) & int((int)1))) == (int)0))) ? double(_Function_7_7::Block(y,hash,x)) : double((  (((hash < (int)8))) ? double(-(x)) : double(-(y)) )) )) + ((  (((((int(hash) & int((int)2))) == (int)0))) ? double(_Function_7_8::Block(y,hash,x,z1)) : double((  (((hash < (int)4))) ? double(-(y)) : double((  (((hash == (int)14))) ? double(-(x)) : double(-(z1)) )) )) )));
								HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",661)
								hash = (int(p->__get(BB)) & int((int)15));
								struct _Function_7_9{
									inline static double Block( double &y1,double &x1,int &hash){
										{
											HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",662)
											return (  (((hash < (int)8))) ? double(x1) : double(y1) );
										}
										return null();
									}
								};
								struct _Function_7_10{
									inline static double Block( double &y1,double &z,double &x1,int &hash){
										{
											HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",662)
											return (  (((hash < (int)4))) ? double(y1) : double((  (((hash == (int)12))) ? double(x1) : double(z) )) );
										}
										return null();
									}
								};
								HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",662)
								double g5 = (((  (((((int(hash) & int((int)1))) == (int)0))) ? double(_Function_7_9::Block(y1,x1,hash)) : double((  (((hash < (int)8))) ? double(-(x1)) : double(-(y1)) )) )) + ((  (((((int(hash) & int((int)2))) == (int)0))) ? double(_Function_7_10::Block(y1,z,x1,hash)) : double((  (((hash < (int)4))) ? double(-(y1)) : double((  (((hash == (int)14))) ? double(-(x1)) : double(-(z)) )) )) )));
								HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",664)
								hash = (int(p->__get(AB)) & int((int)15));
								struct _Function_7_11{
									inline static double Block( double &y1,int &hash,double &x){
										{
											HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",665)
											return (  (((hash < (int)8))) ? double(x) : double(y1) );
										}
										return null();
									}
								};
								struct _Function_7_12{
									inline static double Block( double &y1,double &z,int &hash,double &x){
										{
											HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",665)
											return (  (((hash < (int)4))) ? double(y1) : double((  (((hash == (int)12))) ? double(x) : double(z) )) );
										}
										return null();
									}
								};
								HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",665)
								double g6 = (((  (((((int(hash) & int((int)1))) == (int)0))) ? double(_Function_7_11::Block(y1,hash,x)) : double((  (((hash < (int)8))) ? double(-(x)) : double(-(y1)) )) )) + ((  (((((int(hash) & int((int)2))) == (int)0))) ? double(_Function_7_12::Block(y1,z,hash,x)) : double((  (((hash < (int)4))) ? double(-(y1)) : double((  (((hash == (int)14))) ? double(-(x)) : double(-(z)) )) )) )));
								HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",667)
								hash = (int(p->__get(BA)) & int((int)15));
								struct _Function_7_13{
									inline static double Block( double &x1,double &y,int &hash){
										{
											HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",668)
											return (  (((hash < (int)8))) ? double(x1) : double(y) );
										}
										return null();
									}
								};
								struct _Function_7_14{
									inline static double Block( double &z,double &y,double &x1,int &hash){
										{
											HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",668)
											return (  (((hash < (int)4))) ? double(y) : double((  (((hash == (int)12))) ? double(x1) : double(z) )) );
										}
										return null();
									}
								};
								HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",668)
								double g7 = (((  (((((int(hash) & int((int)1))) == (int)0))) ? double(_Function_7_13::Block(x1,y,hash)) : double((  (((hash < (int)8))) ? double(-(x1)) : double(-(y)) )) )) + ((  (((((int(hash) & int((int)2))) == (int)0))) ? double(_Function_7_14::Block(z,y,x1,hash)) : double((  (((hash < (int)4))) ? double(-(y)) : double((  (((hash == (int)14))) ? double(-(x1)) : double(-(z)) )) )) )));
								HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",670)
								hash = (int(p->__get(AA)) & int((int)15));
								struct _Function_7_15{
									inline static double Block( double &y,int &hash,double &x){
										{
											HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",671)
											return (  (((hash < (int)8))) ? double(x) : double(y) );
										}
										return null();
									}
								};
								struct _Function_7_16{
									inline static double Block( double &z,double &y,int &hash,double &x){
										{
											HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",671)
											return (  (((hash < (int)4))) ? double(y) : double((  (((hash == (int)12))) ? double(x) : double(z) )) );
										}
										return null();
									}
								};
								HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",671)
								double g8 = (((  (((((int(hash) & int((int)1))) == (int)0))) ? double(_Function_7_15::Block(y,hash,x)) : double((  (((hash < (int)8))) ? double(-(x)) : double(-(y)) )) )) + ((  (((((int(hash) & int((int)2))) == (int)0))) ? double(_Function_7_16::Block(z,y,hash,x)) : double((  (((hash < (int)4))) ? double(-(y)) : double((  (((hash == (int)14))) ? double(-(x)) : double(-(z)) )) )) )));
								HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",673)
								hx::AddEq(g2,(u * ((g1 - g2))));
								HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",674)
								hx::AddEq(g4,(u * ((g3 - g4))));
								HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",675)
								hx::AddEq(g6,(u * ((g5 - g6))));
								HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",676)
								hx::AddEq(g8,(u * ((g7 - g8))));
								HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",678)
								hx::AddEq(g4,(v * ((g2 - g4))));
								HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",679)
								hx::AddEq(g8,(v * ((g6 - g8))));
								HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",681)
								hx::AddEq(s,(((g8 + (w * ((g4 - g8))))) * fPers));
							}
						}
						HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",684)
						int color = ::Std_obj::_int(((((s * this->fPersMax) + (int)1)) * (int)128));
						HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",689)
						int pixel = (int((int((int((int)-16777216) | int((int(color) << int((int)16))))) | int((int(color) << int((int)8))))) | int(color));
						HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",692)
						bitmap->setPixel32(px,py,pixel);
						HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",694)
						hx::AddEq(_x,this->baseFactor);
					}
				}
				HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",697)
				hx::AddEq(_y,this->baseFactor);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(OptimizedPerlin_obj,fill,(void))

Void OptimizedPerlin_obj::octFreqPers( double fPersistence){
{
		HX_SOURCE_PUSH("OptimizedPerlin_obj::octFreqPers")
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",704)
		double fFreq;
		double fPers;
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",706)
		this->aOctFreq = Array_obj< double >::__new();
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",707)
		this->aOctPers = Array_obj< double >::__new();
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",708)
		this->fPersMax = (int)0;
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",710)
		{
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",710)
			int _g1 = (int)0;
			int _g = this->octaves;
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",710)
			while(((_g1 < _g))){
				HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",710)
				int i = (_g1)++;
				HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",711)
				fFreq = ::Math_obj::pow((int)2,i);
				HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",712)
				fPers = ::Math_obj::pow(fPersistence,i);
				HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",713)
				hx::AddEq(this->fPersMax,fPers);
				HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",714)
				this->aOctFreq->push(fFreq);
				HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",715)
				this->aOctPers->push(fPers);
			}
		}
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",718)
		this->fPersMax = (double((int)1) / double(this->fPersMax));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(OptimizedPerlin_obj,octFreqPers,(void))

Void OptimizedPerlin_obj::seedOffset( int iSeed){
{
		HX_SOURCE_PUSH("OptimizedPerlin_obj::seedOffset")
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",728)
		this->iXoffset = iSeed = ::Std_obj::_int(hx::Mod((iSeed * 16807.),(int)2147483647));
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",729)
		this->iYoffset = iSeed = ::Std_obj::_int(hx::Mod((iSeed * 16807.),(int)2147483647));
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",730)
		this->iZoffset = iSeed = ::Std_obj::_int(hx::Mod((iSeed * 16807.),(int)2147483647));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(OptimizedPerlin_obj,seedOffset,(void))

Array< int > OptimizedPerlin_obj::P;


OptimizedPerlin_obj::OptimizedPerlin_obj()
{
}

void OptimizedPerlin_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(OptimizedPerlin);
	HX_MARK_MEMBER_NAME(octaves,"octaves");
	HX_MARK_MEMBER_NAME(aOctFreq,"aOctFreq");
	HX_MARK_MEMBER_NAME(aOctPers,"aOctPers");
	HX_MARK_MEMBER_NAME(fPersMax,"fPersMax");
	HX_MARK_MEMBER_NAME(iXoffset,"iXoffset");
	HX_MARK_MEMBER_NAME(iYoffset,"iYoffset");
	HX_MARK_MEMBER_NAME(iZoffset,"iZoffset");
	HX_MARK_MEMBER_NAME(baseFactor,"baseFactor");
	HX_MARK_END_CLASS();
}

Dynamic OptimizedPerlin_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"P") ) { return P; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"fill") ) { return fill_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"octaves") ) { return octaves; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"aOctFreq") ) { return aOctFreq; }
		if (HX_FIELD_EQ(inName,"aOctPers") ) { return aOctPers; }
		if (HX_FIELD_EQ(inName,"fPersMax") ) { return fPersMax; }
		if (HX_FIELD_EQ(inName,"iXoffset") ) { return iXoffset; }
		if (HX_FIELD_EQ(inName,"iYoffset") ) { return iYoffset; }
		if (HX_FIELD_EQ(inName,"iZoffset") ) { return iZoffset; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"baseFactor") ) { return baseFactor; }
		if (HX_FIELD_EQ(inName,"seedOffset") ) { return seedOffset_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"octFreqPers") ) { return octFreqPers_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic OptimizedPerlin_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"P") ) { P=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"octaves") ) { octaves=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"aOctFreq") ) { aOctFreq=inValue.Cast< Array< double > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"aOctPers") ) { aOctPers=inValue.Cast< Array< double > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fPersMax") ) { fPersMax=inValue.Cast< double >(); return inValue; }
		if (HX_FIELD_EQ(inName,"iXoffset") ) { iXoffset=inValue.Cast< double >(); return inValue; }
		if (HX_FIELD_EQ(inName,"iYoffset") ) { iYoffset=inValue.Cast< double >(); return inValue; }
		if (HX_FIELD_EQ(inName,"iZoffset") ) { iZoffset=inValue.Cast< double >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"baseFactor") ) { baseFactor=inValue.Cast< double >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OptimizedPerlin_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("octaves"));
	outFields->push(HX_CSTRING("aOctFreq"));
	outFields->push(HX_CSTRING("aOctPers"));
	outFields->push(HX_CSTRING("fPersMax"));
	outFields->push(HX_CSTRING("iXoffset"));
	outFields->push(HX_CSTRING("iYoffset"));
	outFields->push(HX_CSTRING("iZoffset"));
	outFields->push(HX_CSTRING("baseFactor"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("P"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("octaves"),
	HX_CSTRING("aOctFreq"),
	HX_CSTRING("aOctPers"),
	HX_CSTRING("fPersMax"),
	HX_CSTRING("iXoffset"),
	HX_CSTRING("iYoffset"),
	HX_CSTRING("iZoffset"),
	HX_CSTRING("baseFactor"),
	HX_CSTRING("fill"),
	HX_CSTRING("octFreqPers"),
	HX_CSTRING("seedOffset"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OptimizedPerlin_obj::P,"P");
};

Class OptimizedPerlin_obj::__mClass;

void OptimizedPerlin_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("neash.display.OptimizedPerlin"), hx::TCanCast< OptimizedPerlin_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void OptimizedPerlin_obj::__boot()
{
	hx::Static(P) = Array_obj< int >::__new().Add((int)151).Add((int)160).Add((int)137).Add((int)91).Add((int)90).Add((int)15).Add((int)131).Add((int)13).Add((int)201).Add((int)95).Add((int)96).Add((int)53).Add((int)194).Add((int)233).Add((int)7).Add((int)225).Add((int)140).Add((int)36).Add((int)103).Add((int)30).Add((int)69).Add((int)142).Add((int)8).Add((int)99).Add((int)37).Add((int)240).Add((int)21).Add((int)10).Add((int)23).Add((int)190).Add((int)6).Add((int)148).Add((int)247).Add((int)120).Add((int)234).Add((int)75).Add((int)0).Add((int)26).Add((int)197).Add((int)62).Add((int)94).Add((int)252).Add((int)219).Add((int)203).Add((int)117).Add((int)35).Add((int)11).Add((int)32).Add((int)57).Add((int)177).Add((int)33).Add((int)88).Add((int)237).Add((int)149).Add((int)56).Add((int)87).Add((int)174).Add((int)20).Add((int)125).Add((int)136).Add((int)171).Add((int)168).Add((int)68).Add((int)175).Add((int)74).Add((int)165).Add((int)71).Add((int)134).Add((int)139).Add((int)48).Add((int)27).Add((int)166).Add((int)77).Add((int)146).Add((int)158).Add((int)231).Add((int)83).Add((int)111).Add((int)229).Add((int)122).Add((int)60).Add((int)211).Add((int)133).Add((int)230).Add((int)220).Add((int)105).Add((int)92).Add((int)41).Add((int)55).Add((int)46).Add((int)245).Add((int)40).Add((int)244).Add((int)102).Add((int)143).Add((int)54).Add((int)65).Add((int)25).Add((int)63).Add((int)161).Add((int)1).Add((int)216).Add((int)80).Add((int)73).Add((int)209).Add((int)76).Add((int)132).Add((int)187).Add((int)208).Add((int)89).Add((int)18).Add((int)169).Add((int)200).Add((int)196).Add((int)135).Add((int)130).Add((int)116).Add((int)188).Add((int)159).Add((int)86).Add((int)164).Add((int)100).Add((int)109).Add((int)198).Add((int)173).Add((int)186).Add((int)3).Add((int)64).Add((int)52).Add((int)217).Add((int)226).Add((int)250).Add((int)124).Add((int)123).Add((int)5).Add((int)202).Add((int)38).Add((int)147).Add((int)118).Add((int)126).Add((int)255).Add((int)82).Add((int)85).Add((int)212).Add((int)207).Add((int)206).Add((int)59).Add((int)227).Add((int)47).Add((int)16).Add((int)58).Add((int)17).Add((int)182).Add((int)189).Add((int)28).Add((int)42).Add((int)223).Add((int)183).Add((int)170).Add((int)213).Add((int)119).Add((int)248).Add((int)152).Add((int)2).Add((int)44).Add((int)154).Add((int)163).Add((int)70).Add((int)221).Add((int)153).Add((int)101).Add((int)155).Add((int)167).Add((int)43).Add((int)172).Add((int)9).Add((int)129).Add((int)22).Add((int)39).Add((int)253).Add((int)19).Add((int)98).Add((int)108).Add((int)110).Add((int)79).Add((int)113).Add((int)224).Add((int)232).Add((int)178).Add((int)185).Add((int)112).Add((int)104).Add((int)218).Add((int)246).Add((int)97).Add((int)228).Add((int)251).Add((int)34).Add((int)242).Add((int)193).Add((int)238).Add((int)210).Add((int)144).Add((int)12).Add((int)191).Add((int)179).Add((int)162).Add((int)241).Add((int)81).Add((int)51).Add((int)145).Add((int)235).Add((int)249).Add((int)14).Add((int)239).Add((int)107).Add((int)49).Add((int)192).Add((int)214).Add((int)31).Add((int)181).Add((int)199).Add((int)106).Add((int)157).Add((int)184).Add((int)84).Add((int)204).Add((int)176).Add((int)115).Add((int)121).Add((int)50).Add((int)45).Add((int)127).Add((int)4).Add((int)150).Add((int)254).Add((int)138).Add((int)236).Add((int)205).Add((int)93).Add((int)222).Add((int)114).Add((int)67).Add((int)29).Add((int)24).Add((int)72).Add((int)243).Add((int)141).Add((int)128).Add((int)195).Add((int)78).Add((int)66).Add((int)215).Add((int)61).Add((int)156).Add((int)180).Add((int)151).Add((int)160).Add((int)137).Add((int)91).Add((int)90).Add((int)15).Add((int)131).Add((int)13).Add((int)201).Add((int)95).Add((int)96).Add((int)53).Add((int)194).Add((int)233).Add((int)7).Add((int)225).Add((int)140).Add((int)36).Add((int)103).Add((int)30).Add((int)69).Add((int)142).Add((int)8).Add((int)99).Add((int)37).Add((int)240).Add((int)21).Add((int)10).Add((int)23).Add((int)190).Add((int)6).Add((int)148).Add((int)247).Add((int)120).Add((int)234).Add((int)75).Add((int)0).Add((int)26).Add((int)197).Add((int)62).Add((int)94).Add((int)252).Add((int)219).Add((int)203).Add((int)117).Add((int)35).Add((int)11).Add((int)32).Add((int)57).Add((int)177).Add((int)33).Add((int)88).Add((int)237).Add((int)149).Add((int)56).Add((int)87).Add((int)174).Add((int)20).Add((int)125).Add((int)136).Add((int)171).Add((int)168).Add((int)68).Add((int)175).Add((int)74).Add((int)165).Add((int)71).Add((int)134).Add((int)139).Add((int)48).Add((int)27).Add((int)166).Add((int)77).Add((int)146).Add((int)158).Add((int)231).Add((int)83).Add((int)111).Add((int)229).Add((int)122).Add((int)60).Add((int)211).Add((int)133).Add((int)230).Add((int)220).Add((int)105).Add((int)92).Add((int)41).Add((int)55).Add((int)46).Add((int)245).Add((int)40).Add((int)244).Add((int)102).Add((int)143).Add((int)54).Add((int)65).Add((int)25).Add((int)63).Add((int)161).Add((int)1).Add((int)216).Add((int)80).Add((int)73).Add((int)209).Add((int)76).Add((int)132).Add((int)187).Add((int)208).Add((int)89).Add((int)18).Add((int)169).Add((int)200).Add((int)196).Add((int)135).Add((int)130).Add((int)116).Add((int)188).Add((int)159).Add((int)86).Add((int)164).Add((int)100).Add((int)109).Add((int)198).Add((int)173).Add((int)186).Add((int)3).Add((int)64).Add((int)52).Add((int)217).Add((int)226).Add((int)250).Add((int)124).Add((int)123).Add((int)5).Add((int)202).Add((int)38).Add((int)147).Add((int)118).Add((int)126).Add((int)255).Add((int)82).Add((int)85).Add((int)212).Add((int)207).Add((int)206).Add((int)59).Add((int)227).Add((int)47).Add((int)16).Add((int)58).Add((int)17).Add((int)182).Add((int)189).Add((int)28).Add((int)42).Add((int)223).Add((int)183).Add((int)170).Add((int)213).Add((int)119).Add((int)248).Add((int)152).Add((int)2).Add((int)44).Add((int)154).Add((int)163).Add((int)70).Add((int)221).Add((int)153).Add((int)101).Add((int)155).Add((int)167).Add((int)43).Add((int)172).Add((int)9).Add((int)129).Add((int)22).Add((int)39).Add((int)253).Add((int)19).Add((int)98).Add((int)108).Add((int)110).Add((int)79).Add((int)113).Add((int)224).Add((int)232).Add((int)178).Add((int)185).Add((int)112).Add((int)104).Add((int)218).Add((int)246).Add((int)97).Add((int)228).Add((int)251).Add((int)34).Add((int)242).Add((int)193).Add((int)238).Add((int)210).Add((int)144).Add((int)12).Add((int)191).Add((int)179).Add((int)162).Add((int)241).Add((int)81).Add((int)51).Add((int)145).Add((int)235).Add((int)249).Add((int)14).Add((int)239).Add((int)107).Add((int)49).Add((int)192).Add((int)214).Add((int)31).Add((int)181).Add((int)199).Add((int)106).Add((int)157).Add((int)184).Add((int)84).Add((int)204).Add((int)176).Add((int)115).Add((int)121).Add((int)50).Add((int)45).Add((int)127).Add((int)4).Add((int)150).Add((int)254).Add((int)138).Add((int)236).Add((int)205).Add((int)93).Add((int)222).Add((int)114).Add((int)67).Add((int)29).Add((int)24).Add((int)72).Add((int)243).Add((int)141).Add((int)128).Add((int)195).Add((int)78).Add((int)66).Add((int)215).Add((int)61).Add((int)156).Add((int)180);
}

} // end namespace neash
} // end namespace display
