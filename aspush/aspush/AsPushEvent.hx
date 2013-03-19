package aspush;

import nme.events.Event;

class AsPushEvent extends Event
{
	
	/** Event IDs */
	public inline static var UNKNOWN_EVENT:String = "UNKNOWN EVENT"; //0 
	
	/** In App Purchase **/
	public inline static var REGISTER_TOKEN_SUCCESS:String = "etREGISTER_TOKEN_SUCCESS"; //1
	public inline static var REGISTER_TOKEN_FAILED:String = "etREGISTER_TOKEN_FAILED"; //2
	
	public var EventID:Int;
	public var code:Int;
	public var value:Int;
	public var data:String;
	public var token:String;
	
	public function new(type:String, code:Int, value:Int, data:String,token:String){
		super(type);
	}
}