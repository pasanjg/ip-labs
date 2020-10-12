/*This program calculates the overall score, given the points earned
for the exam, homework and the percentages allocated for exam and homework.*/

#include <stdio.h>
int main()
{
	//Declare variables
	int examScore, homeworkScore;
	float percentageExam, percentageHomework, temp1, temp2, average;

	//Prompt the user to enter the exam score
	printf("Please enter the points earned for the exam: ");
	scanf("%d", &examScore);

	//Validate input
	if (examScore < 0 || examScore > 100)
	{
		printf("Error in input: value should be in [0,100]\n");
		return -1; //Terminate the program
	}						 //end of if

	printf("Please enter the percentage given for the exam: ");
	scanf("%f", &percentageExam);

	printf("Please enter the points earned for homework: ");
	scanf("%d", &homeworkScore);

	printf("Please enter the percentage given for homework: ");
	scanf("%d", &percentageHomework);

	//Check whether the entered percentages add to 100%
	if ((percentageExam + percentageHomework) != 100.0)
	{
		printf("Error: the two percentages must add to 100.0 \n");
		return -1; //Terminate the program
	}						 //if//Calculate the overall course average

	temp1 = examScore / 100 * percentageExam;
	temp2 = homeworkScore / 100 * percentageHomework;
	average = (temp1 + temp2) / 2;

	//Output the result
	printf("Overall course average is %.2f", average);
	return 0;

} //main
