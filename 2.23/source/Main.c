#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a = 0, b = 0, c = 0;
	printf("enter three intergers\n");
	scanf_s("%d %d %d", &a, &b, &c);
	if (a > b&&a > c)
	{
		printf("%d is the largest\n", a);
	}
	if (a < b&&a < c)
	{
		printf("%d is the smallest\n", a);
	}
	
	if (b > a&&b > c)
	{
		printf("%d is the largest\n", b);
	}
	if (b < a&&b < c)
	{
		printf("%d is the smallest\n", b);
	}
	if (c > a&&c > b)
	{
		printf("%d is the largest\n", c);
	}
	if (c < a&&c < b)
	{
		printf("%d is the smallest\n", c);
	}
	if (c == a&&c == b)
	{
		printf("all the same");
	}
	system("pause");
	

	return 0;
}