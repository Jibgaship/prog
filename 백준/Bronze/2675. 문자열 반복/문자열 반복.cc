#include <stdio.h>
#include <string.h>

int main() {
	int num, count;
	char arr[100];
	
	scanf("%d", &num);
	
	for (int i = 0; i < num; i++)
	{
		scanf("%d %s", &count, arr);
		for (int j = 0; j < strlen(arr); j++)
		{
			for (int k = 0; k < count; k++)
				printf("%c", arr[j]);
		}
		printf("\n");
	}
	
	return 0;
}