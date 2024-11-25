#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
    int i;
    int grade[5];
    int sum = 0;
    float average;
    int *ptr = grade; 

    for (i = 0; i < 5; i++) {
        printf("Input value - grade[%i] = ", i);
        scanf("%d", &grade[i]);
    }

    
    for (i = 0; i < 5; i++) {
        printf("grade[%i] = %d\n", i, *(ptr + i)); 
        sum += *(ptr + i); 
    }

    
    average = (float)sum / 5;

    
    printf("average: %.1f\n", average);

    return 0;
}
