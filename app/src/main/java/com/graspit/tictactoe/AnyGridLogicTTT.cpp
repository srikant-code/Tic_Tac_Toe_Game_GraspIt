#include<iostream>
using namespace std;

int gridRow=5;
int gridCol=5;
int index=0;

int[] gameState = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};      //2=unplayed  //total 25

int edgeLeftToRight1(int row, int col){

	index = (row*gridCol)+col;
	if((gameState[index]==0) && (gameState[index+1]==0) && (gameState[index+2]==0))
		//mark the 0 boxes
		{
			return 0;//grid2(index+1 +/- something).setImageResource(green);		//etc
		}
	else if((gameState[index]==1) && (gameState[index+1]==1) && (gameState[index+2]==1))
		//mark the 1 boxes
		{
			return 1;
		}
	//write the codes for points and time to appropriate player
			return 2;
}
int edgeRightToleft2(int row, int col){
	
	index = (row*gridCol)+col;
	if((gameState[index]==0) && (gameState[index-1]==0) && (gameState[index-2]==0))
		return 0;//mark the 0 boxes
	else if((gameState[index]==1) && (gameState[index-1]==1) && (gameState[index-2]==1))
		return 1;//mark the 1 boxes

	//write the codes for points and time to appropriate player
		return 2;
}
int edgeTopToBottom3(int row, int col){

	index = (row*gridCol)+col;
	if((gameState[index]==0) && (gameState[index+gridCol]==0) && (gameState[index+(gridCol*2)]==0))
		return 0;//mark the 0 boxes
	else if((gameState[index]==1) && (gameState[index+gridCol]==1) && (gameState[index+(gridCol*2)]==1))
		return 1;//mark the 1 boxes

	//write the codes for points and time to appropriate player
		return 2;
}
int edgeBottomToTop4(int row, int col){

	index = (row*gridCol)+col;
	if((gameState[index]==0) && (gameState[index-gridCol]==0) && (gameState[index-(gridCol*2)]==0))
		return 0;//mark the 0 boxes
	else if((gameState[index]==1) && (gameState[index-gridCol]==1) && (gameState[index-(gridCol*2)]==1))
		return 1;//mark the 1 boxes

	//write the codes for points and time to appropriate player	
		return 2;
}
int edgeDiagBLeftToTRight5(int row, int col){

	index = (row*gridCol)+col;
	if((gameState[index]==0) && (gameState[index-gridCol-1]==0) && (gameState[index-((gridCol-1)*2)]==0))
		return 0;//mark the 0 boxes
	else if((gameState[index]==1) && (gameState[index-gridCol-1]==1) && (gameState[index-((gridCol-1)*2)]==1))
		return 1;//mark the 1 boxes

	//write the codes for points and time to appropriate player	
		return 2;	
}
int edgeDiagTRightToBLeft6(int row, int col){

	index = (row*gridCol)+col;
	if((gameState[index]==0) && (gameState[index+gridCol-1]==0) && (gameState[index+((gridCol-1)*2)]==0))
		return 0;//mark the 0 boxes
	else if((gameState[index]==1) && (gameState[index+gridCol-1]==1) && (gameState[index+((gridCol-1)*2)]==1))
		return 1;//mark the 1 boxes

	//write the codes for points and time to appropriate player	
		return 2;
}
int edgeDiagBRightToTLeft7(int row, int col){

	index = (row*gridCol)+col;
	if((gameState[index]==0) && (gameState[index-(gridCol+1)]==0) && (gameState[index-((gridCol+1)*2)]==0))
		return 0;//mark the 0 boxes
	else if((gameState[index]==1) && (gameState[index-(gridCol+1)]==1) && (gameState[index-((gridCol+1)*2)]==1))
		return 1;//mark the 1 boxes

	//write the codes for points and time to appropriate player
		return 2;
}
int edgeDiagTLeftToBRight8(int row, int col){

	index = (row*gridCol)+col;
	if((gameState[index]==0) && (gameState[index+gridCol+1]==0) && (gameState[index+((gridCol+1)*2)]==0))
		return 0;//mark the 0 boxes
	else if((gameState[index]==1) && (gameState[index+gridCol+1]==1) && (gameState[index+((gridCol+1)*2)]==1))
		return 1;//mark the 1 boxes

	//write the codes for points and time to appropriate player	
		return 2;	
}
int midTopBottom9(int row, int col){

	index = (row*gridCol)+col;
	if((gameState[index]==0) && (gameState[index-gridCol]==0) && (gameState[index+gridCol]==0))
		return 0;//mark the 0 boxes
	else if((gameState[index]==1) && (gameState[index-gridCol]==1) && (gameState[index+gridCol]==1))
		return 1;//mark the 1 boxes

	//write the codes for points and time to appropriate player			
	return 2;	
}
int midLeftRight10(int row, int col){

	index = (row*gridCol)+col;
	if((gameState[index]==0) && (gameState[index+1]==0) && (gameState[index-1]==0))
		return 0;//mark the 0 boxes
	else if((gameState[index]==1) && (gameState[index+1]==1) && (gameState[index-1]==1))
		return 1;//mark the 1 boxes

	//write the codes for points and time to appropriate player		
	return 2;
}
int midDiagII11 (int row, int col){

	index = (row*gridCol)+col;
	if((gameState[index]==0) && (gameState[index+(gridCol+1)]==0) && (gameState[index-(gridCol+1)]==0))
		return 0;//mark the 0 boxes
	else if((gameState[index]==1) && (gameState[index+(gridCol+1)]==1) && (gameState[index-(gridCol+1)]==1))
		return 1;//mark the 1 boxes

	//write the codes for points and time to appropriate player		
	return 2;
}
int midDiag12(int row, int col){

	index = (row*gridCol)+col;
	if((gameState[index]==0) && (gameState[index+gridCol-1]==0) && (gameState[index-(gridCol-1)]==0))
		return 0;//mark the 0 boxes
	else if((gameState[index]==1) && (gameState[index+gridCol-1]==1) && (gameState[index-(gridCol-1)]==1))
		return 1;//mark the 1 boxes

	//write the codes for points and time to appropriate player		
	return 2;
}


int wincheck(int row, int col){
    int temp=2;
	//middle elements
	if((row != 0)||(row != (n-1))||(col != 0) || (col != (n-1)))
	{
		temp = edgeLeftToRight1(row , col);
		if(temp==2)
		temp = edgeRightToleft2(row , col);
		else if(temp==2)
		temp = edgeTopToBottom3(row , col);
		else if(temp==2)
		temp = edgeBottomToTop4(row , col);
		else if(temp==2)
		temp = edgeDiagBLeftToTRight5(row , col);
		else if(temp==2)
		temp = edgeDiagTRightToBLeft6(row , col);
		else if(temp==2)
		temp = edgeDiagBRightToTLeft7(row , col);
		else if(temp==2)
		temp = edgeDiagTLeftToBRight8(row , col);
		else if(temp==2)
		temp = midTopBottom9(row , col);
		else if(temp==2)
		temp = midLeftRight10(row , col);
		else if(temp==2)
		temp = midDiagII11(row , col);
		else if(temp==2)
		temp = midDiag12(row , col);
		else;
		return (temp);
	}
	//edge elements
	else{
	//left element
		if(col == 0)	
		{
			temp = edgeLeftToRight1(row,col);
			if(row == 0 || row == 1)			//top Left
			{	
				if(temp==2)
				temp = edgeDiagTLeftToBRight8(row,col);
				else if(temp==2)
				temp = edgeTopToBottom3(row,col);
				else;

				if(row == 1)
					if(temp==2)
					temp = midTopBottom9(row,col);	
				return (temp);
			}

			else if((row == (n-1)) || (row == (n-2))) 			//bottom left
			{
				temp = edgeBottomToTop4(row,col);
				temp = edgeDiagBLeftToTRight5(row,col);
				if(row == (n-2))
					temp = midTopBottom9(row,col);
				return (temp);
			}
			else			//middle left
			{
				temp = edgeBottomToTop4(row , col);
				temp = edgeTopToBottom3(row , col);
				temp = midTopBottom9(row , col);
				temp = edgeDiagTLeftToBRight8(row , col);
				temp = edgeDiagBLeftToTRight5(row , col);
				return (temp);
			}
		}
	//Right Element
		else if(col == (n-1))
		{
			temp = edgeRightToleft2();
			if(row == 0 || row == 1)			//top right
			{
				temp = edgeTopToBottom3(row,col);
				temp = edgeDiagTRightToBLeft6(row,col);
				if(row == 1)
					temp = midTopBottom9(row,col);	
				return (temp);
			}

			else if((row == (n-1)) || (row == (n-2))) 			//bottom right
			{
				temp = edgeBottomToTop4(row,col);
				temp = edgeDiagBRightToTLeft7(row,col);
				if(row == (n-2))
					temp = midTopBottom9(row,col);
				return (temp);
			}
			else			//middle right
			{
				temp = edgeBottomToTop4(row , col);
				temp = edgeTopToBottom3(row , col);
				temp = midTopBottom9(row , col);
				temp = edgeDiagBRightToTLeft7(row , col);
				temp = edgeDiagTRightToBLeft6(row , col);
				return (temp);
			}
		}
	//Bottom element
		else if(row == (n-1))
		{
			temp = edgeBottomToTop4(row,col);
			if(col == 0 || col == 1)			//bottom left
			{
				temp = edgeLeftToRight1(row,col);
				temp = edgeDiagBLeftToTRight5(row,col);
				if(col == 1)
					temp = midLeftRight10(row,col);	
				return (temp);
			}

			else if((col == (n-1)) || (col == (n-2))) 			//bottom right
			{
				temp = edgeRightToleft2(row,col);
				temp = edgeDiagBRightToTLeft7(row,col);
				if(col == (n-2))
					temp = midLeftRight10(row,col);
				return (temp);
			}
			else			//middle bottom
			{
				temp = edgeLeftToRight1(row , col);
				temp = edgeRightToleft2(row , col);
				temp = midLeftRight10(row , col);
				temp = edgeDiagBLeftToTRight5(row , col);
				temp = edgeDiagBRightToTLeft7(row , col);
				return (temp);
			}		
		}

	//Top element
		else if(row == 0)
		{
			temp = edgeTopToBottom3(row,col);
			if(col == 0 || col == 1)			//top left
			{
				temp = edgeLeftToRight1(row,col);
				temp = edgeDiagTLeftToBRight8(row,col);
				if(col == 1)
					temp = midLeftRight10(row,col);

				return (temp);	
			}

			else if((col == (n-1)) || (col == (n-2))) 			//top right
			{
				temp = edgeRightToleft2(row,col);
				temp = edgeDiagTRightToBLeft6(row,col);
				if(col == (n-2))
					temp = midLeftRight10(row,col);
				return (temp);
			}
			else			//middle top
			{
				temp = edgeLeftToRight1(row , col);
				temp = edgeRightToleft2(row , col);
				temp = midLeftRight10(row , col);
				temp = edgeDiagTLeftToBRight8(row , col);
				temp = edgeDiagTRightToBLeft6(row , col);
				return (temp);
			}	
		}
	}
}
