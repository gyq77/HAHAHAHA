//շת�����
#include <stdio.h>

int main(){
	int a,b,c;
	printf("������������������");
	scanf("%d%d",&a,&b);
	 c = a%b ; 
    while(c != 0) {
    c = a%b;
    a = b;
    b = c;
	}
	printf("�������Ϊ��%d",a);
} 
