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
#ifndef INCLUDED_neash_display_BitmapData
#include <neash/display/BitmapData.h>
#endif
#ifndef INCLUDED_neash_display_IBitmapDrawable
#include <neash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_neash_display_OptimizedPerlin
#include <neash/display/OptimizedPerlin.h>
#endif
#ifndef INCLUDED_neash_filters_BitmapFilter
#include <neash/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_neash_geom_ColorTransform
#include <neash/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_neash_geom_Matrix
#include <neash/geom/Matrix.h>
#endif
#ifndef INCLUDED_neash_geom_Point
#include <neash/geom/Point.h>
#endif
#ifndef INCLUDED_neash_geom_Rectangle
#include <neash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_neash_utils_ByteArray
#include <neash/utils/ByteArray.h>
#endif
#ifndef INCLUDED_neash_utils_IDataInput
#include <neash/utils/IDataInput.h>
#endif
namespace neash{
namespace display{

Void BitmapData_obj::__construct(int inWidth,int inHeight,hx::Null< bool >  __o_inTransparent,Dynamic inFillRGBA)
{
bool inTransparent = __o_inTransparent.Default(true);
{
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",65)
	int fill_col;
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",66)
	int fill_alpha;
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",68)
	if (((inFillRGBA == null()))){
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",70)
		fill_col = (int)16777215;
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",71)
		fill_alpha = (int)255;
	}
	else{
		struct _Function_2_1{
			inline static int Block( Dynamic &inFillRGBA){
				{
					HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",75)
					int v = inFillRGBA;
					HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",75)
					return (int(v) & int((int)16777215));
				}
				return null();
			}
		};
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",75)
		fill_col = _Function_2_1::Block(inFillRGBA);
		struct _Function_2_2{
			inline static int Block( Dynamic &inFillRGBA){
				{
					HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",76)
					int v = inFillRGBA;
					HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",76)
					return hx::UShr(v,(int)24);
				}
				return null();
			}
		};
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",76)
		fill_alpha = _Function_2_2::Block(inFillRGBA);
	}
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",79)
	if (((bool((inWidth < (int)1)) || bool((inHeight < (int)1))))){
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",80)
		this->nmeHandle = null();
	}
	else{
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",85)
		int flags = ::neash::display::BitmapData_obj::HARDWARE;
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",87)
		if ((inTransparent)){
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",88)
			hx::OrEq(flags,::neash::display::BitmapData_obj::TRANSPARENT);
		}
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",90)
		this->nmeHandle = ::neash::display::BitmapData_obj::nme_bitmap_data_create(inWidth,inHeight,flags,fill_col,fill_alpha);
	}
}
;
	return null();
}

BitmapData_obj::~BitmapData_obj() { }

Dynamic BitmapData_obj::__CreateEmpty() { return  new BitmapData_obj; }
hx::ObjectPtr< BitmapData_obj > BitmapData_obj::__new(int inWidth,int inHeight,hx::Null< bool >  __o_inTransparent,Dynamic inFillRGBA)
{  hx::ObjectPtr< BitmapData_obj > result = new BitmapData_obj();
	result->__construct(inWidth,inHeight,__o_inTransparent,inFillRGBA);
	return result;}

Dynamic BitmapData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BitmapData_obj > result = new BitmapData_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

hx::Object *BitmapData_obj::__ToInterface(const type_info &inType) {
	if (inType==typeid( ::neash::display::IBitmapDrawable_obj)) return operator ::neash::display::IBitmapDrawable_obj *();
	return super::__ToInterface(inType);
}

Void BitmapData_obj::applyFilter( ::neash::display::BitmapData sourceBitmapData,::neash::geom::Rectangle sourceRect,::neash::geom::Point destPoint,::neash::filters::BitmapFilter filter){
{
		HX_SOURCE_PUSH("BitmapData_obj::applyFilter")
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",104)
		::neash::display::BitmapData_obj::nme_bitmap_data_apply_filter(this->nmeHandle,sourceBitmapData->nmeHandle,sourceRect,destPoint,filter);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(BitmapData_obj,applyFilter,(void))

Void BitmapData_obj::clear( int color){
{
		HX_SOURCE_PUSH("BitmapData_obj::clear")
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",114)
		::neash::display::BitmapData_obj::nme_bitmap_data_clear(this->nmeHandle,color);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,clear,(void))

::neash::display::BitmapData BitmapData_obj::clone( ){
	HX_SOURCE_PUSH("BitmapData_obj::clone")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",125)
	::neash::display::BitmapData bm = ::neash::display::BitmapData_obj::__new((int)0,(int)0,null(),null());
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",126)
	bm->nmeHandle = ::neash::display::BitmapData_obj::nme_bitmap_data_clone(this->nmeHandle);
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",127)
	return bm;
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,clone,return )

Void BitmapData_obj::colorTransform( ::neash::geom::Rectangle rect,::neash::geom::ColorTransform colorTransform){
{
		HX_SOURCE_PUSH("BitmapData_obj::colorTransform")
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",137)
		::neash::display::BitmapData_obj::nme_bitmap_data_color_transform(this->nmeHandle,rect,colorTransform);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,colorTransform,(void))

Void BitmapData_obj::copyChannel( ::neash::display::BitmapData sourceBitmapData,::neash::geom::Rectangle sourceRect,::neash::geom::Point destPoint,int inSourceChannel,int inDestChannel){
{
		HX_SOURCE_PUSH("BitmapData_obj::copyChannel")
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",151)
		::neash::display::BitmapData_obj::nme_bitmap_data_copy_channel(sourceBitmapData->nmeHandle,sourceRect,this->nmeHandle,destPoint,inSourceChannel,inDestChannel);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(BitmapData_obj,copyChannel,(void))

Void BitmapData_obj::copyPixels( ::neash::display::BitmapData sourceBitmapData,::neash::geom::Rectangle sourceRect,::neash::geom::Point destPoint,::neash::display::BitmapData alphaBitmapData,::neash::geom::Point alphaPoint,hx::Null< bool >  __o_mergeAlpha){
bool mergeAlpha = __o_mergeAlpha.Default(false);
	HX_SOURCE_PUSH("BitmapData_obj::copyPixels");
{
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",166)
		::neash::display::BitmapData_obj::nme_bitmap_data_copy(sourceBitmapData->nmeHandle,sourceRect,this->nmeHandle,destPoint,mergeAlpha);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(BitmapData_obj,copyPixels,(void))

Void BitmapData_obj::createHardwareSurface( ){
{
		HX_SOURCE_PUSH("BitmapData_obj::createHardwareSurface")
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",183)
		::neash::display::BitmapData_obj::nme_bitmap_data_create_hardware_surface(this->nmeHandle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,createHardwareSurface,(void))

Void BitmapData_obj::destroyHardwareSurface( ){
{
		HX_SOURCE_PUSH("BitmapData_obj::destroyHardwareSurface")
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",189)
		::neash::display::BitmapData_obj::nme_bitmap_data_destroy_hardware_surface(this->nmeHandle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,destroyHardwareSurface,(void))

Void BitmapData_obj::dispose( ){
{
		HX_SOURCE_PUSH("BitmapData_obj::dispose")
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",196)
		this->nmeHandle = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,dispose,(void))

Void BitmapData_obj::draw( ::neash::display::IBitmapDrawable source,::neash::geom::Matrix matrix,::neash::geom::ColorTransform colorTransform,::String blendMode,::neash::geom::Rectangle clipRect,hx::Null< bool >  __o_smoothing){
bool smoothing = __o_smoothing.Default(false);
	HX_SOURCE_PUSH("BitmapData_obj::draw");
{
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",202)
		source->nmeDrawToSurface(this->nmeHandle,matrix,colorTransform,blendMode,clipRect,smoothing);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(BitmapData_obj,draw,(void))

Void BitmapData_obj::dumpBits( ){
{
		HX_SOURCE_PUSH("BitmapData_obj::dumpBits")
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",208)
		::neash::display::BitmapData_obj::nme_bitmap_data_dump_bits(this->nmeHandle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,dumpBits,(void))

::neash::utils::ByteArray BitmapData_obj::encode( ::String inFormat,hx::Null< double >  __o_inQuality){
double inQuality = __o_inQuality.Default(0.9);
	HX_SOURCE_PUSH("BitmapData_obj::encode");
{
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",214)
		return ::neash::display::BitmapData_obj::nme_bitmap_data_encode(this->nmeHandle,inFormat,inQuality);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,encode,return )

Void BitmapData_obj::fillRect( ::neash::geom::Rectangle rect,int inColour){
{
		HX_SOURCE_PUSH("BitmapData_obj::fillRect")
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",241)
		int a = hx::UShr(inColour,(int)24);
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",242)
		int c = (int(inColour) & int((int)16777215));
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",243)
		::neash::display::BitmapData_obj::nme_bitmap_data_fill(this->nmeHandle,rect,c,a);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,fillRect,(void))

Void BitmapData_obj::fillRectEx( ::neash::geom::Rectangle rect,int inColour,hx::Null< int >  __o_inAlpha){
int inAlpha = __o_inAlpha.Default(255);
	HX_SOURCE_PUSH("BitmapData_obj::fillRectEx");
{
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",248)
		::neash::display::BitmapData_obj::nme_bitmap_data_fill(this->nmeHandle,rect,inColour,inAlpha);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,fillRectEx,(void))

::neash::geom::Rectangle BitmapData_obj::generateFilterRect( ::neash::geom::Rectangle sourceRect,::neash::filters::BitmapFilter filter){
	HX_SOURCE_PUSH("BitmapData_obj::generateFilterRect")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",255)
	::neash::geom::Rectangle result = ::neash::geom::Rectangle_obj::__new(null(),null(),null(),null());
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",256)
	::neash::display::BitmapData_obj::nme_bitmap_data_generate_filter_rect(sourceRect,filter,result);
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",257)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,generateFilterRect,return )

::neash::geom::Rectangle BitmapData_obj::getColorBoundsRect( int mask,int color,hx::Null< bool >  __o_findColor){
bool findColor = __o_findColor.Default(true);
	HX_SOURCE_PUSH("BitmapData_obj::getColorBoundsRect");
{
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",263)
		::neash::geom::Rectangle result = ::neash::geom::Rectangle_obj::__new(null(),null(),null(),null());
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",264)
		::neash::display::BitmapData_obj::nme_bitmap_data_get_color_bounds_rect(this->nmeHandle,mask,color,findColor,result);
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",265)
		return result;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,getColorBoundsRect,return )

int BitmapData_obj::getPixel( int x,int y){
	HX_SOURCE_PUSH("BitmapData_obj::getPixel")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",270)
	return ::neash::display::BitmapData_obj::nme_bitmap_data_get_pixel(this->nmeHandle,x,y);
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,getPixel,return )

int BitmapData_obj::getPixel32( int x,int y){
	HX_SOURCE_PUSH("BitmapData_obj::getPixel32")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",276)
	return ::neash::display::BitmapData_obj::nme_bitmap_data_get_pixel32(this->nmeHandle,x,y);
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,getPixel32,return )

::neash::utils::ByteArray BitmapData_obj::getPixels( ::neash::geom::Rectangle rect){
	HX_SOURCE_PUSH("BitmapData_obj::getPixels")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",287)
	::neash::utils::ByteArray result = ::neash::display::BitmapData_obj::nme_bitmap_data_get_pixels(this->nmeHandle,rect);
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",289)
	if (((result != null()))){
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",290)
		result->position = result->length;
	}
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",292)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,getPixels,return )

Array< int > BitmapData_obj::getVector( ::neash::geom::Rectangle rect){
	HX_SOURCE_PUSH("BitmapData_obj::getVector")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",298)
	int pixels = ::Std_obj::_int((rect->width * rect->height));
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",300)
	if (((pixels < (int)1))){
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",301)
		return Array_obj< int >::__new();
	}
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",303)
	Array< int > result = Array_obj< int >::__new();
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",304)
	result[(pixels - (int)1)] = (int)0;
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",307)
	::neash::display::BitmapData_obj::nme_bitmap_data_get_array(this->nmeHandle,rect,result);
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",315)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,getVector,return )

Void BitmapData_obj::lock( ){
{
		HX_SOURCE_PUSH("BitmapData_obj::lock")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,lock,(void))

Void BitmapData_obj::nmeDrawToSurface( Dynamic inSurface,::neash::geom::Matrix matrix,::neash::geom::ColorTransform colorTransform,::String blendMode,::neash::geom::Rectangle clipRect,bool smoothing){
{
		HX_SOURCE_PUSH("BitmapData_obj::nmeDrawToSurface")
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",370)
		::neash::display::BitmapData_obj::nme_render_surface_to_surface(inSurface,this->nmeHandle,matrix,colorTransform,blendMode,clipRect,smoothing);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(BitmapData_obj,nmeDrawToSurface,(void))

Void BitmapData_obj::perlinNoise( double baseX,double baseY,int numOctaves,int randomSeed,bool stitch,bool fractalNoise,hx::Null< int >  __o_channelOptions,hx::Null< bool >  __o_grayScale,Array< ::neash::geom::Point > offsets){
int channelOptions = __o_channelOptions.Default(7);
bool grayScale = __o_grayScale.Default(false);
	HX_SOURCE_PUSH("BitmapData_obj::perlinNoise");
{
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",378)
		::neash::display::OptimizedPerlin perlin = ::neash::display::OptimizedPerlin_obj::__new(randomSeed,numOctaves,null());
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",379)
		perlin->fill(hx::ObjectPtr<OBJ_>(this),baseX,baseY,(int)0,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC9(BitmapData_obj,perlinNoise,(void))

Void BitmapData_obj::scroll( int inDX,int inDY){
{
		HX_SOURCE_PUSH("BitmapData_obj::scroll")
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",384)
		::neash::display::BitmapData_obj::nme_bitmap_data_scroll(this->nmeHandle,inDX,inDY);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,scroll,(void))

Void BitmapData_obj::setFlags( int inFlags){
{
		HX_SOURCE_PUSH("BitmapData_obj::setFlags")
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",390)
		::neash::display::BitmapData_obj::nme_bitmap_data_set_flags(this->nmeHandle,inFlags);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,setFlags,(void))

Void BitmapData_obj::setPixel( int inX,int inY,int inColour){
{
		HX_SOURCE_PUSH("BitmapData_obj::setPixel")
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",397)
		::neash::display::BitmapData_obj::nme_bitmap_data_set_pixel(this->nmeHandle,inX,inY,inColour);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,setPixel,(void))

Void BitmapData_obj::setPixel32( int inX,int inY,int inColour){
{
		HX_SOURCE_PUSH("BitmapData_obj::setPixel32")
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",403)
		::neash::display::BitmapData_obj::nme_bitmap_data_set_pixel32(this->nmeHandle,inX,inY,inColour);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,setPixel32,(void))

Void BitmapData_obj::setPixels( ::neash::geom::Rectangle rect,::neash::utils::ByteArray pixels){
{
		HX_SOURCE_PUSH("BitmapData_obj::setPixels")
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",414)
		int size = ::Std_obj::_int(((rect->width * rect->height) * (int)4));
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",415)
		pixels->checkData(::Std_obj::_int(size));
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",416)
		::neash::display::BitmapData_obj::nme_bitmap_data_set_bytes(this->nmeHandle,rect,pixels,pixels->position);
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",417)
		hx::AddEq(pixels->position,size);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,setPixels,(void))

Void BitmapData_obj::setVector( ::neash::geom::Rectangle rect,Array< int > inPixels){
{
		HX_SOURCE_PUSH("BitmapData_obj::setVector")
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",423)
		int count = ::Std_obj::_int((rect->width * rect->height));
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",424)
		if (((inPixels->length < count))){
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",425)
			return null();
		}
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",428)
		::neash::display::BitmapData_obj::nme_bitmap_data_set_array(this->nmeHandle,rect,inPixels);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,setVector,(void))

Void BitmapData_obj::unlock( ::neash::geom::Rectangle changeRect){
{
		HX_SOURCE_PUSH("BitmapData_obj::unlock")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,unlock,(void))

Void BitmapData_obj::setFormat( int format){
{
		HX_SOURCE_PUSH("BitmapData_obj::setFormat")
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",444)
		::neash::display::BitmapData_obj::nme_bitmap_data_set_format(this->nmeHandle,format);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,setFormat,(void))

Void BitmapData_obj::noise( int randomSeed,hx::Null< int >  __o_low,hx::Null< int >  __o_high,hx::Null< int >  __o_channelOptions,hx::Null< bool >  __o_grayScale){
int low = __o_low.Default(0);
int high = __o_high.Default(255);
int channelOptions = __o_channelOptions.Default(7);
bool grayScale = __o_grayScale.Default(false);
	HX_SOURCE_PUSH("BitmapData_obj::noise");
{
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",448)
		::neash::display::BitmapData_obj::nme_bitmap_data_noise(this->nmeHandle,randomSeed,low,high,channelOptions,grayScale);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(BitmapData_obj,noise,(void))

::neash::geom::Rectangle BitmapData_obj::nmeGetRect( ){
	HX_SOURCE_PUSH("BitmapData_obj::nmeGetRect")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",456)
	return ::neash::geom::Rectangle_obj::__new((int)0,(int)0,this->nmeGetWidth(),this->nmeGetHeight());
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,nmeGetRect,return )

int BitmapData_obj::nmeGetWidth( ){
	HX_SOURCE_PUSH("BitmapData_obj::nmeGetWidth")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",457)
	return ::neash::display::BitmapData_obj::nme_bitmap_data_width(this->nmeHandle);
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,nmeGetWidth,return )

int BitmapData_obj::nmeGetHeight( ){
	HX_SOURCE_PUSH("BitmapData_obj::nmeGetHeight")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",458)
	return ::neash::display::BitmapData_obj::nme_bitmap_data_height(this->nmeHandle);
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,nmeGetHeight,return )

bool BitmapData_obj::nmeGetTransparent( ){
	HX_SOURCE_PUSH("BitmapData_obj::nmeGetTransparent")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",459)
	return ::neash::display::BitmapData_obj::nme_bitmap_data_get_transparent(this->nmeHandle);
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,nmeGetTransparent,return )

int BitmapData_obj::CLEAR;

int BitmapData_obj::BLACK;

int BitmapData_obj::WHITE;

int BitmapData_obj::RED;

int BitmapData_obj::GREEN;

int BitmapData_obj::BLUE;

::String BitmapData_obj::PNG;

::String BitmapData_obj::JPG;

int BitmapData_obj::TRANSPARENT;

int BitmapData_obj::HARDWARE;

int BitmapData_obj::FORMAT_8888;

int BitmapData_obj::FORMAT_4444;

int BitmapData_obj::FORMAT_565;

int BitmapData_obj::createColor( int inRGB,hx::Null< int >  __o_inAlpha){
int inAlpha = __o_inAlpha.Default(255);
	HX_SOURCE_PUSH("BitmapData_obj::createColor");
{
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",172)
		return (int(inRGB) | int((int(inAlpha) << int((int)24))));
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,createColor,return )

int BitmapData_obj::extractAlpha( int v){
	HX_SOURCE_PUSH("BitmapData_obj::extractAlpha")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",220)
	return hx::UShr(v,(int)24);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,extractAlpha,return )

int BitmapData_obj::extractColor( int v){
	HX_SOURCE_PUSH("BitmapData_obj::extractColor")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",230)
	return (int(v) & int((int)16777215));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,extractColor,return )

::neash::display::BitmapData BitmapData_obj::load( ::String inFilename,hx::Null< int >  __o_format){
int format = __o_format.Default(0);
	HX_SOURCE_PUSH("BitmapData_obj::load");
{
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",327)
		::neash::display::BitmapData result = ::neash::display::BitmapData_obj::__new((int)0,(int)0,null(),null());
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",328)
		result->nmeHandle = ::neash::display::BitmapData_obj::nme_bitmap_data_load(inFilename,format);
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",329)
		return result;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,load,return )

::neash::display::BitmapData BitmapData_obj::loadFromBytes( ::neash::utils::ByteArray inBytes,::neash::utils::ByteArray inRawAlpha){
	HX_SOURCE_PUSH("BitmapData_obj::loadFromBytes")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",343)
	::neash::display::BitmapData result = ::neash::display::BitmapData_obj::__new((int)0,(int)0,null(),null());
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",344)
	result->nmeHandle = ::neash::display::BitmapData_obj::nme_bitmap_data_from_bytes(inBytes,inRawAlpha);
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",345)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,loadFromBytes,return )

::neash::display::BitmapData BitmapData_obj::loadFromHaxeBytes( ::haxe::io::Bytes inBytes,::haxe::io::Bytes inRawAlpha){
	HX_SOURCE_PUSH("BitmapData_obj::loadFromHaxeBytes")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/neash/display/BitmapData.hx",358)
	return ::neash::display::BitmapData_obj::loadFromBytes(::neash::utils::ByteArray_obj::fromBytes(inBytes),(  (((inRawAlpha == null()))) ? ::neash::utils::ByteArray(null()) : ::neash::utils::ByteArray(::neash::utils::ByteArray_obj::fromBytes(inRawAlpha)) ));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,loadFromHaxeBytes,return )

Dynamic BitmapData_obj::nme_bitmap_data_create;

Dynamic BitmapData_obj::nme_bitmap_data_load;

Dynamic BitmapData_obj::nme_bitmap_data_from_bytes;

Dynamic BitmapData_obj::nme_bitmap_data_clear;

Dynamic BitmapData_obj::nme_bitmap_data_clone;

Dynamic BitmapData_obj::nme_bitmap_data_apply_filter;

Dynamic BitmapData_obj::nme_bitmap_data_color_transform;

Dynamic BitmapData_obj::nme_bitmap_data_copy;

Dynamic BitmapData_obj::nme_bitmap_data_copy_channel;

Dynamic BitmapData_obj::nme_bitmap_data_fill;

Dynamic BitmapData_obj::nme_bitmap_data_get_pixels;

Dynamic BitmapData_obj::nme_bitmap_data_get_pixel;

Dynamic BitmapData_obj::nme_bitmap_data_get_pixel32;

Dynamic BitmapData_obj::nme_bitmap_data_get_pixel_rgba;

Dynamic BitmapData_obj::nme_bitmap_data_get_array;

Dynamic BitmapData_obj::nme_bitmap_data_get_color_bounds_rect;

Dynamic BitmapData_obj::nme_bitmap_data_scroll;

Dynamic BitmapData_obj::nme_bitmap_data_set_pixel;

Dynamic BitmapData_obj::nme_bitmap_data_set_pixel32;

Dynamic BitmapData_obj::nme_bitmap_data_set_pixel_rgba;

Dynamic BitmapData_obj::nme_bitmap_data_set_bytes;

Dynamic BitmapData_obj::nme_bitmap_data_set_format;

Dynamic BitmapData_obj::nme_bitmap_data_set_array;

Dynamic BitmapData_obj::nme_bitmap_data_create_hardware_surface;

Dynamic BitmapData_obj::nme_bitmap_data_destroy_hardware_surface;

Dynamic BitmapData_obj::nme_bitmap_data_generate_filter_rect;

Dynamic BitmapData_obj::nme_render_surface_to_surface;

Dynamic BitmapData_obj::nme_bitmap_data_height;

Dynamic BitmapData_obj::nme_bitmap_data_width;

Dynamic BitmapData_obj::nme_bitmap_data_get_transparent;

Dynamic BitmapData_obj::nme_bitmap_data_set_flags;

Dynamic BitmapData_obj::nme_bitmap_data_encode;

Dynamic BitmapData_obj::nme_bitmap_data_dump_bits;

Dynamic BitmapData_obj::nme_bitmap_data_noise;


BitmapData_obj::BitmapData_obj()
{
}

void BitmapData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BitmapData);
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(rect,"rect");
	HX_MARK_MEMBER_NAME(transparent,"transparent");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(nmeHandle,"nmeHandle");
	HX_MARK_END_CLASS();
}

Dynamic BitmapData_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"RED") ) { return RED; }
		if (HX_FIELD_EQ(inName,"PNG") ) { return PNG; }
		if (HX_FIELD_EQ(inName,"JPG") ) { return JPG; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"BLUE") ) { return BLUE; }
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		if (HX_FIELD_EQ(inName,"rect") ) { return inCallProp ? nmeGetRect() : rect; }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"lock") ) { return lock_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"CLEAR") ) { return CLEAR; }
		if (HX_FIELD_EQ(inName,"BLACK") ) { return BLACK; }
		if (HX_FIELD_EQ(inName,"WHITE") ) { return WHITE; }
		if (HX_FIELD_EQ(inName,"GREEN") ) { return GREEN; }
		if (HX_FIELD_EQ(inName,"width") ) { return inCallProp ? nmeGetWidth() : width; }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"noise") ) { return noise_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return inCallProp ? nmeGetHeight() : height; }
		if (HX_FIELD_EQ(inName,"encode") ) { return encode_dyn(); }
		if (HX_FIELD_EQ(inName,"scroll") ) { return scroll_dyn(); }
		if (HX_FIELD_EQ(inName,"unlock") ) { return unlock_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"HARDWARE") ) { return HARDWARE; }
		if (HX_FIELD_EQ(inName,"dumpBits") ) { return dumpBits_dyn(); }
		if (HX_FIELD_EQ(inName,"fillRect") ) { return fillRect_dyn(); }
		if (HX_FIELD_EQ(inName,"getPixel") ) { return getPixel_dyn(); }
		if (HX_FIELD_EQ(inName,"setFlags") ) { return setFlags_dyn(); }
		if (HX_FIELD_EQ(inName,"setPixel") ) { return setPixel_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"nmeHandle") ) { return nmeHandle; }
		if (HX_FIELD_EQ(inName,"getPixels") ) { return getPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"getVector") ) { return getVector_dyn(); }
		if (HX_FIELD_EQ(inName,"setPixels") ) { return setPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"setVector") ) { return setVector_dyn(); }
		if (HX_FIELD_EQ(inName,"setFormat") ) { return setFormat_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"FORMAT_565") ) { return FORMAT_565; }
		if (HX_FIELD_EQ(inName,"copyPixels") ) { return copyPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"fillRectEx") ) { return fillRectEx_dyn(); }
		if (HX_FIELD_EQ(inName,"getPixel32") ) { return getPixel32_dyn(); }
		if (HX_FIELD_EQ(inName,"setPixel32") ) { return setPixel32_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeGetRect") ) { return nmeGetRect_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"TRANSPARENT") ) { return TRANSPARENT; }
		if (HX_FIELD_EQ(inName,"FORMAT_8888") ) { return FORMAT_8888; }
		if (HX_FIELD_EQ(inName,"FORMAT_4444") ) { return FORMAT_4444; }
		if (HX_FIELD_EQ(inName,"createColor") ) { return createColor_dyn(); }
		if (HX_FIELD_EQ(inName,"transparent") ) { return inCallProp ? nmeGetTransparent() : transparent; }
		if (HX_FIELD_EQ(inName,"applyFilter") ) { return applyFilter_dyn(); }
		if (HX_FIELD_EQ(inName,"copyChannel") ) { return copyChannel_dyn(); }
		if (HX_FIELD_EQ(inName,"perlinNoise") ) { return perlinNoise_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeGetWidth") ) { return nmeGetWidth_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"extractAlpha") ) { return extractAlpha_dyn(); }
		if (HX_FIELD_EQ(inName,"extractColor") ) { return extractColor_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeGetHeight") ) { return nmeGetHeight_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"loadFromBytes") ) { return loadFromBytes_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { return colorTransform_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"nmeDrawToSurface") ) { return nmeDrawToSurface_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"loadFromHaxeBytes") ) { return loadFromHaxeBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeGetTransparent") ) { return nmeGetTransparent_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"generateFilterRect") ) { return generateFilterRect_dyn(); }
		if (HX_FIELD_EQ(inName,"getColorBoundsRect") ) { return getColorBoundsRect_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_load") ) { return nme_bitmap_data_load; }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_copy") ) { return nme_bitmap_data_copy; }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_fill") ) { return nme_bitmap_data_fill; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_clear") ) { return nme_bitmap_data_clear; }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_clone") ) { return nme_bitmap_data_clone; }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_width") ) { return nme_bitmap_data_width; }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_noise") ) { return nme_bitmap_data_noise; }
		if (HX_FIELD_EQ(inName,"createHardwareSurface") ) { return createHardwareSurface_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_create") ) { return nme_bitmap_data_create; }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_scroll") ) { return nme_bitmap_data_scroll; }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_height") ) { return nme_bitmap_data_height; }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_encode") ) { return nme_bitmap_data_encode; }
		if (HX_FIELD_EQ(inName,"destroyHardwareSurface") ) { return destroyHardwareSurface_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_get_pixel") ) { return nme_bitmap_data_get_pixel; }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_get_array") ) { return nme_bitmap_data_get_array; }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_set_pixel") ) { return nme_bitmap_data_set_pixel; }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_set_bytes") ) { return nme_bitmap_data_set_bytes; }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_set_array") ) { return nme_bitmap_data_set_array; }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_set_flags") ) { return nme_bitmap_data_set_flags; }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_dump_bits") ) { return nme_bitmap_data_dump_bits; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_from_bytes") ) { return nme_bitmap_data_from_bytes; }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_get_pixels") ) { return nme_bitmap_data_get_pixels; }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_set_format") ) { return nme_bitmap_data_set_format; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_get_pixel32") ) { return nme_bitmap_data_get_pixel32; }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_set_pixel32") ) { return nme_bitmap_data_set_pixel32; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_apply_filter") ) { return nme_bitmap_data_apply_filter; }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_copy_channel") ) { return nme_bitmap_data_copy_channel; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"nme_render_surface_to_surface") ) { return nme_render_surface_to_surface; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_get_pixel_rgba") ) { return nme_bitmap_data_get_pixel_rgba; }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_set_pixel_rgba") ) { return nme_bitmap_data_set_pixel_rgba; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_color_transform") ) { return nme_bitmap_data_color_transform; }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_get_transparent") ) { return nme_bitmap_data_get_transparent; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_generate_filter_rect") ) { return nme_bitmap_data_generate_filter_rect; }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_get_color_bounds_rect") ) { return nme_bitmap_data_get_color_bounds_rect; }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_create_hardware_surface") ) { return nme_bitmap_data_create_hardware_surface; }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_destroy_hardware_surface") ) { return nme_bitmap_data_destroy_hardware_surface; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BitmapData_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"RED") ) { RED=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PNG") ) { PNG=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"JPG") ) { JPG=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"BLUE") ) { BLUE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rect") ) { rect=inValue.Cast< ::neash::geom::Rectangle >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"CLEAR") ) { CLEAR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BLACK") ) { BLACK=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"WHITE") ) { WHITE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"GREEN") ) { GREEN=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"HARDWARE") ) { HARDWARE=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"nmeHandle") ) { nmeHandle=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"FORMAT_565") ) { FORMAT_565=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"TRANSPARENT") ) { TRANSPARENT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FORMAT_8888") ) { FORMAT_8888=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FORMAT_4444") ) { FORMAT_4444=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"transparent") ) { transparent=inValue.Cast< bool >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_load") ) { nme_bitmap_data_load=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_copy") ) { nme_bitmap_data_copy=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_fill") ) { nme_bitmap_data_fill=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_clear") ) { nme_bitmap_data_clear=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_clone") ) { nme_bitmap_data_clone=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_width") ) { nme_bitmap_data_width=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_noise") ) { nme_bitmap_data_noise=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_create") ) { nme_bitmap_data_create=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_scroll") ) { nme_bitmap_data_scroll=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_height") ) { nme_bitmap_data_height=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_encode") ) { nme_bitmap_data_encode=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_get_pixel") ) { nme_bitmap_data_get_pixel=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_get_array") ) { nme_bitmap_data_get_array=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_set_pixel") ) { nme_bitmap_data_set_pixel=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_set_bytes") ) { nme_bitmap_data_set_bytes=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_set_array") ) { nme_bitmap_data_set_array=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_set_flags") ) { nme_bitmap_data_set_flags=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_dump_bits") ) { nme_bitmap_data_dump_bits=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_from_bytes") ) { nme_bitmap_data_from_bytes=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_get_pixels") ) { nme_bitmap_data_get_pixels=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_set_format") ) { nme_bitmap_data_set_format=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_get_pixel32") ) { nme_bitmap_data_get_pixel32=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_set_pixel32") ) { nme_bitmap_data_set_pixel32=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_apply_filter") ) { nme_bitmap_data_apply_filter=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_copy_channel") ) { nme_bitmap_data_copy_channel=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"nme_render_surface_to_surface") ) { nme_render_surface_to_surface=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_get_pixel_rgba") ) { nme_bitmap_data_get_pixel_rgba=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_set_pixel_rgba") ) { nme_bitmap_data_set_pixel_rgba=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_color_transform") ) { nme_bitmap_data_color_transform=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_get_transparent") ) { nme_bitmap_data_get_transparent=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_generate_filter_rect") ) { nme_bitmap_data_generate_filter_rect=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_get_color_bounds_rect") ) { nme_bitmap_data_get_color_bounds_rect=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_create_hardware_surface") ) { nme_bitmap_data_create_hardware_surface=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_destroy_hardware_surface") ) { nme_bitmap_data_destroy_hardware_surface=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BitmapData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("rect"));
	outFields->push(HX_CSTRING("transparent"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("nmeHandle"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("CLEAR"),
	HX_CSTRING("BLACK"),
	HX_CSTRING("WHITE"),
	HX_CSTRING("RED"),
	HX_CSTRING("GREEN"),
	HX_CSTRING("BLUE"),
	HX_CSTRING("PNG"),
	HX_CSTRING("JPG"),
	HX_CSTRING("TRANSPARENT"),
	HX_CSTRING("HARDWARE"),
	HX_CSTRING("FORMAT_8888"),
	HX_CSTRING("FORMAT_4444"),
	HX_CSTRING("FORMAT_565"),
	HX_CSTRING("createColor"),
	HX_CSTRING("extractAlpha"),
	HX_CSTRING("extractColor"),
	HX_CSTRING("load"),
	HX_CSTRING("loadFromBytes"),
	HX_CSTRING("loadFromHaxeBytes"),
	HX_CSTRING("nme_bitmap_data_create"),
	HX_CSTRING("nme_bitmap_data_load"),
	HX_CSTRING("nme_bitmap_data_from_bytes"),
	HX_CSTRING("nme_bitmap_data_clear"),
	HX_CSTRING("nme_bitmap_data_clone"),
	HX_CSTRING("nme_bitmap_data_apply_filter"),
	HX_CSTRING("nme_bitmap_data_color_transform"),
	HX_CSTRING("nme_bitmap_data_copy"),
	HX_CSTRING("nme_bitmap_data_copy_channel"),
	HX_CSTRING("nme_bitmap_data_fill"),
	HX_CSTRING("nme_bitmap_data_get_pixels"),
	HX_CSTRING("nme_bitmap_data_get_pixel"),
	HX_CSTRING("nme_bitmap_data_get_pixel32"),
	HX_CSTRING("nme_bitmap_data_get_pixel_rgba"),
	HX_CSTRING("nme_bitmap_data_get_array"),
	HX_CSTRING("nme_bitmap_data_get_color_bounds_rect"),
	HX_CSTRING("nme_bitmap_data_scroll"),
	HX_CSTRING("nme_bitmap_data_set_pixel"),
	HX_CSTRING("nme_bitmap_data_set_pixel32"),
	HX_CSTRING("nme_bitmap_data_set_pixel_rgba"),
	HX_CSTRING("nme_bitmap_data_set_bytes"),
	HX_CSTRING("nme_bitmap_data_set_format"),
	HX_CSTRING("nme_bitmap_data_set_array"),
	HX_CSTRING("nme_bitmap_data_create_hardware_surface"),
	HX_CSTRING("nme_bitmap_data_destroy_hardware_surface"),
	HX_CSTRING("nme_bitmap_data_generate_filter_rect"),
	HX_CSTRING("nme_render_surface_to_surface"),
	HX_CSTRING("nme_bitmap_data_height"),
	HX_CSTRING("nme_bitmap_data_width"),
	HX_CSTRING("nme_bitmap_data_get_transparent"),
	HX_CSTRING("nme_bitmap_data_set_flags"),
	HX_CSTRING("nme_bitmap_data_encode"),
	HX_CSTRING("nme_bitmap_data_dump_bits"),
	HX_CSTRING("nme_bitmap_data_noise"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("height"),
	HX_CSTRING("rect"),
	HX_CSTRING("transparent"),
	HX_CSTRING("width"),
	HX_CSTRING("nmeHandle"),
	HX_CSTRING("applyFilter"),
	HX_CSTRING("clear"),
	HX_CSTRING("clone"),
	HX_CSTRING("colorTransform"),
	HX_CSTRING("copyChannel"),
	HX_CSTRING("copyPixels"),
	HX_CSTRING("createHardwareSurface"),
	HX_CSTRING("destroyHardwareSurface"),
	HX_CSTRING("dispose"),
	HX_CSTRING("draw"),
	HX_CSTRING("dumpBits"),
	HX_CSTRING("encode"),
	HX_CSTRING("fillRect"),
	HX_CSTRING("fillRectEx"),
	HX_CSTRING("generateFilterRect"),
	HX_CSTRING("getColorBoundsRect"),
	HX_CSTRING("getPixel"),
	HX_CSTRING("getPixel32"),
	HX_CSTRING("getPixels"),
	HX_CSTRING("getVector"),
	HX_CSTRING("lock"),
	HX_CSTRING("nmeDrawToSurface"),
	HX_CSTRING("perlinNoise"),
	HX_CSTRING("scroll"),
	HX_CSTRING("setFlags"),
	HX_CSTRING("setPixel"),
	HX_CSTRING("setPixel32"),
	HX_CSTRING("setPixels"),
	HX_CSTRING("setVector"),
	HX_CSTRING("unlock"),
	HX_CSTRING("setFormat"),
	HX_CSTRING("noise"),
	HX_CSTRING("nmeGetRect"),
	HX_CSTRING("nmeGetWidth"),
	HX_CSTRING("nmeGetHeight"),
	HX_CSTRING("nmeGetTransparent"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BitmapData_obj::CLEAR,"CLEAR");
	HX_MARK_MEMBER_NAME(BitmapData_obj::BLACK,"BLACK");
	HX_MARK_MEMBER_NAME(BitmapData_obj::WHITE,"WHITE");
	HX_MARK_MEMBER_NAME(BitmapData_obj::RED,"RED");
	HX_MARK_MEMBER_NAME(BitmapData_obj::GREEN,"GREEN");
	HX_MARK_MEMBER_NAME(BitmapData_obj::BLUE,"BLUE");
	HX_MARK_MEMBER_NAME(BitmapData_obj::PNG,"PNG");
	HX_MARK_MEMBER_NAME(BitmapData_obj::JPG,"JPG");
	HX_MARK_MEMBER_NAME(BitmapData_obj::TRANSPARENT,"TRANSPARENT");
	HX_MARK_MEMBER_NAME(BitmapData_obj::HARDWARE,"HARDWARE");
	HX_MARK_MEMBER_NAME(BitmapData_obj::FORMAT_8888,"FORMAT_8888");
	HX_MARK_MEMBER_NAME(BitmapData_obj::FORMAT_4444,"FORMAT_4444");
	HX_MARK_MEMBER_NAME(BitmapData_obj::FORMAT_565,"FORMAT_565");
	HX_MARK_MEMBER_NAME(BitmapData_obj::nme_bitmap_data_create,"nme_bitmap_data_create");
	HX_MARK_MEMBER_NAME(BitmapData_obj::nme_bitmap_data_load,"nme_bitmap_data_load");
	HX_MARK_MEMBER_NAME(BitmapData_obj::nme_bitmap_data_from_bytes,"nme_bitmap_data_from_bytes");
	HX_MARK_MEMBER_NAME(BitmapData_obj::nme_bitmap_data_clear,"nme_bitmap_data_clear");
	HX_MARK_MEMBER_NAME(BitmapData_obj::nme_bitmap_data_clone,"nme_bitmap_data_clone");
	HX_MARK_MEMBER_NAME(BitmapData_obj::nme_bitmap_data_apply_filter,"nme_bitmap_data_apply_filter");
	HX_MARK_MEMBER_NAME(BitmapData_obj::nme_bitmap_data_color_transform,"nme_bitmap_data_color_transform");
	HX_MARK_MEMBER_NAME(BitmapData_obj::nme_bitmap_data_copy,"nme_bitmap_data_copy");
	HX_MARK_MEMBER_NAME(BitmapData_obj::nme_bitmap_data_copy_channel,"nme_bitmap_data_copy_channel");
	HX_MARK_MEMBER_NAME(BitmapData_obj::nme_bitmap_data_fill,"nme_bitmap_data_fill");
	HX_MARK_MEMBER_NAME(BitmapData_obj::nme_bitmap_data_get_pixels,"nme_bitmap_data_get_pixels");
	HX_MARK_MEMBER_NAME(BitmapData_obj::nme_bitmap_data_get_pixel,"nme_bitmap_data_get_pixel");
	HX_MARK_MEMBER_NAME(BitmapData_obj::nme_bitmap_data_get_pixel32,"nme_bitmap_data_get_pixel32");
	HX_MARK_MEMBER_NAME(BitmapData_obj::nme_bitmap_data_get_pixel_rgba,"nme_bitmap_data_get_pixel_rgba");
	HX_MARK_MEMBER_NAME(BitmapData_obj::nme_bitmap_data_get_array,"nme_bitmap_data_get_array");
	HX_MARK_MEMBER_NAME(BitmapData_obj::nme_bitmap_data_get_color_bounds_rect,"nme_bitmap_data_get_color_bounds_rect");
	HX_MARK_MEMBER_NAME(BitmapData_obj::nme_bitmap_data_scroll,"nme_bitmap_data_scroll");
	HX_MARK_MEMBER_NAME(BitmapData_obj::nme_bitmap_data_set_pixel,"nme_bitmap_data_set_pixel");
	HX_MARK_MEMBER_NAME(BitmapData_obj::nme_bitmap_data_set_pixel32,"nme_bitmap_data_set_pixel32");
	HX_MARK_MEMBER_NAME(BitmapData_obj::nme_bitmap_data_set_pixel_rgba,"nme_bitmap_data_set_pixel_rgba");
	HX_MARK_MEMBER_NAME(BitmapData_obj::nme_bitmap_data_set_bytes,"nme_bitmap_data_set_bytes");
	HX_MARK_MEMBER_NAME(BitmapData_obj::nme_bitmap_data_set_format,"nme_bitmap_data_set_format");
	HX_MARK_MEMBER_NAME(BitmapData_obj::nme_bitmap_data_set_array,"nme_bitmap_data_set_array");
	HX_MARK_MEMBER_NAME(BitmapData_obj::nme_bitmap_data_create_hardware_surface,"nme_bitmap_data_create_hardware_surface");
	HX_MARK_MEMBER_NAME(BitmapData_obj::nme_bitmap_data_destroy_hardware_surface,"nme_bitmap_data_destroy_hardware_surface");
	HX_MARK_MEMBER_NAME(BitmapData_obj::nme_bitmap_data_generate_filter_rect,"nme_bitmap_data_generate_filter_rect");
	HX_MARK_MEMBER_NAME(BitmapData_obj::nme_render_surface_to_surface,"nme_render_surface_to_surface");
	HX_MARK_MEMBER_NAME(BitmapData_obj::nme_bitmap_data_height,"nme_bitmap_data_height");
	HX_MARK_MEMBER_NAME(BitmapData_obj::nme_bitmap_data_width,"nme_bitmap_data_width");
	HX_MARK_MEMBER_NAME(BitmapData_obj::nme_bitmap_data_get_transparent,"nme_bitmap_data_get_transparent");
	HX_MARK_MEMBER_NAME(BitmapData_obj::nme_bitmap_data_set_flags,"nme_bitmap_data_set_flags");
	HX_MARK_MEMBER_NAME(BitmapData_obj::nme_bitmap_data_encode,"nme_bitmap_data_encode");
	HX_MARK_MEMBER_NAME(BitmapData_obj::nme_bitmap_data_dump_bits,"nme_bitmap_data_dump_bits");
	HX_MARK_MEMBER_NAME(BitmapData_obj::nme_bitmap_data_noise,"nme_bitmap_data_noise");
};

Class BitmapData_obj::__mClass;

void BitmapData_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("neash.display.BitmapData"), hx::TCanCast< BitmapData_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void BitmapData_obj::__boot()
{
	hx::Static(CLEAR) = (int)0;
	hx::Static(BLACK) = (int)-16777216;
	hx::Static(WHITE) = (int)-16777216;
	hx::Static(RED) = (int)-65536;
	hx::Static(GREEN) = (int)-16711936;
	hx::Static(BLUE) = (int)-16776961;
	hx::Static(PNG) = HX_CSTRING("png");
	hx::Static(JPG) = HX_CSTRING("jpg");
	hx::Static(TRANSPARENT) = (int)1;
	hx::Static(HARDWARE) = (int)2;
	hx::Static(FORMAT_8888) = (int)0;
	hx::Static(FORMAT_4444) = (int)1;
	hx::Static(FORMAT_565) = (int)2;
	hx::Static(nme_bitmap_data_create) = ::neash::Loader_obj::load(HX_CSTRING("nme_bitmap_data_create"),(int)5);
	hx::Static(nme_bitmap_data_load) = ::neash::Loader_obj::load(HX_CSTRING("nme_bitmap_data_load"),(int)2);
	hx::Static(nme_bitmap_data_from_bytes) = ::neash::Loader_obj::load(HX_CSTRING("nme_bitmap_data_from_bytes"),(int)2);
	hx::Static(nme_bitmap_data_clear) = ::neash::Loader_obj::load(HX_CSTRING("nme_bitmap_data_clear"),(int)2);
	hx::Static(nme_bitmap_data_clone) = ::neash::Loader_obj::load(HX_CSTRING("nme_bitmap_data_clone"),(int)1);
	hx::Static(nme_bitmap_data_apply_filter) = ::neash::Loader_obj::load(HX_CSTRING("nme_bitmap_data_apply_filter"),(int)5);
	hx::Static(nme_bitmap_data_color_transform) = ::neash::Loader_obj::load(HX_CSTRING("nme_bitmap_data_color_transform"),(int)3);
	hx::Static(nme_bitmap_data_copy) = ::neash::Loader_obj::load(HX_CSTRING("nme_bitmap_data_copy"),(int)5);
	hx::Static(nme_bitmap_data_copy_channel) = ::neash::Loader_obj::load(HX_CSTRING("nme_bitmap_data_copy_channel"),(int)-1);
	hx::Static(nme_bitmap_data_fill) = ::neash::Loader_obj::load(HX_CSTRING("nme_bitmap_data_fill"),(int)4);
	hx::Static(nme_bitmap_data_get_pixels) = ::neash::Loader_obj::load(HX_CSTRING("nme_bitmap_data_get_pixels"),(int)2);
	hx::Static(nme_bitmap_data_get_pixel) = ::neash::Loader_obj::load(HX_CSTRING("nme_bitmap_data_get_pixel"),(int)3);
	hx::Static(nme_bitmap_data_get_pixel32) = ::neash::Loader_obj::load(HX_CSTRING("nme_bitmap_data_get_pixel32"),(int)3);
	hx::Static(nme_bitmap_data_get_pixel_rgba) = ::neash::Loader_obj::load(HX_CSTRING("nme_bitmap_data_get_pixel_rgba"),(int)3);
	hx::Static(nme_bitmap_data_get_array) = ::neash::Loader_obj::load(HX_CSTRING("nme_bitmap_data_get_array"),(int)3);
	hx::Static(nme_bitmap_data_get_color_bounds_rect) = ::neash::Loader_obj::load(HX_CSTRING("nme_bitmap_data_get_color_bounds_rect"),(int)5);
	hx::Static(nme_bitmap_data_scroll) = ::neash::Loader_obj::load(HX_CSTRING("nme_bitmap_data_scroll"),(int)3);
	hx::Static(nme_bitmap_data_set_pixel) = ::neash::Loader_obj::load(HX_CSTRING("nme_bitmap_data_set_pixel"),(int)4);
	hx::Static(nme_bitmap_data_set_pixel32) = ::neash::Loader_obj::load(HX_CSTRING("nme_bitmap_data_set_pixel32"),(int)4);
	hx::Static(nme_bitmap_data_set_pixel_rgba) = ::neash::Loader_obj::load(HX_CSTRING("nme_bitmap_data_set_pixel_rgba"),(int)4);
	hx::Static(nme_bitmap_data_set_bytes) = ::neash::Loader_obj::load(HX_CSTRING("nme_bitmap_data_set_bytes"),(int)4);
	hx::Static(nme_bitmap_data_set_format) = ::neash::Loader_obj::load(HX_CSTRING("nme_bitmap_data_set_format"),(int)2);
	hx::Static(nme_bitmap_data_set_array) = ::neash::Loader_obj::load(HX_CSTRING("nme_bitmap_data_set_array"),(int)3);
	hx::Static(nme_bitmap_data_create_hardware_surface) = ::neash::Loader_obj::load(HX_CSTRING("nme_bitmap_data_create_hardware_surface"),(int)1);
	hx::Static(nme_bitmap_data_destroy_hardware_surface) = ::neash::Loader_obj::load(HX_CSTRING("nme_bitmap_data_destroy_hardware_surface"),(int)1);
	hx::Static(nme_bitmap_data_generate_filter_rect) = ::neash::Loader_obj::load(HX_CSTRING("nme_bitmap_data_generate_filter_rect"),(int)3);
	hx::Static(nme_render_surface_to_surface) = ::neash::Loader_obj::load(HX_CSTRING("nme_render_surface_to_surface"),(int)-1);
	hx::Static(nme_bitmap_data_height) = ::neash::Loader_obj::load(HX_CSTRING("nme_bitmap_data_height"),(int)1);
	hx::Static(nme_bitmap_data_width) = ::neash::Loader_obj::load(HX_CSTRING("nme_bitmap_data_width"),(int)1);
	hx::Static(nme_bitmap_data_get_transparent) = ::neash::Loader_obj::load(HX_CSTRING("nme_bitmap_data_get_transparent"),(int)1);
	hx::Static(nme_bitmap_data_set_flags) = ::neash::Loader_obj::load(HX_CSTRING("nme_bitmap_data_set_flags"),(int)1);
	hx::Static(nme_bitmap_data_encode) = ::neash::Loader_obj::load(HX_CSTRING("nme_bitmap_data_encode"),(int)3);
	hx::Static(nme_bitmap_data_dump_bits) = ::neash::Loader_obj::load(HX_CSTRING("nme_bitmap_data_dump_bits"),(int)1);
	hx::Static(nme_bitmap_data_noise) = ::neash::Loader_obj::load(HX_CSTRING("nme_bitmap_data_noise"),(int)-1);
}

} // end namespace neash
} // end namespace display
