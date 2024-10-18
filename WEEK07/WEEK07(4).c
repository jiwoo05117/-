#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int get_integer();
long long combination(int n, int r);
int factorial(int n);

int main(void) {
	int n, r;
	long long result;
	
	n = get_integer();
	r = get_integer();
	
	if (r>n) {
		printf("Erorr\n");
		return 1;
	}
	
	result = combination(n, r);
	
	printf("The result of C(%d, %d) is %d.\n", n, r, result);
	
	return 0;
}

int get_integer() {
	int value;
	printf("Enter the value: ");
	scanf("%d", &value);
	return value;
}

int factorial(int n) {
	int res = 1;
	int i;
	for (i = 1; i <= n; i++) {
		res *= i;
	}
	return res;
}

long long combination(int n, int r) {
	return factorial(n) / (factorial(n - r) * factorial(r));
}
