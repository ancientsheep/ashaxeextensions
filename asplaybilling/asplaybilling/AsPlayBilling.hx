package asplaybilling;

import nme.JNI;

class AsPlayBilling 
{
	private static var jni_test:Dynamic;

	public static function setupIAP()
	{
		trace("AsGoogleBilling :: setupIAP called.");

		jni_test = JNI.createStaticMethod( "Test", "setupIAP", "()V");
		//jni_test();
		trace(jni_test());		
	}
}

