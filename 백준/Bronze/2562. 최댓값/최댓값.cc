#include <stdio.h>
int main() {
	int n;
	int max = 0, count;
	for (int i = 1; i < 10; i++)
	{
		scanf("%d", &n);
		if(max < n)
		{
			max = n;
			count = i;
		}
	
	}
	printf("%d\n", max);
	printf("%d\n", count);
	return 0;
}