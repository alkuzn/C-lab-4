#include <stdio.h>
#include <string.h>
#include "task3.h"

#define LENGHT 256

int main()
{
	char str[LENGHT];
	printf("Enter a string:");
	fgets(str, LENGHT, stdin);
	str[strlen(str) - 1] = '\0';
	printf("%s\n", isPalindrome(str) ? "Palindrome" : "Not palindrome");
	return 0;
}