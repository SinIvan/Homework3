#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	float loanprincipal, interestrate, interestcharge, days;

	while (true)
	{
		printf("Enter loan principal (-1 to and): ");
		scanf_s("%f", &loanprincipal);

		if (loanprincipal == -1)
		{
			return 0;
		}

		printf("Enter interest rate: ");
		scanf_s("%f", &interestrate);
		printf("Enter term of the loan in days: ");
		scanf_s("%f", &days);

		interestcharge = loanprincipal * interestrate * days / 365;

		printf("The interest charge is %.2f\n", interestcharge);
	}

	system("pause");
	return 0;
}