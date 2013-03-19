Haxe Google Analytics

Version 1.0 supports Google Analytics with iOS target (Android target coming!).


iOS Target:

1) Add Google Analytics library to your nmml <haxelib name="ganalytics"/>
2) Import ganalytics (import ganalytics.GAnalytics;), start tracking (GAnalytics.startTracker("UA-3286161-48",10);
	- First parameter is your Google property id
	- Second parameter is the number of seconds before trying to post analytics to google (i.e. 10 = every 10 seconds try to post latest analytics to google server)
3) Build for iOS. Exports / Bin folder should include ga_libs folder. Drag and drop directory inside your Xcode project
4) Add "libsqlite3.0.dylib" Framework (include.nmml doesn't seem to currently include support for sqlite framework yet) and run!