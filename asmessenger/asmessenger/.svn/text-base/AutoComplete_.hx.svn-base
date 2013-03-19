/**
*  
*  if you want to use AD, you must change nme to set keyWindows.rootViewController
*  
*  */
package asmessenger;

import nme.Lib;
import nme.display.BitmapData;
import nme.geom.Rectangle;


class AsMessenger
{
	private static var initialized:Bool = false;

	//public static var onAdClick:Dynamic;
	//public static var onAdClickFinished:Dynamic;


	public static function init(f1:Dynamic,f2:Dynamic):Void
	{
		trace("asmessenger");
		
		if(initialized==false)
		{
			//asmessenger_init(asevent_callback);
			initialized = true;
		}

		else
			trace("asmessenger :: already initialized");

		//Setup our callback functions
		//onAdClick = f1;
		//onAdClickFinished = f2;
	}
	
	public static function sendEmail(subject:String,message:String):Void
	{
		trace("sendEmail - "+subject+" - "+message);

		send_email(subject,message);
	}

	public static function sendEmailWithAttachment(subject:String,message:String,bmd:BitmapData):Void
	{
		//Convert bitmap data
		var 			pixels = bmd.getVector(new Rectangle(0,0,bmd.width,bmd.height));

		trace("sendEmailWithAttachment - "+subject+" - "+message);

		send_email_attachment(subject,message,pixels,bmd.width,bmd.height);
	}

	public static function asevent_callback(eventId:Int):Void
	{
		trace("HX: received event: "+eventId);
	}

	public static function getLanguage():Bool
	{
		//trace("getLanguage");

		return get_language();
	}

	public static function canSendMail():Bool
	{
		//trace("getLanguage");

		return can_send_mail();
	}
	

	static var asmessenger_init= nme.Loader.load("asmessenger_init",1);
	static var send_email = nme.Loader.load("send_email",2);
	static var send_email_attachment = nme.Loader.load("send_email_attachment",5);
	static var get_language = nme.Loader.load("get_language", 0);
	static var can_send_mail = nme.Loader.load("can_send_mail", 0);
}