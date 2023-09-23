#include "scoreboard.h"

Scoreboard::Scoreboard() : totalScore(0) {}

void Scoreboard::addScore(const char* teamMemeber, int score){
	//Implement adding score here
	//Wyatt added to this section
	
	cout << teamMemeber << " scored " << score << " points!" << endl;

	totalScore += score;

	//checking to see if I can push
}

int Scoreboard::getTotalScore() const {
	return totalScore;
}
