#include <stdio.h>
#include <string.h>

int main() {
	char arr[1000000];
	int len = 0, count = 1;
	
	scanf("%[^\n]", arr);
	len = strlen(arr);
	
	if (len == 1)
	{
		if (arr[0] == ' ')
		{
			printf("0\n");
			return 0;
		}
	}
	
	for (int i = 1; i < len - 1; i++)
	{
		if (arr[i] ==  ' ')
			count++;
	}
	
	printf("%d", count);
	
	return 0;
}