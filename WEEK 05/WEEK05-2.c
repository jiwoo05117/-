#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b, c;
	int x, y, z, n, m;
	
	printf("input two integers: ");
	scanf("%i %i", &a, &b) ;
	
	x = a + b;
	y = a - b;
	z = a*b;
	n = a/b;
	m = a%b;
	printf("+ result is %d\n", x);
	printf("- result is %d\n", y);
	printf("* result is %d\n", z);
	printf("/ result is %d\n", n);
	printf("%% result is %d\n", m);

		
}
