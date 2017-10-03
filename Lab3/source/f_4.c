#include<stdio.h>
#include<stdlib.h>

int Han_Xin_4()
{
	char a = 'X';
	char b = '-';
	int i, j;
	int t1, t2;
	t1 = 1;
	t2 = 8;

	printf("(4) \n");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j< 10; j++)
		{
			if ((i>0) && (i<5) && (j == t1))
			{
				printf("%c", a);
			}
			else if ((i>0) && (i<5) && (j == t2))
			{
				t1++;
				printf("%c", a);
				t2--;
			}
			else if (i == 0)
			{
				printf("%c", a);
			}
			else
			{
				printf("%c", b);
			}
		}
		printf("\n");
	}
}

