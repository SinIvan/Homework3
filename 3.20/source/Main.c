#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	float hoursworked, hourlyrate, salary;

	while (true)
	{
		printf("Enter # of hours worked (-1 to end): ");
		scanf_s("%f", &hoursworked);

		if (hoursworked == -1)
		{
			return 0;
		}

		printf("Enter hourly rate of the worker ($00.00): ");
		scanf_s("%f", &hourlyrate);

		salary = hoursworked * hourlyrate + ((hoursworked - 40) * 0.5) * hourlyrate;

		printf("Salary is %.2f\n", salary);
	}

	system("pause");
	return 0;
}