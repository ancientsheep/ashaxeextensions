package associal;

class AsSocial
{
	public static function share()
	{
		trace("AsSocial : share");
		associal_share();
	}

	static var associal_share = nme.Loader.load("associal_share",0);
}