#include<stdio.h>
void fib(int n,int prev1,int prev2)
{
	if(n<3)
	{
		return;
	}
	int curr=prev1+prev2;
	printf("%d\n",curr);
	return fib(n-1,prev2,curr);
}
void printfib(int n)
{
	if(n<1)
	{
		printf("invalid number \n");
	}
	else if(n==1)
	{
		printf("%d\n",0);
	}
	else if(n==2)
	{
		printf("%d\n%d\n",0,1);
	}
	else
	{
		printf("%d\n%d\n",0,1);
		fib(n,0,1);
	}
	return ;
}
int main()
{
	int n;
	printf("enter the number :");
	scanf("%d",&n);
	printfib(n);
	return 0;
}
