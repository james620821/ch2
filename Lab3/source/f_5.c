#include<stdio.h>
#include<stdlib.h>

int Han_Xin_5()
{
	char a = 'X';
	char b = '-';
	int i, j;
	int t1, t2;
	t1 = 9;
	printf("(5) \n");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i == j)
			{
				printf("%c", a);
			}
			else if (j == t1)
			{
				printf("%c", a);
				t1--;
			}
			else
			{
				printf("%c", b);
			}
		}
		printf("\n");
	}

}


