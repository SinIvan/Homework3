#include <stdio.h>

int main(void)
{
	unsigned int count = 0; // number of triples found
	unsigned long int side1; // side1 value counter
	unsigned long int side2; // side2 value counter
	unsigned long int hypotenuse; // hypotenuse value counter
	unsigned long int hyptSquared; // hypotenuse squared
	unsigned long int sidesSquared; // sum of squares of sides

	// side1 values range from 1 to 500
	for (side1 = 1; side1 <= 500; ++side1)
	{
		// side2 values range from current side1 to 500
		for (side2 = 1; side2 <= 500; ++side2)
		{
			// hypotenuse values range from current side2 to 500
			for (hypotenuse = 1; hypotenuse <= 500; ++hypotenuse)
			{
				// calculate square of hypotenuse value
				hyptSquared = hypotenuse * hypotenuse;

				// calculate sum of squares of sides
				sidesSquared = side1 * side1 + side2 * side2;

				// if hypotenuse squared = side1 squared + side2 squared,
				// Pythagorean triple
				if (hyptSquared == sidesSquared)
				{
					// display triple
					printf("%ld %ld %ld\n", side1, side2, hypotenuse);
					++count; // update count
				}// end if
			}// end for
		}// end for
	}// end for

	 // display total number of triples found
	printf("A total of %u triples were found.\n", count);
} // end main