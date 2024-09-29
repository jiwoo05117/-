#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int a;
	int b;
	double result;

	//ют╥б
	printf("enter two integers: ");
	scanf("%d, %d", &a, &b);
	
	if (b != 0) {
		result = (double) a/ b;
		printf("%d.000000d/ %d.000000d = %.6f\n", a, b, result);
	} else{
		printf("error\n");
	}
	
	return 0;
}
