#include <iostream>
#include "scoreboard.h"

int main(){
	Scoreboard scoreboard;

	//Implement your menu-driven program here
	//Prompt the user to add score and display the total score

	scoreboard.addScore("A", 50);
	scoreboard.addScore("B", 75);
	scoreboard.addScore("C", 60);

        //display the total score 
	cout<<"Total score":<<scoreboard.getTotalScore()<<endl;
	
	return 0;
}
