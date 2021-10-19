#include <stdio.h>

int main(void)
{
	int a; 
	
	do{
		printf("请输入一个非负整数：");
		scanf("%d",&a);
		if(a<0)
		   puts("请不要输入负整数。");
	}while(a<0);
	
	printf("该整数逆向显示的结果是");
	 do{
	 	printf("%d",a%10);
	 	a=a/10;
	 }while(a>0);
	 puts("。");
	 
	 return 0;
 } 
