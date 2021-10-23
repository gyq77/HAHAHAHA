//辗转相除法
#include <stdio.h>

int main(){
	int a,b,c;
	printf("请输入两个正整数。");
	scanf("%d%d",&a,&b);
	 c = a%b ; 
    while(c != 0) {
    c = a%b;
    a = b;
    b = c;
	}
	printf("最大公因子为：%d",a);
} 
