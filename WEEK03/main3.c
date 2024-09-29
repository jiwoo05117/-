#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	char c;
	
	//문자 입력
	printf("enter a character: ");
	scanf("%c", &c);
	
	//다음 문자
	char i;
	i = c + 1;
	
	//ascii 출력
	printf("the next character of %c (%d) is %c (%d)\n", c, c, i, i);
	 
	return 0;
}
