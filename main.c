#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	char c;
	
	printf("enter a character: ");
	scanf("%c", &c);// ���� ����5�� �־�� ���ڷ� �޾Ƶ鿩�� �ƽ�Ű�ڵ�5�� ��.
	
	
	printf("The next character of a  %c (%d) is %c (%d) \n", c,c,c+1,c+1); 
	
	system("PAUSE");
	return 0;
}
