#include <stdio.h>
#include <string.h>
int main() {
	int count, sum = 0;
	scanf("%d", &count);
	char arr[count];
	scanf("%s", arr);
	for (int i = 0; i < count; i++)
		sum = sum + arr[i] - '0';
	printf("%d", sum);
	return 0;
}