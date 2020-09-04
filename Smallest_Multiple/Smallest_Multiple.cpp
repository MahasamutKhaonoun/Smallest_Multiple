#include<stdio.h>

int main()
{

	int n1=1, n2= 1, sum = 0;
	char name[50];
	printf("Input your name : ");
	gets_s(name);
	printf("Welcome %s\n", name);
	printf("The question is \n");
	printf("2520 is the smallest number that can be divided by each of the numbers\n");
	printf("rom 1 to 10 without any remainder.");
	printf("What is the smallest positive number that is evenly divisible\n");
	printf("by all of the numbers from 1 to 20?\n");
	while (n1 > 0)
	{
		n2 = 1;
		while ((n1 % n2 == 0) && (n2 <= 20))
		{
			if (n2 == 20)
			{
				sum = n1;
				break;
			}
			n2++;
		}
		n1++;
		if (sum > 0)
		{
			break;
		}
	}
	printf_s("Answer = %d\n", sum);
	return 0;
}