package asiap;

import nme.events.EventDispatcher;
import nme.events.Event;

class NXObject extends EventDispatcher{
	
	public static var eventProxy:EventDispatcher = new EventDispatcher();
	public static var objects:Array<NXObject> = new Array();
	public static var eventHandleInit:Bool = false;

	public function new(){
        super();
		objects.push(this);
		if(!eventHandleInit){
			initEventHandle();
			eventHandleInit = true;
		}
	}
	
	private static function initEventHandle(){
		trace("asiap :: initEventHandle");
		iap_set_event_handle(externEventHandle);
	}
	
	private static function externEventHandle(inEvent:Dynamic){
		
		trace("asiap :: externEventHandle");

		var type:Int = Std.int(Reflect.field( inEvent, "type" ) );
		var code:Int = Std.int(Reflect.field( inEvent, "code" ) );
		var value:Int = Std.int(Reflect.field( inEvent, "value" ) );
		var data:String = Std.string(Reflect.field( inEvent, "data" ) );
		var event:NXEvent;
		switch(type){
			case  0: event = new NXEvent(NXEvent.UN_KNOWN_EVENT, code, value, data);
			
			//in app purchase
			case  1: event = new NXEvent(NXEvent.IN_APP_PURCHASE_SUCCESS, code, value, data);
			case  2: event = new NXEvent(NXEvent.IN_APP_PURCHASE_FAIL, code, value, data);
			case  3: event = new NXEvent(NXEvent.IN_APP_PURCHASE_CANCEL, code, value, data);
			
			//gamecenter
			case  4: event = new NXEvent(NXEvent.AUTH_SUCCEEDED, code, value, data);
			case  5: event = new NXEvent(NXEvent.AUTH_FAILED, code, value, data);
			case  6: event = new NXEvent(NXEvent.LEADERBOARD_VIEW_OPENED, code, value, data);
			case  7: event = new NXEvent(NXEvent.LEADERBOARD_VIEW_CLOSED, code, value, data);
			case  8: event = new NXEvent(NXEvent.ACHIEVEMENTS_VIEW_OPENED, code, value, data);
			case  9: event = new NXEvent(NXEvent.ACHIEVEMENTS_VIEW_CLOSED, code, value, data);
			case  10: event = new NXEvent(NXEvent.SCORE_REPORT_SUCCEEDED, code, value, data);
			case  11: event = new NXEvent(NXEvent.SCORE_REPORT_FAILED, code, value, data);
			case  12: event = new NXEvent(NXEvent.ACHIEVEMENT_REPORT_SUCCEEDED, code, value, data);
			case  13: event = new NXEvent(NXEvent.ACHIEVEMENT_REPORT_FAILED, code, value, data);
			case  14: event = new NXEvent(NXEvent.ACHIEVEMENT_RESET_SUCCEEDED, code, value, data);
			case  15: event = new NXEvent(NXEvent.ACHIEVEMENT_RESET_FAILED, code, value, data);
			case  16: event = new NXEvent(NXEvent.IN_APP_PURCHASE_RESTORE_SUCCESS, code, value, data);
			case  17: event = new NXEvent(NXEvent.IN_APP_PURCHASE_RESTORE_FAIL, code, value, data);
			default: event = new NXEvent(NXEvent.UN_KNOWN_EVENT, code, value, data);
		}
		
		//to do
		for (i in 0...objects.length){
			objects[i].dispatchEvent(event);
		}
		
	}
	
	static var iap_set_event_handle = nme.Loader.load("iap_set_event_handle",1);
	
}
