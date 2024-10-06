#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i;
	int a, b;
	
	printf("Input the second: ");
	scanf("%d", &i);
	
	a = i / 60;
	b = i % 60;
	
	printf("The time is %d : %d\n", a, b);
	
	return 0;
}
