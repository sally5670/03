#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	char c;
	int i;
	
	printf("input a number:");
	scanf("%c", &c);// ���� ����5�� �־�� ���ڷ� �޾Ƶ鿩�� �ƽ�Ű�ڵ�5�� ��.
	
	i=c-'0';
	printf("The input numbe ASCII is %i\n",c);
	printf("The input number is %i \n", i); 
	
	system("PAUSE");
	return 0;
}
