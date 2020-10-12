#include <stdio.h>

// function prototypes
float calculateWeeklySalary(int grade, float hrsWorked);
void printDetails(int grade, float hrsWorked, float salary);

int main(void)
{ // start function main

	// declaring variables
	float hrsWorked, salary;
	int grade;

	// promt fot user input
	printf("Enter the no of hours worked: ");
	scanf("%f", &hrsWorked);

	printf("Enter the grade: ");
	scanf("%d", &grade);

	// calling the functions
	salary = calculateWeeklySalary(grade, hrsWorked);

	printDetails(grade, hrsWorked, salary);

	return 0;

} // end function main

float calculateWeeklySalary(int grade, float hrsWorked)
{ // start function calculateWeeklySalary

	// declaring variables
	float salary;

	// checking the condition
	if (grade == 1)
		salary = hrsWorked * 100.00;

	if (grade == 2)
		salary = hrsWorked * 200.00;

	if (grade == 3)
		salary = hrsWorked * 300.00;

	return salary;

} // end function calculateWeeklySalary

void printDetails(int grade, float hrsWorked, float salary)
{ // start function printDetails

	// writing output
	puts("");
	puts("Details:");
	printf("Grade: %d\nHours worked: %.2f\nWeekly salary: %.2f\n", grade, hrsWorked, salary);

} // end function printDetails
