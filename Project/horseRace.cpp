// Algorithm is in README.md

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>


const int TRACK_LENGTH = 12;
const int HORSE_NUM = 5;



void advance(int horseNum, int* horses){
	int coin = std::rand() % 2;
	if (coin == 1) {
		horses[horseNum]++;
	}
} // end advance

void printLane(int horseNum, int* horses){
        for (int j = 0; j < TRACK_LENGTH; j++) {
            if (j == horses[horseNum]) {
		    std::cout << horseNum;
      } else {
	      std::cout << ".";
            } // end if
        } // end for
    } // end printLane

bool isWinner(int horseNum, int* horses){
	bool winner = false;
	if (horses[horseNum] > TRACK_LENGTH) {
		winner = true;
	}
	return winner;
} // end isWinner

int main(){
	bool keepGoing = true;
	int horses[HORSE_NUM] = {0};
	int turn;

	while (keepGoing) {
		std::cout << "\n PRESS ANYTHING TO CONTINUE. " << std::endl;
                std::cin >> turn;	
		for (int hn = 0; hn < HORSE_NUM; hn++) {
			printLane(hn, horses);
			if (isWinner(hn, horses)) {
				keepGoing = false;
				std::cout << "Horse " << hn << " wins!" << std::endl;
			} // end if
		} // end for
	} // end while
	return 0;
} // end main
