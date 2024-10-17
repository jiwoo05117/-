#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a;
	int b;
	char operator;
	int result;
	
	printf("Enter the calculation: ");
	scanf("%d %c %d", &a, &operator, &b);
	
	switch (operator) {
		case '+':
			result = a + b;
			break;
		case '-':
			result = a - b;
			break;
		case '*':
			result = a * b;
			break;
		case '/':
			if (b != 0) {
				result = a / b;
		} else {
			printf("Error\n");
			return 1;
		}
		break;
	default:
		printf("Error\n");
		return 1;
		
	} 
	
	printf("= %d\n", result);
	
	return 0;
}
