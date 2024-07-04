#include<stdio.h>
void add(int num1,int num2);
int main()
{
	int n1,n2,ans;
	printf("\nEnter the value of num1 = ");
	scanf("%d",&n1);//5
	printf("\nEnter the value of num2 = ");
	scanf("%d",&n2);//2
	add(n1,n2);
	return 0;
}
void add(int num1,int num2)
{
	int ans;
	ans = num1 + num2;
	printf("\nThe addition of %d and %d is %d",num1,num2,ans);
}

