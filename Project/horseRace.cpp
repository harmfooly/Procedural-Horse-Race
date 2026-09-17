// Algorithm is in README.md

#include <iostream>
#include <ctime>
#include <cstdlib>


const int TRACK_LENGTH = 12;
const int HORSE_NUM = 5;


void advance(int horseNum, int* horses){
	int coinflip = (rand() % 2); // 50/50 chance of advancing a horse
	if (coinflip == 1) {
		horses[horseNum]++;
	}
} // end advance

void printLane(int horseNum, int* horses){
        for (int j = 0; j < TRACK_LENGTH + 1; j++) {
            if (j == horses[horseNum]) {
		    std::cout << horseNum; // replaces . with the horse number 
      } else {
	      std::cout << ". ";
            } // end if
        } // end for
std::cout << std::endl; // adds spacing after each lane
    } // end printLane

bool isWinner(int horseNum, int* horses){ 
	bool winner = false;
	if (horses[horseNum] >=  TRACK_LENGTH) {
		winner = true; // just checks if the position of the horse is 
	}
	return winner;
} // end isWinner

int main(){
	srand(time(NULL));
	bool keepGoing = true;
	int horses[HORSE_NUM] = {}; // declares the array of horses with 5 horses total
	int turns = 0;
	while (keepGoing) {
		turns++;
                std::cout << "\n PRESS ENTER TO CONTINUE. " << std::endl;
                std::cin.get();

		for (int hn = 0; hn < HORSE_NUM; hn++) {
			 printLane(hn, horses);
                         advance(hn, horses);
			if (isWinner(hn, horses)) {
				keepGoing = false;
				std::cout << "\nHorse " << hn << " wins!" << std::endl;
				std::cout << "It took " << turns << " turns to get here!" << std::endl;
			} // end if
		} // end for
		std::cout << "\n---------------------------------" << std::endl;
	} // end while
	return 0;
} // end main
