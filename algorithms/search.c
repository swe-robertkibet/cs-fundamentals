#include <stdio.h>
#include <cs50.h>

int main(void)
{
	int numbers[] = {20, 500, 10, 4, 100, 1, 40};

	int n = get_int("Number: ");

	for (int i = 0; i < 7; i++)
	{
		if(numbers[i] == n)
		{
			printf("Number Found at index %i:\n", i);
			return 0;
		}

	}
	printf("Not Found\n");
	return 1;
}