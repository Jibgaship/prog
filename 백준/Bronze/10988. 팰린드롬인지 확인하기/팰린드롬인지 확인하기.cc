#include <stdio.h>
#include <string.h>

#define MAX_LEGNTH 100

int main() {
	char arr[MAX_LEGNTH];
	int tmp = 1;
	scanf("%s", arr);

	for (int i = 0; i < strlen(arr) / 2; i++) {
		if (arr[i] != arr[strlen(arr) - 1 - i])
			tmp = 0;
		
	}

	if (tmp)
		printf("1");
	else
		printf("0");

	return 0;
}