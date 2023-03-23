#include <stdio.h>
#include <string.h>

int main() {
	char arr[100];
	int cnt = 1;
	scanf("%s", arr);
	
	for (int i = 1; i < strlen(arr); i++) {
		cnt++;
		
		if ((arr[i - 1] == 'c' || arr[i - 1] == 's' || arr[i - 1] == 'z') && arr[i] == '=')
			cnt--;
		else if ((arr[i - 1] == 'c' || arr[i - 1] == 'd') & arr[i] == '-')
			cnt--;
		else if ((arr[i - 1] == 'l' || arr[i - 1] == 'n') && arr[i] == 'j')
			cnt--;
		else if (arr[i - 1] == 'd' && arr[i] == 'z' && arr[i + 1] == '=')
			cnt--;
	}
	
	printf("%d", cnt);

	return 0;
}