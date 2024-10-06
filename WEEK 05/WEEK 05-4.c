#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int y;
	int i;
	
	printf("Input the year: ");
	scanf("%d", &y);
	
	i = (y %4 == 0 && y % 100 != 0) || (y % 400 == 0);
	
	printf("Is the year %d the leap year? %d\n", y, i);

	return 0;
}
