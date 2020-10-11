#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float a, b,BMI;
	printf("enter your height in meter and weight in kilogram\n");
	scanf_s("%f %f", &a, &b);
	BMI = b / (a*a);
	printf("your BMI is %f\n", BMI);
	if (BMI < 18.5) 
	{
		printf("Underweight");
	}
	if (BMI >= 18.5&& BMI<24.9)
	{
		printf("Normal");
	}
	if (BMI >= 25&&BMI<29.9)
	{
		printf("Overweight");
	}
	if (BMI > 30)
	{
		printf("Obese");
	}
	
	return 0;
}