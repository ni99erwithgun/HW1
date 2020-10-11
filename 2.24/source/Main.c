#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a = 0;
	printf("enter a interger\n");
	scanf_s("%d", &a);
	if (a % 2 == 0)
	{
		printf("%d is an even number", a);
	}
	if (a % 2 != 0)
	{
		printf("%d is an odd number", a);
	}
	system("pause");
	return 0;
}