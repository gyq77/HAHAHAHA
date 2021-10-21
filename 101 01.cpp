#include <stdio.h>

int main()
{
float a,b,c;
printf("请输入三个整数：");
scanf("%f%f%f",&a,&b,&c);
if(a+b>c&&b+c>a&&a+c>b){
	if(a==b==c)
  puts("1");
else if(a==b||b==c||c==a)
  puts("2");
else
  puts("3") ;
}
else 
 puts("0");
 return 0;
}


