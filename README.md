# Procedural-Horse-Race
9/14/2026

* Establish functions (advance, printLane, isWinner, main)

 __printLane Function__
* Establish variables, horseNum, horsePosition (there will be 5 horses)
* printLane function prints lanes for each horse, 12 dots with 1 dot replaced with horsePosition[i]
* TRACK LENGTH = 13;
* if loop index is equal to horse[i], replace with horseNum, else print "."
                                                                                            

 __Advance Function__
* Establish variables. horsePosition, coin
* Coin = std::rand() % 2
* if Coin == 0, don't advance. Else swap next dot in printLane array with current horsePosition
* Track current horsePosition, starting from position 0, horsePosition++ each time advance iterates

 __isWinner Function__
* winner = false
* Given a horse number and the array of horses
* If horsePosition == TRACK LENGTH, winner = true

 __Main Function__
* set keepGoing to true
* While keepGoing is true, run through each horse in an array, advance(), printLane(), check isWinner()
* Set keepGoing false if isWinner returns a value, print which horse has won, can be multiple horses.
