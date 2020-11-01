#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int ChangeCurrency(int x);
int main()
{
	int n;
	printf("Enter USD money : ");
	scanf("%d", &n);
	ChangeCurrency(n);
	return 0;
}
int ChangeCurrency(int x)
{
	int i;
	if (x > 0)
	{
		i = x * 32.5;
		printf("%d USD = %d Bath", x, i);
		return i;
	}
	else
	{
		printf("Your don't have money");
	}
}