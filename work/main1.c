#include <stdio.h>
#include "task1.h"

#define N 10
#define M 50

int main()
{
	char text[N][M] = { 0 };
	char *str[N] = { 0 };
	;
	int count = 0;
	puts("Enter lines");
	while ((count < N) && (*fgets(text[count], M, stdin) != '\n'))
	{
		str[count] = text[count++];
	}
	
	lineSort(str, count);
	puts("Result:");
	printLines(str, count);
	return 0;
}