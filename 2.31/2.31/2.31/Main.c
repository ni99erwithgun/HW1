#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i = 1;
	printf("number    square   cube\n");
	for (i = 1; i <= 10; i++)
	{
		if (i*i < 10)
		{
			printf("%d        %d       %d\n", i, i*i, i*i*i);
		}
		if (i*i  >= 10 && i*i < 100)
		{
			printf("%d        %d      %d\n", i, i*i, i*i*i);
		}
		if (i*i  >= 100 )
		{
			printf("%d       %d     %d\n", i, i*i, i*i*i);
		}
	}
	system("pause");
	return 0;
}