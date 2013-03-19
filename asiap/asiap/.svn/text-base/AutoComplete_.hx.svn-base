package asiap;

import nme.events.Event;

class NXEvent extends Event{
	
	/** Event IDs */
	public inline static var UN_KNOWN_EVENT:String = "unKnownEvent"; //0 
	
	/** In App Purchase **/
	public inline static var IN_APP_PURCHASE_SUCCESS:String = "inAppPurchaseSuccess"; //1
	public inline static var IN_APP_PURCHASE_FAIL:String = "inAppPurchaseFail"; //2
	public inline static var IN_APP_PURCHASE_CANCEL:String = "inAppPurchaseCancel"; //3
	public inline static var IN_APP_PURCHASE_RESTORE_SUCCESS:String = "isAppPurchaseRestoreSuccess"; // 4
	public inline static var IN_APP_PURCHASE_RESTORE_FAIL:String = "isAppPurchaseRestoreFail"; // 5
	
	/** game center **/
	public static inline var AUTH_SUCCEEDED:String = "authSucceeded";
	public static inline var AUTH_FAILED:String = "authFailed";
	public static inline var LEADERBOARD_VIEW_OPENED:String = "leaderboardViewOpened";
	public static inline var LEADERBOARD_VIEW_CLOSED:String = "leaderboardViewClosed";
	public static inline var ACHIEVEMENTS_VIEW_OPENED:String = "achievementsViewOpened";
	public static inline var ACHIEVEMENTS_VIEW_CLOSED:String = "achievementsViewClosed";
	public static inline var SCORE_REPORT_SUCCEEDED:String = "scoreReportSucceeded";
	public static inline var SCORE_REPORT_FAILED:String = "scoreReportFailed";
	public static inline var ACHIEVEMENT_REPORT_SUCCEEDED:String = "achievementReportSucceeded";
	public static inline var ACHIEVEMENT_REPORT_FAILED:String = "achievementReportFailed";
	public static inline var ACHIEVEMENT_RESET_SUCCEEDED:String = "achievementResetSucceeded";
	public static inline var ACHIEVEMENT_RESET_FAILED:String = "achievementResetFailed";
	
	public var EventID:Int;
	public var code:Int;
	public var value:Int;
	public var data:String;
	
	public function new(type:String, code:Int, value:Int, data:String){
		super(type);
	}
}