#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	char c;
	
	//���� �Է�
	printf("enter a character: ");
	scanf("%c", &c);
	
	//���� ����
	char i;
	i = c + 1;
	
	//ascii ���
	printf("the next character of %c (%d) is %c (%d)\n", c, c, i, i);
	 
	return 0;
}
