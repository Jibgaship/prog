#include <stdio.h>
int main() {
	int cnt;
	scanf("%d", &cnt);
	
	int num[cnt], n, count = 0;
	for(int i = 0; i < cnt; i++)
	{
		scanf("%d", &num[i]);
	}
	scanf("%d", &n);
	
	for(int i = 0; i < cnt; i++)
	{
		if(num[i] == n)
			count += 1;
	}
	printf("%d", count);
	return 0;
}