#include <stdio.h>
#include<string.h>
int main() {
	char arr[100];
	int num = 0;
	
	scanf("%s", arr);
	
	for (int i = 0; i < strlen(arr); i++)
		num++;
	printf("%d", num);
	
	return 0;
}