#include <iostream>

int main(){

	int i;
	int &j = i;

	// change j and i changes
	j = 5;
	std::cout << "i: " << i << std::endl;

	//change i and j changes
	i += 3;
	std::cout << "j: " << j << std::endl;

	return 0;
}
