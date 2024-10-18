#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int sumTwo(int a, int b) {
	return a + b;
}

int square(int n) {
	return n * n;
}

int get_max(int x, int y) {
	return (x > y) ? x : y;
}	

int main() {
	int num1, num2;
	
	printf("Enter the integer: ");
	scanf("%d %d", &num1, &num2);
	
	int sumResult = sumTwo(num1, num2);
	int squareResult = square(num1);
	int maxResult = get_max(num1, num2);
	
	printf("Result - Sum: %d, Square: %d, Max: %d\n", sumResult, squareResult, maxResult);
	
	return 0;
}
