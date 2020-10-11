#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a = 0, b = 0;
	printf("enter two intergers \n");
	scanf_s("%d %d", &a, &b);
	if (b%a == 0)
	{
		printf("%d is the mulitiple of %d", b, a);
	}
	if (b%a != 0)
	{
		printf("%d is not the mulitiple of %d", b, a);
	}

	system("pause");
	return 0;
}