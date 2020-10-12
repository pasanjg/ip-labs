#include <stdio.h>

// function prototypes
float calcIncrement(float salary, int noofYearsWorked);
float calcTotSalary(float salary, float increment);

int main(void) // start function main
{
	// declaring variables
	float salary, increment, totSalary;
	int noofYearsWorked;

	// prompt for user input
	printf("Enter Salary: ");
	scanf("%f", &salary);

	printf("Enter no of years worked: ");
	scanf("%d", &noofYearsWorked);

	// calculation
	increment = calcIncrement(salary, noofYearsWorked);
	totSalary = calcTotSalary(salary, increment);

	// writing output
	printf("Increment: %.2f\n", increment);
	printf("Total Salary: %.2f\n", totSalary);

	return 0;

} // end function main

float calcIncrement(float salary, int noofYearsWorked) // start function calcIncrement
{
	// declaring variables
	float increment;

	// checking the condition
	if (noofYearsWorked > 2)
		increment = salary * 0.1;

	else
		increment = 0.00;

	return increment;

} // end function calcIncrement

float calcTotSalary(float salary, float increment)
{ // start function calcTotSalary

	// declaring variables
	float totSalary;

	// calculation
	totSalary = salary + increment;

	return totSalary;

} // end function calcTotSalary
