package com.graspit.tictactoe;

import android.content.Intent;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.TextView;

public class GamePlay extends HomeScreen {

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
                            gameState[winningPosition[0]]!=2){

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
                    else{
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
        setContentView(R.layout.GamePlay);
    }

    public void goToHomeScreen(View view) {
        Intent gotoHomeScreen = new Intent(this, HomeScreen.class);
        startActivity(gotoHomeScreen);
    }
}
