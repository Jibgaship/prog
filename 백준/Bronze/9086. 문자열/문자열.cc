#include <stdio.h>
#include <string.h>

int main() {
	int count;
	char arr[100];
	char f, l;
	
	scanf("%d", &count);
	
	for (int i = 0; i < count; i++) {
		scanf("%s", arr);
		
		f = arr[0];
		l = arr[strlen(arr) - 1];
		
		printf("%c%c\n", f, l);
	}
	
	return 0;
}