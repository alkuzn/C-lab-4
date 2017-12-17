#include <stdio.h>
#include "task4.h"
#include "task1.h"

#define N 10
#define M 50

int main()
{
	char text[N][M] = { 0 };
	char *str[N] = { 0 };
	FILE *fi, *fo;
	fi = fopen("input.txt", "r");
	int count = 0, lenght = 0;
	while ((count < N) && fgets(text[count], M, fi))
	{
		str[count] = text[count];
		lenght = strlen(text[count]);
		if (text[count][lenght - 1] == '\n')
			text[count][lenght - 1] = '\0';
		count++;
	}
	fclose(fi);
	lineSort(str, count);
	fo = fopen("output.txt", "w");
	printLinesToFile(str, count, fo);
	fclose(fo);
	return 0;
}