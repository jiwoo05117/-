#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int number;
	
	printf("Enter an integer: ");
	scanf("%i", &number);
	
	int absolute_value = (number < 0) ? -number : number;
	
	printf("%i\n", absolute_value);
	
	return 0;
}
