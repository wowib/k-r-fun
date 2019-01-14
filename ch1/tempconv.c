#include <stdio.h>

#define min 0
#define max 300
#define step 20

int main()
/* 
	print Fahrenheit-Celsius-Tabelle
	for fahrenheit = 0, 20, ..., 300
*/
{
	float fahrenheit, celsius;

	fahrenheit = min;
	printf("%s\t%s\n","Fahrenheit", "Celsius");
	printf("-------------------------\n");
	while (fahrenheit<=max) {
		celsius = (5.0/9.0)*(fahrenheit-32.0);
		printf("%8.0f\t%6.1f\n", fahrenheit, celsius);
		fahrenheit = fahrenheit + step;
	}
	
}