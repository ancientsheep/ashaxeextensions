package asurlconnection;

import nme.events.EventDispatcher;
import nme.events.Event;

class AsURLConnection extends EventDispatcher
{
	//public static var objects:Array<Dynamic> = new Array(); //dispatch events to these objects
	public var initialized:Bool;
	public var succFunc:Dynamic;
	public var failFunc:Dynamic;

	public function new(sucFunc:Dynamic,faiFunc:Dynamic)
	{
		trace("AsURLConnection :: new");

		super();

		init();

		succFunc = sucFunc;
		failFunc = faiFunc;		
	}

	public function init()
	{
		trace("AsURLConnection :: init");

		//setup our event listener
		if(initialized==false)
		{
			asurlconnection_set_event_handle(externEventHandle);
			initialized = true;
		}
	}

	//our event listener
	private function externEventHandle(inEvent:Dynamic)
	{
		trace("AsURLConnection :: externEventHandle = "+inEvent);

		if(inEvent.data == "etCONNECTION_FAILED")
		{
			trace("Error: URLConnection failed.");
			failFunc();
		}

		else if(inEvent.data == "etCONNECTION_SUCCESS")
		{
			trace("Success: URL connection success. returnData = "+inEvent);
			succFunc(inEvent);
		}

		else
		{}
	}

	public function connectToURL(url)
	{
		trace("AsURLConnection : connectToURL " + url);

		asurlconnection_connect(url);
	}

	public function destroy()
	{
		succFunc = null;
		failFunc = null;

		asurlconnection_destroy();
	}


	static var asurlconnection_connect=cpp.Lib.load("asurlconnection","connect_to_url",1);
	static var asurlconnection_destroy=cpp.Lib.load("asurlconnection","asurlconnection_destroy",0);

	//event listener
	static var asurlconnection_set_event_handle = nme.Loader.load("asurlconnection_set_event_handle",1);
	
}

