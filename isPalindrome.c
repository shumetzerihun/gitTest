#include <stdio.h>
#include <string.h>
#include "allFunctions.h"


int isPalindrome(){
	int str_length;
	int i;
	str_length = strlen(stringInput);

	for (i = 0; i <= str_length; i++){
		if (stringInput[i] == stringInput[str_length-1]){
			str_length--;		
			continue;
		}
		return 0;
		}
	
	return 1;	
}


