#include<stdio.h>
//without return type without argument
void add();
int main()
{
	add();
	return 0;
}
void add()
{
	int n1,n2,ans;
	printf("\nEnter the value of num1 = ");
	scanf("%d",&n1);//5
	printf("\nEnter the value of num2 = ");
	scanf("%d",&n2);//2	
	ans = n1+n2;
	printf("\nThe addition of %d and %d is %d",n1,n2,ans);
}
