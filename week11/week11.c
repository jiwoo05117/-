#include <stdio.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(void) {
    char word1[100], word2[100], word3[100];  
    FILE *fp;  
    
    printf("input a word: ");
    scanf("%s", word1);
    printf("input a word: ");
    scanf("%s", word2);
    printf("input a word: ");
    scanf("%s", word3);

    
    fp = fopen("sample.txt", "w");
    if (fp == NULL) {  
        printf("Failed to open file.\n");
        return;
    }

    
    fprintf(fp, "%s\n", word1);
    fprintf(fp, "%s\n", word2);
    fprintf(fp, "%s\n", word3);

    
    
    
    fclose(fp);

    printf("Words have been written to sample.txt\n");
}
