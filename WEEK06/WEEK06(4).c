#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n;
	int sum = 0;
	int i;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++) {
		sum += i;
	}
	
	printf("The result is %d\n", sum);
	
	return 0;
}
