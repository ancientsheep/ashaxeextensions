package asurlconnection;

import nme.events.Event;

class AsURLConnectionEvent extends Event
{
	
	/** Event IDs */
	public inline static var UNKNOWN_EVENT:String = "UNKNOWN EVENT"; //0 
	
	/** In App Purchase **/
	public inline static var CONNECTION_SUCCESS:String = "etCONNECTION_SUCCESS"; //1
	public inline static var CONNECTION_FAILED:String = "etCONNECTION_FAILED"; //2
	
	public var EventID:Int;
	public var code:Int;
	public var value:Int;
	public var data:String;
	public var returnData:String;
	
	public function new(type:String, code:Int, value:Int, data:String,returnData:String){
		super(type);
		this.code = code;
		this.value = value;
		this.data = data;
		this.returnData = returnData;
	}
}