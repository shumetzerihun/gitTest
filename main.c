#include <stdio.h>
#include <string.h>
#include "allFunctions.h"

int main(){

	receiveString();
	int test = isPalindrome();
	
	if (test == 1)
		printf ("The string %s is a palindrome\n", stringInput);
	else if(test == 0)
		printf ("The string %s is not a palindrome\n", stringInput); 
	
	return 0;
}
