#include <stdio.h>

int main(void)
{
	int payCode; // current employee's pay code
	unsigned int managers = 0; // total number of manager
	unsigned int hWorkers = 0; // total number of hourly workers
	unsigned int cWorkers = 0; // total number of commission workers
	unsigned int pWorkers = 0; // total number of pieceworkers
	int pieces; // current pieceworker's number of piece
	double mSalary; // manager's salary
	double hSalary; // hourly worker's salary
	double cSalary; // commission worker's salary
	double pSalary; // pieceworker's salary
	double hours; // total hours worked
	double otPay; // overtime pay
	double otHours; // overtime hours
	double pay; // current employee's weekly pay

	// prompt for first employee input
	printf("%s", "Enter paycode ( -1 to end): ");
	scanf_s("%d", &payCode);

	// loop while sentinel value not read from user
	while (payCode != -1)
	{
		// switch to appropriate computation according to pay code
		switch (payCode)
		{
			// pay code 1 corresponds to manager
		case 1:

			// prompt for weekly salary
			puts("Manager selected.");
			printf("%s", "Enter weekly salary: ");
			scanf_s("%lf", &mSalary);

			// manager's pay is weekly salary
			printf("The manager's pay is $%.2f\n", mSalary);

			++managers; // update total number of managers
			break; // exit switch

			// pay code 2 corresponds to hourly worker
		case 2:

			// prompt for hourly salary
			puts("Hourly worker selected.");
			printf("%s", "Enter the hourly salary: ");
			scanf_s("%lf", &hSalary);

			// prompt for number of hours worked
			printf("%s", "Enter the total hours worked: ");
			scanf_s("%lf", &hours);

			// pay fixed for up to 40 hours, 1.5 for hours over 40
			if (hours > 40.0)
			{

				// calculate OT hours and total pay
				otHours = hours - 40.0;
				otPay = hSalary * 1.5 * otHours + hSalary * 40.0;

				printf("Worker worked %.1f overtime hours.\n", otHours);
				printf("Worker¡¦s pay is $%.2f\n", otPay);
			}// end if
			else
			{ // no overtime
				pay = hSalary * hours;
				printf("Worker's pay is $%.2f\n", pay);
			}// end else

			++hWorkers; // update total number of hourly workers
			break; // exit switch

			// pay code 3 corresponds to commission worker
		case 3:

			// prompt for gross weekly sales
			puts("Commission worker selected.");
			printf("%s", "Enter gross weekly sales: ");
			scanf_s("%lf", &cSalary);

			// pay $250 plus 5.7% of gross weekly sales
			pay = 250.0 + 0.057 * cSalary;
			printf("Commission Worker's pay is $%.2f\n", pay);

			++cWorkers; // update total number of commission workers
			break; // exit switch

			// pay code 4 corresponds to pieceworker
		case 4:

			// prompt for number of pieces
			printf("%s",
				"Pieceworker selected.\nEnter number of pieces: ");
			scanf_s("%d", &pieces);

			// prompt for wage per piece
			printf("%s", "Enter wage per piece: ");
			scanf_s("%lf", &pSalary);

			pay = pieces * pSalary; // compute pay
			printf("Pieceworker's pay is $%.2f\n", pay);

			++pWorkers; // update total number of pieceworkers
			break; // exit switch

			// default case
		default:
			puts("Invalid pay code.");
			break;
		}// end switch

			// prompt for next employee input
		printf("%s", "\nEnter paycode ( -1 to end ): ");
		scanf_s("%d", &payCode);
	}// end while

		 // display total counts for each type of employee
	puts("");
	printf("Total number of managers paid : %u\n", managers);
	printf("Total number of hourly workers paid : %u\n", hWorkers);
	printf("Total number of commission workers paid: %u\n", cWorkers);
	printf("Total number of pieceworkers paid : %u\n", pWorkers);
}// end main