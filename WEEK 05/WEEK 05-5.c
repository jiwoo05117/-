#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a, b;
	
	printf("Input two integers: ");
	scanf("%i %i", &a, &b);
	
	printf("& result is %d\n", a &b);
	printf("| result is %d\n", a | b);
	printf("^ result is %d\n", a ^ b);
	
	printf("<<1 result is %d\n", a << 1);
	printf(">>1 result is %d\n", a >> 1);
	
	return 0;
}
