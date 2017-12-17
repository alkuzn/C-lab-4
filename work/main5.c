#include <stdio.h>

#define N 50
#define M 50

int main()
{
	char data[N][M] = { NULL };
	char *young = 0, *old = 0;
	int min, curr, max, num_of_rel;
	min = curr = max = num_of_rel = 0;
	printf("Enter the number of your relatives:");
	scanf("%d", &num_of_rel);
	if (num_of_rel <= 0)
	{
		printf("Error: bad data.\n");
		return 1;
	}
	printf("Enter their names and ages(format: Alex 43):\n");
	int i = 0;
	while (i < num_of_rel)
	{
		printf("%d. ", i + 1);
		scanf("%s %d", data[i], &curr);
		if (curr <= 0)
		{
			printf("Error: bad data.\n");
		}
		else {
			if (max < curr)
			{
				max = curr;
				old = data[i];
			}
			if ((curr < min) || (min == 0))
			{
				min = curr;
				young = data[i];
			}
			i++;
			curr = 0;
		}
	}
	printf("Young: %s\n", young);	
	printf("Old: %s\n", old);
	return 0;
}