#include <stdio.h>
#include <stdlib.h>

#define STUDENTNUM 4

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student {
    int ID;     
    int score; 
};

int main(void) {
    struct student s[STUDENTNUM];  
    int total = 0;                
    int highestIndex = 0;
	
	int i;         
    
    for ( i = 0; i < STUDENTNUM; i++) {
        printf("Input the ID: ");
        scanf("%d", &s[i].ID);    
        printf("Input the score: ");
        scanf("%d", &s[i].score); 

        total += s[i].score;      

       
        if (s[i].score > s[highestIndex].score) {
            highestIndex = i;
        }
    }

    
    double average = (double)total / STUDENTNUM;

    
    printf("The average of the score: %f\n", average);
    printf("The highest score - ID: %d, score: %d\n", s[highestIndex].ID, s[highestIndex].score);

    return 0;
}
