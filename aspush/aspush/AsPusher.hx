package aspush;

import nme.events.EventDispatcher;
import nme.events.Event;

class AsPusher extends EventDispatcher
{
	public static var registered:Bool;
	public static var initialized:Bool;
	//public static var objects:Array<Dynamic> = new Array(); //dispatch events to these objects

	public var succFunc:Dynamic;
	public var failFunc:Dynamic;

	public function new(sucFunc:Dynamic,faiFunc:Dynamic)
	{
		trace("AsPusher :: new");

		super();

		succFunc = sucFunc;
		failFunc = faiFunc;
		//objects.push(this);		
	}

	public function destroy()
	{
		trace("AsPusher :: destroy");
		succFunc = null;
		failFunc = null;
	}

	public function init()
	{
		trace("AsPusher :: init");

		//setup our event listener
		if(initialized==false)
		{
			aspush_set_event_handle(externEventHandle);
			initialized = true;
		}
	}

	//our event listener
	private function externEventHandle(inEvent:Dynamic)
	{
		trace("aspush :: externEventHandle = "+inEvent);

		if(inEvent.data == "etREGISTER_TOKEN_FAILED")
		{
			trace("Error: Register push notifications failed.");
			failFunc();
		}

		else if(inEvent.data == "etREGISTER_TOKEN_SUCCESS")
		{
			trace("Success: Registered for remote notifications. Token = "+inEvent.token);
			succFunc(inEvent.token);
		}

		else
		{}

		//dispatch events - bubble those suckas
		/*for (i in 0...objects.length){
			trace("object - "+objects[i]+" - dispatching event - "+inEvent);
			objects[i].dispatchEvent("etREGISTER_TOKEN_SUCCESS");
		}*/
	}

	public function registerForRemoteNotifications()
	{
		trace("AsPusher : registerForRemoteNotifications");

		if (registered==true)
		{
			throw "AsPush already registerd for remote notifications.";
			return;
		}

		aspush_register();
		registered = true;
	}

	public function scheduleLocalPush()
	{
		trace("AsPusher : scheduleLocalPush");
		aspush_schedule_local();
	}
	
	public function setBadgeNumber(num:Int)
	{
		trace("AsPusher : setBadgeNumber -"+num);
		aspush_set_badge_num(num);
	}

	static var aspush_register=cpp.Lib.load("aspush","register_for_remote",0);
	static var aspush_set_badge_num=cpp.Lib.load("aspush","aspush_set_badge_num",1);
	static var aspush_schedule_local=cpp.Lib.load("aspush","aspush_schedule_local",0);

	//event listener
	static var aspush_set_event_handle = nme.Loader.load("aspush_set_event_handle",1);
	
}

