#include <stdio.h>

int main()
/* 
	print Fahrenheit-Celsius-Tabelle
	for fahrenheit = 0, 20, ..., 300
*/
{
	int fahrenheit, celsius;
	int min, max, step;

	min = 0;
	max = 300;
	step = 20;

	fahrenheit = min;
	while (fahrenheit<=max) {
		celsius = 5*(fahrenheit-32)/9;
		printf("%d\t%d\n", fahrenheit, celsius);
		fahrenheit = fahrenheit + step;
	}
	
}