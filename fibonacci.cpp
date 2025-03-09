#include<stdio.h>
int main()
{
	int start,end,a=0,b=1,next;
	printf("Enetr the range(start and end):");
	scanf("%d%d",&start,&end);
	printf("Fibonacci series");
	while(a<=end)
	{
		if(a>=start)
		{
			printf("%d",a);
		}
		next=a+b;
		a=b;
		b=next;
	}
	printf("\n");
}
