#include <stdio.h>

int main() {
	
	float fahren;

	for (fahren = 300; fahren >= 0; fahren -= 20)
		printf("%3.0f\t%6.1f\n", fahren, (5.0/9.0)*(fahren-32));

}