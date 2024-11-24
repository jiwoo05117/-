#include <stdio.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(void) {
    FILE *fp;       
    char ch;        
    char word[100]; 

    
    fp = fopen("sample.txt", "r");
    if (fp == NULL) { 
        printf("Failed to open file.\n");
        return;
    }

    
    printf("Reading characters one by one:\n");
    while ((ch = fgetc(fp)) != EOF) {  
        putchar(ch);  
    }

    
    fseek(fp, 0, SEEK_SET);  

    
    printf("\n\nReading words one by one:\n");
    int count = 0;
    while (fscanf(fp, "%s", word) != EOF && count < 3) { 
        printf("%s\n", word);  
        count++;  
    }

    
    fclose(fp);
}
