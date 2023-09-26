#include "scoreboard.h"

Scoreboard::Scoreboard() : totalScore(0) {}

void Scoreboard::addScore(const char* teamMember, int score){
	//Implement adding score here
	//Wyatt added to this section
	
	cout << teamMember << " scored " << score << " points!" << endl;

	totalScore += score;


	//checking to see if I can push

	//Adding this comment to test git pull with an up-to-date code - WH

}

int Scoreboard::getTotalScore() const {
	return totalScore;
}
