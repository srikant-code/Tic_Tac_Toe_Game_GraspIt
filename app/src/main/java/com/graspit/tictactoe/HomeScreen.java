package com.graspit.tictactoe;

import android.content.Intent;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;

public class HomeScreen extends MainActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_home_screen);
    }

    public void goToHomeScreen(View view) {
        Intent gotoHomeScreen = new Intent(this, HomeScreen.class);
        startActivity(gotoHomeScreen);
    }

    public void goToSettings(View view) {
        Intent gotoSettings = new Intent(this,SettingsPanel.class);
        startActivity(gotoSettings);
    }

    public void mainActivity(View view) {
        Intent gotoMainActivity = new Intent(this,MainActivity.class);
        startActivity(gotoMainActivity);
    }
}
