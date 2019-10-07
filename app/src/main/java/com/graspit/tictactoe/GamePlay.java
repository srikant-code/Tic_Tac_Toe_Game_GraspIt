package com.graspit.tictactoe;

import android.content.Intent;
import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;
import android.view.View;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.TextView;

/*
public class GamePlay extends AppCompatActivity {

        int activePlayer = 0;   //0=cross    1=circle

        boolean gameIsActive = true;

        int[] gameState = {2, 2, 2, 2, 2, 2, 2, 2, 2};      //2=unplayed

        int[][] winningPosition = {{0,1,2} , {3,4,5}, {6,7,8}, {0,3,6}, {1,4,7}, {2,5,8}, {0,4,8}, {2,4,6}};

        public void dropIn(View view){
            ImageView counter = (ImageView) view;

            int tappedCounter =  Integer.parseInt(counter.getTag().toString());

            System.out.println(counter.getTag().toString());
            TextView playerTurn =findViewById(R.id.playersTurn);

            if(gameState[tappedCounter]==2 && gameIsActive) {

                counter.setTranslationY(-1000f);
                gameState[tappedCounter]=activePlayer;
                if (activePlayer == 0) {
                    counter.setImageResource(R.drawable.group_7);
                    activePlayer = 1;
                    playerTurn.setText("Player Two Turn");
                }
                else {
                    counter.setImageResource(R.drawable.ellipse_2);
                    gameState[tappedCounter] = 1;
                    playerTurn.setText("Player One Turn");
                    activePlayer = 0;
                }
                counter.animate().translationYBy(1000f).setDuration(300);

                for (int[] winningPosition : winningPosition)
                {
                    if(gameState[winningPosition[0]] == gameState[winningPosition[1]] &&
                            gameState[winningPosition[1]] == gameState[winningPosition[2]] &&
                            gameState[winningPosition[0]]!=2)
                    {

                        gameIsActive= false;
                        String winner="Player Two (Taken Cricle)";
                        if(gameState[winningPosition[0]]==0){
                            winner = "Player One (Taken Cross)";
                        }

                        System.out.println("Player " + gameState[winningPosition[0]] + " has won the game");

                        TextView winnerMessage = findViewById(R.id.winnertext);

                        winnerMessage.setText(winner + " has won");

                        LinearLayout layout = findViewById(R.id.playAgainLinearLayout);

                        layout.setVisibility(View.VISIBLE);
                    }
                    else
                    {
                        boolean gameIsOver = true;
                        for(int counterState : gameState) {
                            if (counterState == 2)
                                gameIsOver = false;
                        }
                        if(gameIsOver){
                            gameIsActive=false;
                            TextView winnerMessage = findViewById(R.id.winnertext);

                            winnerMessage.setText("It's a draw");

                            LinearLayout layout = findViewById(R.id.playAgainLinearLayout);

                            layout.setVisibility(View.VISIBLE);
                        }
                    }
                }	//end of for loop
            }	//end of if condition
        }	//end of Gameplay

        public void playAgain(View view){

            gameIsActive= true;
            LinearLayout layout = findViewById(R.id.playAgainLinearLayout);

            layout.setVisibility(View.INVISIBLE);

            activePlayer = 0;   //0=cross    1=circle

            for(int i=0; i<gameState.length; i++)
                gameState[i]=2;

            android.support.v7.widget.GridLayout gridLayout = findViewById(R.id.gridLayout);

            for(int i=0; i<gridLayout.getChildCount(); i++)
                ((ImageView) gridLayout.getChildAt(i)).setImageResource(0);
        }
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_game_play);

        TextView playersTurnText = findViewById(R.id.playersTurn);
        playersTurnText.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Intent homescreen = new Intent(GamePlay.this,SettingsPanel.class);
                startActivity(homescreen);
                finish();
            }
        });
    }

}*/

//Modification

//Declare the timer 
 new CountDownTimer5(5000, 1000) {
      public void onTick(long millisUntilFinished) {
          mTextField.setText("seconds remaining\n" + millisUntilFinished / 1000);
      }

      public void onFinish() {
          mTextField.setText("done");
      }  
}.start();


 new CountDownTimer10(5000, 1000) {
      public void onTick(long millisUntilFinished) {
          mTextField.setText("seconds remaining\n" + millisUntilFinished / 1000);
      }

      public void onFinish() {
          mTextField.setText("done");
      }  
}.start();

////















public class GamePlay extends AppCompatActivity {

        int activePlayer = 0;   //0=cross    1=circle
        boolean gameIsActive = true;
        int[] gameState = {2, 2, 2, 2, 2, 2, 2, 2, 2};      //2=unplayed
        //int[][] winningPosition = {{0,1,2} , {3,4,5}, {6,7,8}, {0,3,6}, {1,4,7}, {2,5,8}, {0,4,8}, {2,4,6}};
        int totalScore0=0, totalScore1=0, temphaswon;

gridLayout.onClick()
{ ImageView counter = (ImageView) view;

    int tappedCounter =  Integer.parseInt(counter.getTag().toString());	//getTag to getrow and getcol
    /*
	int tappedEleRow =  Integer.parseInt(counter.getRow().toString());
	int tappedEleCol =  Integer.parseInt(counter.getCol().toString());
	*/

	timerpoint = timerPoints();		//after pausing the time return and 
	temphaswon = wincheck(tappedEleRow, tappedEleCol);	//i.e player 1 or 0


    System.out.println(counter.getTag().toString());
    TextView playerTurn =findViewById(R.id.playersTurn);

    if(gameState[tappedEleRow*(gridCol)+tappedEleCol]==2 && gameIsActive) {

        counter.setTranslationY(-1000f);
        gameState[tappedEleRow*(gridCol)+tappedEleCol]=activePlayer;
        if (activePlayer == 0) {
        	if(temphaswon != -1)
        		totalScore0 += timerpoint + 1000;		//or somthing else
            counter.setImageResource(R.drawable.group_7);
            activePlayer = 1;
            playerTurn.setText(PlayerName + " Two Turn");		//player1name to the stored arraylist
        }
        else {
        	if(temphaswon != -1)
        		totalScore1 += timerpoint + 1000;		//or somthing else
            counter.setImageResource(R.drawable.ellipse_2);
            gameState[tappedEleRow*(gridCol)+tappedEleCol] = 1;	//I think this statement is redundant
            playerTurn.setText("Player One Turn");
            activePlayer = 0;
        }
        counter.animate().translationYBy(1000f).setDuration(300);

            	boolean gameIsOver = true;
                for(int counterState : gameState) {
                    if (counterState == 2)
                        gameIsOver = false;
                }
          		
                if(gameIsOver){
                    gameIsActive= false;
                    String winner="Player Two (Taken Cricle)";
                    if(totalScore0>totalScore1){
                        winner = "Player One (Taken Cross)";
                    }

                    System.out.println("Player " + haswon + " has won the game");
                    TextView winnerMessage = findViewById(R.id.winnertext);			//Add some more things
                    winnerMessage.setText(winner + " has won");						//showResult() saveResult() updateLearderBoard()
                    LinearLayout layout = findViewById(R.id.playAgainLinearLayout);
                    layout.setVisibility(View.VISIBLE);
                }
                else if(totalScore0=totalScore1){
					//Add some more things
                    TextView winnerMessage = findViewById(R.id.winnertext);		//showResult() saveResult() updateLearderBoard()
                    winnerMessage.setText("It's a draw");
                    LinearLayout layout = findViewById(R.id.playAgainLinearLayout);
                    layout.setVisibility(View.VISIBLE);
                }
	}
}


        public void playAgain(View view){

            gameIsActive= true;
            LinearLayout layout = findViewById(R.id.playAgainLinearLayout);

            layout.setVisibility(View.INVISIBLE);

            activePlayer = 0;   //0=cross    1=circle

            for(int i=0; i<gameState.length; i++)
                gameState[i]=2;

            android.support.v7.widget.GridLayout gridLayout = findViewById(R.id.gridLayout);

            for(int i=0; i<gridLayout.getChildCount(); i++)
                ((ImageView) gridLayout.getChildAt(i)).setImageResource(0);
}

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_game_play);

        TextView playersTurnText = findViewById(R.id.playersTurn);
        playersTurnText.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Intent homescreen = new Intent(GamePlay.this,SettingsPanel.class);
                startActivity(homescreen);
                finish();
            }
        });
                //All intents during gameplay
    }


/////
start the timer and pause the timer when the player clicks the view.

public int timerPoints(){
	gridLayout.onClick(){
		pause timer;
		int timerpoints = millisecond left * 0.8;
		return timerpoints;
}


