#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int answer = 50;
	int guess;
	int attempts = 0;
	
	do {
		printf("Guess a number: ");
		scanf("%d", &guess);
		attempts++;
		
		if (guess > answer) {
			printf("High!\n");
		} else if (guess < answer) {
			printf("Low!\n");
		}
		
	} while (guess != answer);
	
	printf("Congratulation! Trials: %d\n", attempts);
		
	return 0;
}
