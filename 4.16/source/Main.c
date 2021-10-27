#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	unsigned int row; //row counter
	unsigned int col; //column counter
	unsigned int space; //space counter

	//Pattern A, loop 10 times for rows
	for (row = 1; row <= 10; ++row)
	{
		//print row asterisks
		for (col = 1; col <= row; ++col)
		{
			printf("%s", "*");
		}//end for

		puts("");
	}// end for

	puts("");

	// Pattern B, loop 10 times for rows
	// row counts down to correspond to number of asterisks
	for (row = 10; row >= 1; --row)
	{
		//print row asterisks
		for (col = 1; col <= row; ++col)
		{
			printf("%s", "*");
		}// end for

		puts("");
	}// end for

	puts("");

	// Pattern C, loop 10 times for row
	// row counts down to correspond to number of asterisks
	for (row = 10; row >= 1; --row)
	{
		// print (10 - row) number of preceding spaces
		for (space = 1; space <= 10 - row; ++space)
		{
			printf("%s", " ");
		}// end for

		// print row asterisks
		for (col = 1; col <= row; ++col)
		{
			printf("%s", "*");
		}// end for

		puts("");
	}// end for

	puts("");

	// Pattern D, loop 10 times for rows
	for (row = 1; row <= 10; ++row)
	{
		// print (10 - row) number of preceding spaces
		for (space = 1; space <= 10 - row; ++space)
		{
			printf("%s", " ");
		}// end for

		// print row asterisks
		for (col = 1; col <= row; ++col)
		{
			printf("%s", "*");
		}// end for

		puts("");
	}// end for

	puts("");
}// end main