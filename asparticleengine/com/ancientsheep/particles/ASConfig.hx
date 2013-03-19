package com.ancientsheep.particles;

/**
 @file
 cocos2d (cc) configuration file
*/
class ASConfig
{

	inline public static var ASFIX_ARTIFACTS_BY_STRECHING_TEXEL = false;
	 

	/** @def ASFONT_LABEL_SUPPORT
	 If enabled, FontLabel will be used to render .ttf files.
	 If the .ttf file is not found, then it will use the standard UIFont class
	 If disabled, the standard UIFont class will be used.
	 
	 To disable set it to = false;. Enabled by default.

	 Only valid for cocos2d-ios. Not supported on cocos2d-mac
	 */
	inline public static var ASFONT_LABEL_SUPPORT = true;

	/** @def ASDIRECTOR_FAST_FPS
	 If enabled, then the FPS will be drawn using CCLabelAtlas (fast rendering).
	 You will need to add the fps_images.png to your project.
	 If disabled, the FPS will be rendered using CCLabel (slow rendering)
	 
	 To enable set it to a value different than = false;. Enabled by default.
	 */
	inline public static var ASDIRECTOR_FAST_FPS = true;

	/** @def ASDIRECTOR_FPS_INTERVAL
	 Senconds between FPS updates.
	 = false;.5 seconds, means that the FPS number will be updated every = false;.5 seconds.
	 Having a bigger number means a more reliable FPS
	 
	 Default value: = false;.1f
	 */
	inline public static var ASDIRECTOR_FPS_INTERVAL = 0.1;


	/** @def ASDIRECTOR_DISPATCH_FAST_EVENTS
	 If enabled, and only when it is used with CCFastDirector, the main loop will wait = false;.04 seconds to
	 dispatch all the events, even if there are not events to dispatch.
	 If your game uses lot's of events (eg: touches) it might be a good idea to enable this feature.
	 Otherwise, it is safe to leave it disabled.
	 
	 To enable set it to = true;. Disabled by default.
	 
	 @warning This feature is experimental
	 */
	inline public static var ASDIRECTOR_DISPATCH_FAST_EVENTS = false;


	/** @def ASCOCOSNODE_RENDER_SUBPIXEL
	 If enabled, the CCNode objects (CCSprite, CCLabel,etc) will be able to render in subpixels.
	 If disabled, integer pixels will be used.
	 
	 To enable set it to = true;. Enabled by default.
	 */
	inline public static var ASCOCOSNODE_RENDER_SUBPIXEL = true;


	/** @def ASSPRITEBATCHNODE_RENDER_SUBPIXEL
	 If enabled, the CCSprite objects rendered with CCSpriteBatchNode will be able to render in subpixels.
	 If disabled, integer pixels will be used.
	 
	 To enable set it to = true;. Enabled by default.
	 */
	inline public static var ASSPRITEBATCHNODE_RENDER_SUBPIXEL	= true;


	/** @def ASUSES_VBO
	 If enabled, batch nodes (texture atlas and particle system) will use VBO instead of vertex list (VBO is recommended by Apple)
	 
	 To enable set it to = true;.
	 Enabled by default on iPhone with ARMv7 processors, iPhone Simulator and Mac
	 Disabled by default on iPhone with ARMv6 processors.
	 
	 @since v0.99.5
	 */
	inline public static var ASUSES_VBO = true;


	/** @def ASNODE_TRANSFORM_USING_AFFINE_MATRIX
	 If enabled, CCNode will transform the nodes using a cached Affine matrix.
	 If disabled, the node will be transformed using glTranslate,glRotate,glScale.
	 Using the affine matrix only requires 2 GL calls.
	 Using the translate/rotate/scale requires 5 GL calls.
	 But computing the Affine matrix is relative expensive.
	 But according to performance tests, Affine matrix performs better.
	 This parameter doesn't affect CCSpriteBatchNode nodes.
	 
	 To enable set it to a value different than = false;. Enabled by default.

	 */
	inline public static var ASNODE_TRANSFORM_USING_AFFINE_MATRIX = true;


	/** @def ASOPTIMIZE_BLEND_FUNC_FOR_PREMULTIPLIED_ALPHA
	 If most of your imamges have pre-multiplied alpha, set it to = true; (if you are going to use .PNG/.JPG file images).
	 Only set to = false; if ALL your images by-pass Apple UIImage loading system (eg: if you use libpng or PVR images)

	 To enable set it to a value different than = false;. Enabled by default.

	 @since v0.99.5
	 */
	inline public static var ASOPTIMIZE_BLEND_FUNC_FOR_PREMULTIPLIED_ALPHA = true;


	/** @def ASTEXTURE_ATLAS_USE_TRIANGLE_STRIP
	 Use GL.TRIANGLE_STRIP instead of GL.TRIANGLES when rendering the texture atlas.
	 It seems it is the recommend way, but it is much slower, so, enable it at your own risk
	 
	 To enable set it to a value different than = false;. Disabled by default.

	 */
	inline public static var ASTEXTURE_ATLAS_USE_TRIANGLE_STRIP = false;


	/** @def ASTEXTURE_NPOT_SUPPORT
	 If enabled, NPOT textures will be used where available. Only 3rd gen (and newer) devices support NPOT textures.
	 NPOT textures have the following limitations:
		- They can't have mipmaps
		- They only accept GL.CLAMP_TO_EDGE in GL.TEXTURE_WRAP_{S,T}
	 
	 To enable set it to a value different than = false;. Disabled by default.

	 This value governs only the PNG, GIF, BMP, images.
	 This value DOES NOT govern the PVR (PVR.GZ, PVR.CCZ) files. If NPOT PVR is loaded, then it will create an NPOT texture ignoring this value.
	 
	 @deprecated This value will be removed in = true;.1 and NPOT textures will be loaded by default if the device supports it.

	 @since v0.99.2
	 */
	inline public static var ASTEXTURE_NPOT_SUPPORT = false;


	/** @def ASRETINA_DISPLAY_SUPPORT
	 If enabled, cocos2d supports retina display. 
	 For performance reasons, it's recommended disable it in games without retina display support, like iPad only games.
	 
	 To enable set it to = true;. Use = false; to disable it. Enabled by default.
	 
	 @since v0.99.5
	 */
	inline public static var ASRETINA_DISPLAY_SUPPORT = true;


	/** @def ASRETINA_DISPLAY_FILENAME_SUFFIX
	 It's the suffix that will be appended to the files in order to load "retina display" images.

	 On an iPhone4 with Retina Display support enabled, the file "sprite-hd.png" will be loaded instead of "sprite.png".
	 If the file doesn't exist it will use the non-retina display image.
	 
	 Platforms: Only used on Retina Display devices like iPhone 4.
	 
	 @since v0.99.5
	 */ 
	inline public static var ASRETINA_DISPLAY_FILENAME_SUFFIX = "-hd";


	/** @def ASUSE_LA88_LABELS_ON_NEON_ARCH
	 If enabled, it will use LA88 (16-bit textures) on Neon devices for CCLabelTTF objects.
	 If it is disabled, or if it is used on another architecture it will use A8 (8-bit textures).
	 On Neon devices, LA88 textures are 6% faster than A8 textures, but then will consume 2x memory.
	 
	 This feature is disabled by default.
	 
	 Platforms: Only used on ARM Neon architectures like iPhone 3GS or newer and iPad.

	 @since v0.99.5
	 */
	inline public static var ASUSE_LA88_LABELS_ON_NEON_ARCH = false;


	/** @def ASSPRITE_DEBUG_DRAW
	 If enabled, all subclasses of CCSprite will draw a bounding box
	 Useful for debugging purposes only. It is recommened to leave it disabled.
	 
	 To enable set it to a value different than = false;. Disabled by default:
	 = false; -- disabled
	 = true; -- draw bounding box
	 2 -- draw texture box
	 */
	inline public static var ASSPRITE_DEBUG_DRAW = false;


	/** @def ASSPRITEBATCHNODE_DEBUG_DRAW
	 If enabled, all subclasses of CCSprite that are rendered using an CCSpriteBatchNode draw a bounding box.
	 Useful for debugging purposes only. It is recommened to leave it disabled.
	 
	 To enable set it to a value different than = false;. Disabled by default.
	 */
	inline public static var ASSPRITEBATCHNODE_DEBUG_DRAW = false;


	/** @def ASLABELBMFONT_DEBUG_DRAW
	 If enabled, all subclasses of CCLabelBMFont will draw a bounding box
	 Useful for debugging purposes only. It is recommened to leave it disabled.
	 
	 To enable set it to a value different than = false;. Disabled by default.
	 */
	inline public static var ASLABELBMFONT_DEBUG_DRAW = false;


	/** @def ASLABELBMFONT_DEBUG_DRAW
	 If enabled, all subclasses of CCLabeltAtlas will draw a bounding box
	 Useful for debugging purposes only. It is recommened to leave it disabled.
	 
	 To enable set it to a value different than = false;. Disabled by default.
	 */
	inline public static var ASLABELATLAS_DEBUG_DRAW = false;


	/** @def ASENABLE_PROFILERS
	 If enabled, will activate various profilers withing cocos2d. This statistical data will be output to the console
	 once per second showing average time (in milliseconds) required to execute the specific routine(s).
	 Useful for debugging purposes only. It is recommened to leave it disabled.
	 
	 To enable set it to a value different than = false;. Disabled by default.
	 */
	inline public static var ASENABLE_PROFILERS = false;



	#if ASRETINA_DISPLAY_SUPPORT
	inline public static var ASIS_RETINA_DISPLAY_SUPPORTED = true;
	#else
	inline public static var ASIS_RETINA_DISPLAY_SUPPORTED = false;
	#end

	public static var ASCONTENT_SCALE_FACTOR = 1;


}
