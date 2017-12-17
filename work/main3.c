#include <stdio.h>
#include "task3.h"

#define LENGHT 256

int main()
{
	char *str[LENGHT];
	printf("Enter a string:");
	fgets(str, LENGHT, stdin);
	printf("%s\n", isPalindrome(str) ? "Palindrome" : "Not palindrome");
	return 0;
}