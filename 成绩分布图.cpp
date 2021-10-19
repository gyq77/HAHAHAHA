#include<stdio.h>

#define A 80

int main()
{
	int i,j;
	int m;
	int fs[A];
	int fbt[11] = {0};
	
	printf("请输入学生人数："); 
	do{
		scanf("%d",&m);
		if(m < 1 || m > A)
		printf("\a 人数范围[1到%d]:",A);
	} while (m<1 || m>A);
	
	puts("请输入学生的分数。");
	for (i = 0 ;i < m ;i++){
		printf("%2d号:",i+1);
		do {
			scanf("%d",&fs[i]);
			if(fs[i] < 0 || fs[i]>100)
			printf("\a分数范围[0到100]:");
		}while(fs[i] < 0 || fs[i]>100);
		fbt[fs[i]/10]++;
	}
	
	 puts("\n  分布图   ");
	 printf("    100:");
	 for (j=0; j < fbt[10];j++)
	    putchar('*');
	putchar('\n');
	
	for (i = 9; i>= 0; i--){
		printf("%3d-%3d:", i*10 , i*10 + 9);
		for (j = 0; j<fbt[i]; j++)
		    putchar('*');
		    putchar('\n');
	} 
		return 0;
 } 

 
