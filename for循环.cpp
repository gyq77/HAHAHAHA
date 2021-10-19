#include <stdio.h>

int main(){
	int t,i,a,b;
	scanf("%d",&t);
	for(i = 1; i <= t; i = i + 1)
	{
		scanf("%d%d",&a,&b);
		printf("%d\n", a + b);
	 } 
	 return 0;
}
