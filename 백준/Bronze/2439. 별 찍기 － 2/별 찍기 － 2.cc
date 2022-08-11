#include <stdio.h>
int main() {
	int star;
	scanf("%d", &star);
	for (int i = 1; i <= star; i++)
	{
		for (int j = 1; j <= star; j++)
		{
			if (i + j >= star + 1)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}