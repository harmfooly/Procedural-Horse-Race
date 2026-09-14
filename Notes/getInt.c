#include <stdio.h>

int main(){
	int a = getInt("Integer a: ");
	int b = getInt("Integer b: ");
}

int getInt(char* prompt){
	int result = 0;
	int keepGoing = TRUE;
	while (keepGoing){
		printf("%s", prompt);
		int correctScans = scanf("%d", &result);
		if (correctScans == 1){
			keepGoing = FALSE;
			flushBuffer();
		} else {
			printf("Invalid input. try again. \n");
			flushBuffer();
		}
	}
	 return result;
} // end getInt
  

// Clean any extraneous data after the epxted input
void flushBuffer(){
	scanf("%*[\n]");
	getchar();
} // end flushBugger
