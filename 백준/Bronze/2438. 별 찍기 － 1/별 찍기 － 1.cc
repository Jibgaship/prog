#include <stdio.h>
int main() {
	int star;
	scanf("%d", &star);
	for (int i = 0; i < star; i++)
	{
		for (int j = 0; j < i + 1; j++)
			printf("*");
		printf("\n");
	}
	return 0;
}