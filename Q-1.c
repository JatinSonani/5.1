//Q.1 Write a Program to find the minimum number from the given 2 numbers using if else.

#include<stdio.h>

main()
{
	int First_Number,Second_Number;
	
	printf("Enter Value Of First NUmber: ");
	scanf("%d",&First_Number);
	
	printf("Enter Value Of Second Number: ");
	scanf("%d",&Second_Number);
	
	if (First_Number < Second_Number)
	{
		printf("The minimum value is: %d\n", First_Number);
	}
	else
	{
		printf("The minimum value is: %d\n", Second_Number);
	}
}