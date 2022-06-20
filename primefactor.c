#include <stdio.h>

int main()
{
	int i, j, Number, flag;

	printf("\n Please Enter any number to Find Factors :  ");
	scanf("%d", &Number);

	for (i = 2; i <= Number; i++)
	{
		if (Number % i == 0)
		{
			flag = 1;
			for (j = 2; j <= i / 2; j++)
			{
				if (i % j == 0)
				{
					flag = 0;
					break;
				}
			}
			if (flag == 1)
			{
				printf("\n %d is a Prime Factor ", i);
			}
		}
	}
	if (Number == 1)
	{
		printf("\n 1 is a Prime factor");
	}
	return 0;
}
