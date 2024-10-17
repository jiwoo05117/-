#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int number;
	
	printf("Enter an integer: ");
	scanf("%i", &number);
	
	if (number > 0) {
		printf("This is a positive number.\n");
	} else if (number < 0) {
		printf("This is negative number.\n");
	} else {
		printf("This is 0.\n");
	}
	
	return 0;
}
