#include <stdio.h>
#include <string.h>

int main() {
	char arr[15];
	int cnt = 0;
	
	scanf("%s", arr);
	
	for (int i = 0; i < strlen(arr); i++) {
		switch (arr[i]) {
			case 'A': case 'B': case 'C':
				cnt += 3;
				break;
			case 'D': case 'E': case 'F':
				cnt += 4;
				break;
			case 'G': case 'H': case 'I':
				cnt += 5;
				break;
			case 'J': case 'K': case 'L':
				cnt += 6;
				break;
			case 'M': case 'N': case 'O':
				cnt += 7;
				break;
			case 'P': case 'Q': case 'R': case 'S':
				cnt += 8;
				break;
			case 'T': case 'U': case 'V':
				cnt += 9;
				break;
			default:
				cnt += 10;
				break;
		}
	}
	
	printf("%d", cnt);
	
	return 0;
}