#include<stdio.h>

#define A 80

int main()
{
	int i,j;
	int m;
	int fs[A];
	int fbt[11] = {0};
	
	printf("������ѧ��������"); 
	do{
		scanf("%d",&m);
		if(m < 1 || m > A)
		printf("\a ������Χ[1��%d]:",A);
	} while (m<1 || m>A);
	
	puts("������ѧ���ķ�����");
	for (i = 0 ;i < m ;i++){
		printf("%2d��:",i+1);
		do {
			scanf("%d",&fs[i]);
			if(fs[i] < 0 || fs[i]>100)
			printf("\a������Χ[0��100]:");
		}while(fs[i] < 0 || fs[i]>100);
		fbt[fs[i]/10]++;
	}
	
	 puts("\n  �ֲ�ͼ   ");
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

 
