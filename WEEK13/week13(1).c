#include <stdio.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student {
    int id;        
    char name[50]; 
    float gpa;     
};

int main(void) {
    struct student s1;

    s1.id = 20231234;                  
    strcpy(s1.name, "Kim Minho");      
    s1.gpa = 3.75;                   

   
    printf("�й�: %d\n", s1.id);
    printf("�̸�: %s\n", s1.name);
    printf("����: %.2f\n", s1.gpa);

    return 0;
}
