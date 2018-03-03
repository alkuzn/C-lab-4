#include <string.h>
#include "task3.h"

int isPalindrome(char *str)
{
	char *end = str + (strlen(str) - 2);
	while (str < end)
	{
		if (*str++ != *end--)
				return 0;
	}
	return 1;
}