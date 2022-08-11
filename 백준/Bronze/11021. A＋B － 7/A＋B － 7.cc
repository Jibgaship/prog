#include <stdio.h>
int main() {
	int T, num1, num2;
	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		scanf("%d %d", &num1, &num2);
		printf("Case #%d: %d\n", i + 1, num1 + num2);
	}
	return 0;
}