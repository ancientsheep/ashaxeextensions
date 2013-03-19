package ;

import flash.Lib;
import flash.events.MouseEvent;
import hxgk.Hxgk;
import flash.display.Sprite;
import flash.text.TextField;

/** Leaderboard Sample */
class Sample extends Sprite
{
	//
	// Definitions
	//
	
	/** Leaderboard Category (You set this when setting up game Center in iTunes Connect) */
	private static inline var LEADERBOARD_CATEGORY:String="1";
	
	/** Achievement Id */
	private static inline var ACHIEVEMENT_ID:String="1_Tap";
	
	//
	// Instance Variables
	//
	
	/** Score */
	private var score:Int;
	
	/** Score Text */
	private var txtScore:TextField;
	
	/** UI Offset */
	private var uiOffset:Float;
	
	/** Initial Auth Button */
	private var btnAuth:TextButton;
	
	//
	// Public Methods
	//
	
	/** Main Entry Point */
	public static function main()
	{
		Lib.current.stage.addChild(new Sample());
	}
	
	/** New Sample */
	public function new()
	{
		super();
		score=0;
		trace("Sample initialized.  Attempting Game Center Connection.");
		var gcAvailable:Bool=Hxgk.init();
		if (!gcAvailable)
		{
			trace("Game Center not available on this device.");
			return;
		}
		btnAuth=new TextButton("AUTHORIZE",onTryAuthorize);
		addChild(btnAuth);		
	}
	
	//
	// Events
	//
	
	/** On Auth Changed */
	private function onAuthChanged(authorized:Bool):Void
	{
		trace("AUTH STATE CHANGED:"+authorized);
		if (authorized && btnAuth!=null)
		{
			removeChild(btnAuth);
			btnAuth=null;
			createUI();
		}
	}
	
	//
	// Implementation
	//
	
	/** Create UI */
	private function createUI():Void
	{
		txtScore=new TextField();
		txtScore.selectable=false;
		txtScore.mouseEnabled=false;
		txtScore.text="SCORE:"+score;
		txtScore.width=500;
		txtScore.height=txtScore.textHeight;
		addChild(txtScore);
		
		uiOffset=txtScore.y+txtScore.height;
		addButton("Increase Score",onIncreaseScore);
		addButton("Submit Score",onSubmitScore);
		addButton("Show Leaderboard",onShowLeaderboard);
		addButton("Win Achievement",onWinAchievement);
		addButton("Show Achievements",onShowAchievements);
		addButton("Reset Achievements",onResetAchievements);
	}
	
	/** Add Button */
	private function addButton(label:String,cb:Void->Void):Void
	{
		var btn:TextButton=new TextButton(label,cb);
		btn.y=uiOffset;
		uiOffset+=(btn.height*1.5);
		addChild(btn);
	}
		
	
	//
	// Events
	//
	
	/** On Try Authorize */
	private function onTryAuthorize():Void
	{
		Hxgk.authenticateLocalUser(onAuthChanged);
	}
	
	/** On Increase Score */
	private function onIncreaseScore():Void
	{
		score++;
		txtScore.text="SCORE:"+score;
	}
	
	/** On Show Achievements */
	private function onShowAchievements():Void
	{
		Hxgk.showAchievements();
	}
	
	/** On Show Leaderboard */
	private function onShowLeaderboard():Void
	{
		Hxgk.showLeaderboardForCategory(LEADERBOARD_CATEGORY);
	}
	
	/** On Submit Score */
	private function onSubmitScore():Void
	{
		Hxgk.reportScoreForCategory(score,LEADERBOARD_CATEGORY);
	}
	
	/** On Win Achievement */
	private function onWinAchievement():Void
	{
		Hxgk.reportAchievement(ACHIEVEMENT_ID,100.0);
	}
	
	/** On Reset */
	private function onResetAchievements():Void
	{
		Hxgk.resetAchievements();
	}
}

/** Text Button */
class TextButton extends Sprite
{
	/** Callback to execute on press */
	private var cb:Void->Void;
	
	/** Create New TextButton */
	public function new(label:String,cb:Void->Void)
	{
		super();
		this.cb=cb;
		var tf:TextField=new TextField();
		this.mouseChildren=false;
		tf.selectable=false;
		tf.text=label;
		tf.width=tf.textWidth;
		tf.height=tf.textHeight;
		graphics.moveTo(0,0);
		graphics.beginFill(0x666666);
		graphics.drawRect(0,0,tf.width+5,tf.height+9);
		graphics.endFill();
		addChild(tf);
		
		addEventListener(MouseEvent.MOUSE_UP,onPress);
	}
	
	/** Press Handler */
	private function onPress(e:MouseEvent):Void
	{
		cb();
	}
}
		
