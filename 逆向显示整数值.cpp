#include <stdio.h>

int main(void)
{
	int a; 
	
	do{
		printf("������һ���Ǹ�������");
		scanf("%d",&a);
		if(a<0)
		   puts("�벻Ҫ���븺������");
	}while(a<0);
	
	printf("������������ʾ�Ľ����");
	 do{
	 	printf("%d",a%10);
	 	a=a/10;
	 }while(a>0);
	 puts("��");
	 
	 return 0;
 } 
