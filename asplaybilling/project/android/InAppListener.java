
package util;

import android.util.Log;
import org.haxe.nme.GameActivity;
import android.content.Context;
import android.app.Activity;
import android.content.Intent;
import android.app.AlertDialog;
import android.content.Context;
import android.content.DialogInterface;
import android.os.Bundle;
import android.view.View;
import android.view.View.OnClickListener;
import android.widget.Button;
import android.net.Uri;
import java.util.List;
import java.util.ArrayList;

import util.IabHelper;
import util.IabResult;
import util.Inventory;
import util.Purchase;

public class InAppListener extends Activity
{
	private static GameActivity activity = GameActivity.getInstance();
	private static Context context = GameActivity.getContext();

	public static void alertUser(String message)
	{
		// Oh noes, there was a problem.
        AlertDialog.Builder builder = new AlertDialog.Builder(context);
		builder.setMessage(message)
		.setCancelable(false)
		.setNegativeButton("OK", new DialogInterface.OnClickListener()
		{
				public void onClick(DialogInterface dialog, int id)
				{
					dialog.cancel();
				}
		});

		AlertDialog alert = builder.create();
		alert.show();
	}

	@Override
    public void onActivityResult(int requestCode, int resultCode, Intent data) {
        alertUser("onActivity");


    }
    
}