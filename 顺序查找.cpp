#include<stdio.h>

#define NUMBER 5
#define FALLED -1

int search(const int vc[], int key, int no)
{
	int i=0;
	
	while (1){
		if (i == no)
		return (FALLED);
		if(vc[i] == key)
		return (i);
		i++;
	}
 } 
 
 int main (void)
 {
 	int i,ky,idx;
 	int vx[NUMBER];
 	
 	for (i = 0;i < NUMBER;i++){
 		printf("vx[%d]:",i);
 		scanf("%d",&vx[i]);
	 }
	 printf("Ҫ���ҵ�ֵ��");
	 scanf("%d",&ky);
	 
	 idx = search(vx,ky,NUMBER);
	 
	 if(idx == FALLED)
	   puts("\a����ʧ�ܡ�");
	 else
	   printf("%d������ĵ�%d��Ԫ�ء�\n",ky,idx+1);
	   
	   return 0; 
	  
 }
