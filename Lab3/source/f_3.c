#include<stdio.h>
#include<stdlib.h>

int Han_Xin_3()
{
	char a = 'X';
	char b = '-';
	int i, j;
	int t1, t2;
	t1 = 4;
	t2 = 5;
	printf("(3) \n");

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j< 10; j++)
		{
			if ((i < 5) && (j == t1))
			{
				printf("%c", a);
				t1--;
			}
			else if ((i < 5) && (j == t2))
			{
				printf("%c", a);
			}
			else if (i == 4)
			{
				printf("%c", a);
			}
			else
			{
				printf("%c", b);
			}
		}
		t2++;
		printf("\n");
	}

}

