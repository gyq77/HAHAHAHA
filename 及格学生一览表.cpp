#include <stdio.h>

#define A 5

int main()
{
	int i;
	int jg = 0;
	int fs[A];
	int jgs[A];
	
	puts("请输入学生的分数。");
	for (i = 0 ; i < A; i++){
		printf("%2d号：",i+1);
	    scanf("%d",&fs[i]);
		if ( fs[i] >= 60 )
		  jgs[jg++] = i;  
	}
	puts("\n及格学生一览表。");
	puts("----------------");
	for(i=0;i<jg;i++) 
	printf("%2d号（%3d分）\n",jgs[i]+1,fs[jgs[i]]) ;
	
	return 0;
	 
 } 
