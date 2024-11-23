#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(void) {
    FILE *fp;      
    char word[100];  

   
    fp = fopen("sample.txt", "r");
    if (fp == NULL) {  
        printf("Failed to open file.\n");
        return;
    }

    
    while (fscanf(fp, "%s", word) != EOF) {  
        printf("%s\n", word); 
    }

    
    fclose(fp);
}
