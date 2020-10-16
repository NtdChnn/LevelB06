#include<stdio.h>
int main()
{
	int number, size[50];
	scanf_s("%d", &number);
		for (int i = 0; i < number; i++)
		{
			scanf_s("%d", &size[i]);
		}
		for (int x = 0; x < number; x++)
		{
			for (int j = 0; j < size[x]; j++)
			{
				for (int k = 0; k <= j; k++)
				{
					printf("* ");
				}
				printf("\n");
			}
			printf("\n\n");
		}
}