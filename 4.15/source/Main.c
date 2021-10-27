#include <stdio.h>
#include <math.h>

int main(void)
{
	unsigned int year;//year count
	int rate;//interest rate
	double amount;//amount on deposit
	double principal = 5000.0;//starting principal

	//loop through interest rates 10% to 12%
	for (rate = 10; rate <= 12; ++rate)
	{
		//display table headers
		printf("Interest Rate: %f\n", rate / 100.0);
		printf("%s%21s\n", "Year", "Amount on deposit");

		//calculate amount on deposit for each of fifteen years
		for (year = 1; year <= 15; ++year)
		{
			//calculate new amount for specified year
			amount = principal * pow(1 + (rate / 100.0), year);

			//output one table row
			printf("%4u%21.2f\n", year, amount);
		}//end for

		puts("");
	}//end for
}//end main