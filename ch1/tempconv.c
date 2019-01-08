#include <stdio.h>

int main()
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