#include<stdio.h>
int add();
int main()
{
	int ans;
	ans = add();
	printf("\nThe addition is = %d",ans);
	
	return 0;
}
int add()
{
	int n1,n2,ans;
	printf("\nEnter the value of num1 = ");
	scanf("%d",&n1);//5
	printf("\nEnter the value of num2 = ");
	scanf("%d",&n2);//2	
	ans = n1 + n2;
	return ans;
}
