#include <stdio.h>
int main() {
	int sum, total;
	int sum2 = 0;
	scanf("%d", &sum);
	scanf("%d", &total);
	int price[total], count[total];
	for (int i = 0; i < total; i++)
	{
		scanf("%d %d", &price[i], &count[i]);
		sum2 = sum2 + (price[i] * count[i]);
	}
	if (sum == sum2)
		printf("Yes");
	else
		printf("No");
	return 0;
}