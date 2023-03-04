#include <stdio.h>
int main() {
	int num, cnt = 0;
	scanf("%d", &num);
	cnt = num / 4;
	for (int i = 0; i < cnt; i++)
		printf("long ");
	printf("int");
	return 0;
}