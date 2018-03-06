#include <string.h>
#include "task2.h"

char* reverseWords(char *in, char *out)
{
	char *first_symbols[256] = { NULL };
	char *buf_out = out, *pfirst_symbol = 0;
	int isWord = 0, counter = 0;
	if(in[strlen(in) - 1] == '\n')
		in[strlen(in) - 1] = '\0';
	while (*in)
	{
		if ((*in != ' ') && !isWord)
		{
			first_symbols[counter++] = in;
			isWord = 1;
		}else if ((*in == ' ') && isWord)
		{
			isWord = 0;
		}
		in++;
	}
	for (int i = counter-1; i >= 0; i--)
	{
		pfirst_symbol = first_symbols[i];
		while ((*pfirst_symbol != ' ') && (*pfirst_symbol != '\0'))
		{			
			*buf_out++ = *pfirst_symbol++;
		}
		if (i)
			*buf_out++ = ' '; 
		else 
			*buf_out = '\0';
	}
	
	return out;
}
