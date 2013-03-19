/**
 *  2011-3-3 Yann
 *  please purchase a product every time.
 */
package asiap; 


class InAppPurchase extends NXObject
{
	
	private static var instance:InAppPurchase;
	
	private function new(){
		super();
		iap_init();
	}
	
	public static function getInstance():InAppPurchase{
		if(instance == null){
			instance = new InAppPurchase();
		}	
		return instance;
	}
	
	public function canPurchase():Bool{

		var			response:Bool = iap_can_purchase();

		trace("asiap :: canPurchase - "+response);

		return iap_can_purchase();
	}
	
	public function purchase(productID:String):Void{

		trace("asipa :: purchase - "+productID);

		iap_purchase(productID);
	}

	public function displayMessage(title:String, message:String):Void {

		trace("asaip :: display message -" + title + ' - ' + message);

		iap_display_message(title, message);
	}

	public function restoreTransaction():Void {

		trace("asipa :: restore transaction");

		iap_restore_transaction();		
	}
	
	public function destroy():Void{
		instance = null;
		iap_release();
	}
	
	static var iap_init = nme.Loader.load("iap_init",0);
	static var iap_purchase = nme.Loader.load("iap_purchase",1);
	static var iap_can_purchase = nme.Loader.load("iap_can_purchase",0);
	static var iap_release = nme.Loader.load("iap_release",0);
	static var iap_restore_transaction = nme.Loader.load("iap_restore_transaction",0);

	static var iap_display_message = nme.Loader.load("iap_display_message", 2);
}