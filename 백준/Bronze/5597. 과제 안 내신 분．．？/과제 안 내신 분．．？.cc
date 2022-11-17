#include <stdio.h>
int main() {
	int num[30], j = 0;
	
	for(int i = 0; i < 30; i++)
		num[i] = 0;
	
	for(int i = 0; i < 28; i++)
	{
		scanf("%d", &j);
		num[j - 1] = j;
	}
	
	for(int i = 0; i < 30; i++)
	{
		if(num[i] == 0)
			printf("%d\n", i + 1);
	}
	return 0;
}