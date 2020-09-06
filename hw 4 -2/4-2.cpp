#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int age;
	printf("Enter age : ");
	scanf("%d", &age);
	if (age < 0)
	{
		printf(" error \n");
	}
	else if (age >= 0 && age <= 10)
	{
		printf(" you are Children \n");
	}
	else if (age > 10 && age <= 20)
	{
		printf(" you are Teenage \n");
	}
	else if (age > 20 && age <= 35)
	{
		printf(" you are Adult \n");
	}
	else if (age > 35 && age <= 55)
	{
		printf(" you are Middle age \n");
	}
	else if (age > 55)
	{
		printf(" you are Old age \n");
	}

	printf("__________________________________________________________________");

	return 0;
}


