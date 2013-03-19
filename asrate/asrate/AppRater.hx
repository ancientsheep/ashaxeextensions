package asrate;

/** App Rater */
class AppRater 
{
	
	public static function rateApp(linkshare:String)
	{
		trace("AppRater :: rateApp - "+linkshare);
		apprater_rateapp(linkshare);
	}
	
	public static function debugDialog()
	{
		apprater_debug_dialog();
	}

	public static function displayAlert(title:String,message:String)
	{
		trace("AppRater :: displayAlert - "+title+" - "+message);
		display_alert(title,message);
	}

	static var apprater_rateapp = nme.Loader.load("apprater_rateapp",1);
	static var apprater_debug_dialog = nme.Loader.load("apprater_debug_dialog",0);
	static var display_alert = nme.Loader.load("ui_alert",2);
}

