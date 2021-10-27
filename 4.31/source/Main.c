#include <stdio.h>

int main(void)
{
	unsigned int line; // line counter
	unsigned int space; // space counter
	unsigned int asterisk; // asterisk counter

	// top half
	for (line = 1; line <= 9; line += 2)
	{

		// print preceding spaces
		for (space = (9 - line) / 2; space > 0; --space)
		{
			printf("%s", " ");
		} // end for

		// print asterisks
		for (asterisk = 1; asterisk <= line; ++asterisk)
		{
			printf("%s", "*");
		}// end for

		puts("");
	}// end for

	// bottom half
	for (line = 7; line >= 0; line -= 2)
	{

		// print preceding spaces
		for (space = (9 - line) / 2; space > 0; --space)
		{
			printf("%s", " ");
		}// end for

		// print asterisks
		for (asterisk = 1; asterisk <= line; ++asterisk)
		{
			printf("%s", "*");
		}// end for

		puts("");
	}// end for
}// end main