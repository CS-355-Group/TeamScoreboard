#include "scoreboard.h"

Scoreboard::Scoreboard() : totalScore(0) {}

void Scoreboard::addScore(const char* teamMemeber, int score){
	//Implement adding score here
	//Wyatt added to this section
	
	cout << teamMemeber << " scored " << score << " points!" << endl;

	totalScore += score;

	//Adding this comment to test git pull with an up-to-date code - WH
}

int Scoreboard::getTotalScore() const {
	return totalScore;
}
