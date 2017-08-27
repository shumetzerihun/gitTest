#include <stdio.h>
#include <string.h>
//comment added
int  Is_palindrome(char * str1){
	int str_length;
	int i;
	str_length = strlen(str1);

	for (i = 0; i <= str_length; i++){
		if (str1[i] == str1[str_length-1]){
			str_length--;		
			continue;
		}
		return 0;
		}
	return 1;
	
}

int main(){

	char str1[30];
	printf("Enter a string for a palindrome test: ");
	scanf("%s", str1);
	int test = Is_palindrome(str1);
	
	if (test == 1)
		printf ("The string %s is a palindrome\n", str1);
	else if(test == 0)
		printf ("The string %s is not a palindrome\n", str1); 
	
	return 0;
}
