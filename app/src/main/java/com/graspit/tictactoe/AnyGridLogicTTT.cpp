#include<iostream>
using namespace std;

int gridRow=5;
int gridCol=5;
int index=0;

int[] gameState = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};      //2=unplayed  //total 25

void edgeLeftToRight1(int row, int col){

	index = (row*gridCol)+col;
	if((gameState[index]==0) && (gameState[index+1]==0) && (gameState[index+2]==0))
		//mark the 0 boxes
		{
			;
		}
	else if((gameState[index]==1) && (gameState[index+1]==1) && (gameState[index+2]==1))
		//mark the 1 boxes
		{
			;
		}
	//write the codes for points and time to appropriate player
}
void edgeRightToleft2(int row, int col){
	
	index = (row*gridCol)+col;
	if((gameState[index]==0) && (gameState[index-1]==0) && (gameState[index-2]==0))
		;//mark the 0 boxes
	else if((gameState[index]==1) && (gameState[index-1]==1) && (gameState[index-2]==1))
		;//mark the 1 boxes

	//write the codes for points and time to appropriate player
}
void edgeTopToBottom3(int row, int col){

	index = (row*gridCol)+col;
	if((gameState[index]==0) && (gameState[index+gridCol]==0) && (gameState[index+(gridCol*2)]==0))
		;//mark the 0 boxes
	else if((gameState[index]==1) && (gameState[index+gridCol]==1) && (gameState[index+(gridCol*2)]==1))
		;//mark the 1 boxes

	//write the codes for points and time to appropriate player
}
void edgeBottomToTop4(int row, int col){

	index = (row*gridCol)+col;
	if((gameState[index]==0) && (gameState[index-gridCol]==0) && (gameState[index-(gridCol*2)]==0))
		;//mark the 0 boxes
	else if((gameState[index]==1) && (gameState[index-gridCol]==1) && (gameState[index-(gridCol*2)]==1))
		;//mark the 1 boxes

	//write the codes for points and time to appropriate player	
}
void edgeDiagBLeftToTRight5(int row, int col){

	index = (row*gridCol)+col;
	if((gameState[index]==0) && (gameState[index-gridCol-1]==0) && (gameState[index-((gridCol-1)*2)]==0))
		;//mark the 0 boxes
	else if((gameState[index]==1) && (gameState[index-gridCol-1]==1) && (gameState[index-((gridCol-1)*2)]==1))
		;//mark the 1 boxes

	//write the codes for points and time to appropriate player		
}
void edgeDiagTRightToBLeft6(int row, int col){

	index = (row*gridCol)+col;
	if((gameState[index]==0) && (gameState[index+gridCol-1]==0) && (gameState[index+((gridCol-1)*2)]==0))
		;//mark the 0 boxes
	else if((gameState[index]==1) && (gameState[index+gridCol-1]==1) && (gameState[index+((gridCol-1)*2)]==1))
		;//mark the 1 boxes

	//write the codes for points and time to appropriate player	
}
void edgeDiagBRightToTLeft7(int row, int col){

	index = (row*gridCol)+col;
	if((gameState[index]==0) && (gameState[index-(gridCol+1)]==0) && (gameState[index-((gridCol+1)*2)]==0))
		;//mark the 0 boxes
	else if((gameState[index]==1) && (gameState[index-(gridCol+1)]==1) && (gameState[index-((gridCol+1)*2)]==1))
		;//mark the 1 boxes

	//write the codes for points and time to appropriate player
}
void edgeDiagTLeftToBRight8(int row, int col){

	index = (row*gridCol)+col;
	if((gameState[index]==0) && (gameState[index+gridCol+1]==0) && (gameState[index+((gridCol+1)*2)]==0))
		;//mark the 0 boxes
	else if((gameState[index]==1) && (gameState[index+gridCol+1]==1) && (gameState[index+((gridCol+1)*2)]==1))
		;//mark the 1 boxes

	//write the codes for points and time to appropriate player		
}
void midTopBottom9(int row, int col){

	index = (row*gridCol)+col;
	if((gameState[index]==0) && (gameState[index-gridCol]==0) && (gameState[index+gridCol]==0))
		;//mark the 0 boxes
	else if((gameState[index]==1) && (gameState[index-gridCol]==1) && (gameState[index+gridCol]==1))
		;//mark the 1 boxes

	//write the codes for points and time to appropriate player			
}
void midLeftRight10(int row, int col){

	index = (row*gridCol)+col;
	if((gameState[index]==0) && (gameState[index+1]==0) && (gameState[index-1]==0))
		;//mark the 0 boxes
	else if((gameState[index]==1) && (gameState[index+1]==1) && (gameState[index-1]==1))
		;//mark the 1 boxes

	//write the codes for points and time to appropriate player	
}
void midDiagII11 (int row, int col){

	index = (row*gridCol)+col;
	if((gameState[index]==0) && (gameState[index+(gridCol+1)]==0) && (gameState[index-(gridCol+1)]==0))
		;//mark the 0 boxes
	else if((gameState[index]==1) && (gameState[index+(gridCol+1)]==1) && (gameState[index-(gridCol+1)]==1))
		;//mark the 1 boxes

	//write the codes for points and time to appropriate player	
}
void midDiag12(int row, int col){

	index = (row*gridCol)+col;
	if((gameState[index]==0) && (gameState[index+gridCol-1]==0) && (gameState[index-(gridCol-1)]==0))
		;//mark the 0 boxes
	else if((gameState[index]==1) && (gameState[index+gridCol-1]==1) && (gameState[index-(gridCol-1)]==1))
		;//mark the 1 boxes

	//write the codes for points and time to appropriate player		
}


void callingStructure(){

	//middle elements
	if((row != 0)||(row != (n-1))||(col != 0) || (col != (n-1)))
	{
		edgeLeftToRight1(row , col);
		edgeRightToleft2(row , col);
		edgeTopToBottom3(row , col);
		edgeBottomToTop4(row , col);
		edgeDiagBLeftToTRight5(row , col);
		edgeDiagTRightToBLeft6(row , col);
		edgeDiagBRightToTLeft7(row , col);
		edgeDiagTLeftToBRight8(row , col);
		midTopBottom9(row , col);
		midLeftRight10(row , col);
		midDiagII11(row , col);
		midDiag12(row , col);
	}
	//edge elements
	else{
	//left element
		if(col == 0)	
		{
			edgeLeftToRight1(row,col);
			if(row == 0 || row == 1)			//top Left
			{
				edgeDiagTLeftToBRight8(row,col);
				edgeTopToBottom3(row,col);
				if(row == 1)
					midTopBottom9(row,col);	
			}

			else if((row == (n-1)) || (row == (n-2))) 			//bottom left
			{
				edgeBottomToTop4(row,col);
				edgeDiagBLeftToTRight5(row,col);
				if(row == (n-2))
					midTopBottom9(row,col);
			}
			else			//middle left
			{
				edgeBottomToTop4(row , col);
				edgeTopToBottom3(row , col);
				midTopBottom9(row , col);
				edgeDiagTLeftToBRight8(row , col);
				edgeDiagBLeftToTRight5(row , col);
			}
		}
	//Right Element
		else if(col == (n-1))
		{
			edgeRightToleft2();
			if(row == 0 || row == 1)			//top right
			{
				edgeTopToBottom3(row,col);
				edgeDiagTRightToBLeft6(row,col);
				if(row == 1)
					midTopBottom9(row,col);	
			}

			else if((row == (n-1)) || (row == (n-2))) 			//bottom right
			{
				edgeBottomToTop4(row,col);
				edgeDiagBRightToTLeft7(row,col);
				if(row == (n-2))
					midTopBottom9(row,col);
			}
			else			//middle right
			{
				edgeBottomToTop4(row , col);
				edgeTopToBottom3(row , col);
				midTopBottom9(row , col);
				edgeDiagBRightToTLeft7(row , col);
				edgeDiagTRightToBLeft6(row , col);
			}
		}
	//Bottom element
		else if(row == (n-1))
		{
			edgeBottomToTop4(row,col);
			if(col == 0 || col == 1)			//bottom left
			{
				edgeLeftToRight1(row,col);
				edgeDiagBLeftToTRight5(row,col);
				if(col == 1)
					midLeftRight10(row,col);	
			}

			else if((col == (n-1)) || (col == (n-2))) 			//bottom right
			{
				edgeRightToleft2(row,col);
				edgeDiagBRightToTLeft7(row,col);
				if(col == (n-2))
					midLeftRight10(row,col);
			}
			else			//middle bottom
			{
				edgeLeftToRight1(row , col);
				edgeRightToleft2(row , col);
				midLeftRight10(row , col);
				edgeDiagBLeftToTRight5(row , col);
				edgeDiagBRightToTLeft7(row , col);
			}		
		}

	//Top element
		else if(row == 0)
		{
			edgeTopToBottom3(row,col);
			if(col == 0 || col == 1)			//top left
			{
				edgeLeftToRight1(row,col);
				edgeDiagTLeftToBRight8(row,col);
				if(col == 1)
					midLeftRight10(row,col);	
			}

			else if((col == (n-1)) || (col == (n-2))) 			//top right
			{
				edgeRightToleft2(row,col);
				edgeDiagTRightToBLeft6(row,col);
				if(col == (n-2))
					midLeftRight10(row,col);
			}
			else			//middle top
			{
				edgeLeftToRight1(row , col);
				edgeRightToleft2(row , col);
				midLeftRight10(row , col);
				edgeDiagTLeftToBRight8(row , col);
				edgeDiagTRightToBLeft6(row , col);
			}	
		}
	}
}




int main(){


	return 0;
}