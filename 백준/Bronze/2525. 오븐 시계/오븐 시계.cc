#include <stdio.h>
int main() {
	int H, M, MM, hour, min;
	scanf("%d %d", &H, &M);
	scanf("%d", &MM);
	if (M + MM >= 60)
	{
		hour = H + (M + MM) / 60;
		min = (M + MM) % 60;
		if (hour < 24)
			printf("%d %d", hour, min);
		else
			printf("%d %d", hour - 24, min);
	}
	else
		printf("%d %d", H, M + MM);
	return 0;
}