#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int i;
	int grade[SIZE];
	int score[SIZE];
	
	for (i=0; i<SIZE; i++) {
	 grade[i] = rand() % 100;
}

	for (i = 0; i < SIZE; i++) {
     score[i] = grade[i];
 }
    
	for( i=0; i<SIZE; i++){
	 printf("score[%d] = %d\n", i, score[i]);
}

/*
int a[SIZE] = {1,2,3,4,5};
int b[SIZE] = {1,2,3,7,10};

if (a==b) 
 printf("The arrays have the same values.\n");
else
 printf("The arrays have different values.\n");

return 0;
}
*/


int a[SIZE] = {1,2,3,4,5};
int b[SIZE] = {1,2,3,7,10};
int flag_same = 1;

for (i=0; i<SIZE; i++) {
	if (a[i] != b[i]) {
            // 값이 다르면 해당 인덱스와 값을 출력
            printf("Index %d: a[%d] = %d, b[%d] = %d\n", i, a[i], b[i]);
            flag_same = 0; 
        }
    }
    return 0;
}



