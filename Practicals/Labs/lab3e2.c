#include <stdio.h>
//function main begins program execution
int main(void)
{

	double Celsius, Fahrenheit, Ctemp, Ftemp;
	Fahrenheit = 78.5;
	Ctemp = 25.83;

	Celsius = (Fahrenheit - 32) * 5.0 / 9.0;
	Ftemp = (9.0 / 5.0 * Ctemp + 32);

	printf("%.2lf degrees Fahrenheit is %.2lf is degrees Celcius\n", Fahrenheit, Celsius);
	printf("%.2lf degrees Celcius is %.2lf is degrees Farenheit\n", Ctemp, Ftemp);

	return 0;

} //end of main function
