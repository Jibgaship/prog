#include <stdio.h>
int main() {
	int count, num1, num2;
	scanf("%d", &count);
	for (int i = 0; i < count; i++)
	{
		num1 = 0;
		num2 = 0;
		scanf("%d %d", &num1, &num2);
		printf("%d\n", num1 + num2);
	}
	return 0;
}