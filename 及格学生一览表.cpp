#include <stdio.h>

#define A 5

int main()
{
	int i;
	int jg = 0;
	int fs[A];
	int jgs[A];
	
	puts("������ѧ���ķ�����");
	for (i = 0 ; i < A; i++){
		printf("%2d�ţ�",i+1);
	    scanf("%d",&fs[i]);
		if ( fs[i] >= 60 )
		  jgs[jg++] = i;  
	}
	puts("\n����ѧ��һ����");
	puts("----------------");
	for(i=0;i<jg;i++) 
	printf("%2d�ţ�%3d�֣�\n",jgs[i]+1,fs[jgs[i]]) ;
	
	return 0;
	 
 } 
