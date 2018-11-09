#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j, temp, time;
	int a[5] = { 26, 5, 81, 7, 63 };
	for (i = 0; i < 4; i++)
	{
		time = 0;
		for (j = 0; j < 4 - i; j++)
		{
			if (a[j]>a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
				time = time + 1;
			}
		}

		if (time == 0)
			break;

		printf("Loop %d: ", i);
		for (j = 0; j < 5; j++)
		{
			printf("%3d ", a[j]);
		}
		printf("\n");

	}

	printf("\nResult¡G");
	for (i = 0; i < 5; i++)
	{
		printf("%3d ", a[i]);
	}
	printf("\n");

	system("pause");
	return 0;
}