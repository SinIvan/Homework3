#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j, length, breadth;

	printf("Enter number of length: ");
	scanf_s("%d", &length);
	printf("Enter number of breadth: ");
	scanf_s("%d", &breadth);

	for (i = 1; i <= length; i++)
	{
		for (j = 1; j <= breadth; j++)
		{
			if ((i == 1) || (i == length) || (j == 1) || (j == breadth))
			{
				printf("+");
			}
			else
			{
				printf(" ");
			}
		}

		printf("\n");
	}

	system("pause");
	return 0;
}