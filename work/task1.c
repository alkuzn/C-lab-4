#include "task1.h"
#include <stdio.h>
#include <string.h>

void lineSort(char *str[], int size)
{
	int i = 0;
	char *buf;
	for (i = 0; i < size; ++i)
	{
		for (int y = i + 1; y < size; ++y)
		{
			if (strlen(str[y]) < strlen(str[i]))
			{
				buf = str[i];
				str[i] = str[y];
				str[y] = buf;
			}
		}
	}
}

void printLines(const char *str[], int size)
{
	for (int i = 0; i < size; ++i)
	{	
		printf(str[i]);
	}
}