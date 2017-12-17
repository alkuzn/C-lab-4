#include <stdio.h>
#include "task2.h"

#define M 50

int main()
{
	char *str[M], *str_out[M];
	printf("Enter a string: ");
	fgets(str, M, stdin);
	printf("Result: %s\n", reverseWords(str, str_out));
	return 0;
}