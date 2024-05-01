#include<stdio.h>
void add();
;
int main()
{
	int ch ;

	printf("\n2)addition of two matrix");
;
	scanf("%d",&ch);
	
	switch(ch)
	{
	
		case 2:add();
		    break;
		
		default:printf("\n wrong choice");
		
	}
}


 void add()
 {
 	int a[3][3],b[3][3],c[3][3],i,j;
 	printf("\n Enter matrix A");
	for(i=0;i<3;i++)
	
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[j][i]);
		}
		printf("\n");
		
	}
	printf("\n Enter matrix B:");
	for(i=0;i<3;i++)
	
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
		
	}
	printf("\n matrix after addition");
	printf("\n");
	for(i=0;i<3;i++)
	
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			printf("%d\t",c[i][j]);
		}
			printf("\n");
		
	}
}


