#include <iostream>
#include <cstdlib>
#include <ctime>

int main(){
  std::string userName;
  int guess;
  int correct;
  int turns = 0;
  bool keepGoing = true;
  
  srand(time(NULL));
  correct = (rand() % 100) + 1;

  std::cout << "Correct answer: " << correct << std::endl;

  while (keepGoing){
    turns++;
    // ignore bad input for now...
    std::cout << turns << ": Please make a guess: ";
    std::cin >> guess;

    if (guess < correct){
      std::cout << "Too low." << std::endl;
    } else if (guess > correct){
      std::cout << "Too high." << std::endl;
    } else {
      std::cout << "You got it!" << std::endl;
      keepGoing = false;
    } // end if
  } // end while

  if (turns < 7){
    std::cout << "Great work!" << std::endl;
  } else if (turns > 7){
    std::cout << "You could do better" << std::endl;
  } else {
    std::cout << "Average performance" << std::endl;
  } // end if

  
  return 0;
} // end main

