#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float a, b, c, d, e,sum;
	printf("enter your total miles per day\n");
	scanf_s("%f", &a);
	printf("enter cost per gallon of gasoline\n");
	scanf_s("%f", &b);
	printf("enter average miles per gallon\n");
	scanf_s("%f", &c);
	printf("enter your parking fees per day\n");
	scanf_s("%f", &d);
	printf("enter your Tolls per day\n");
	scanf_s("%f", &e);
	sum = a / c * b + d + e;
	printf("your daily driving cost is %f dollars", sum);
	system("pause");
	return 0;
}