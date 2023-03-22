#include <stdio.h>

int main() {
	int cnt, st;
	float result = 0;
	
	scanf("%d", &cnt);
	
	for(int i = 0; i < cnt; i++) {
		scanf("%d", &st);
		int arr[st];
		float sum = 0, avg = 0, stcnt = 0;
		
		for (int j = 0; j < st; j++) {
			scanf("%d", &arr[j]);
		}
		
		for (int j = 0; j < st; j++)
			sum += arr[j];
		avg = sum / st;
		
		for (int j = 0; j < st; j++) {
			if (arr[j] > avg)
				stcnt++;
		}
		
		result = 100 * stcnt / st;
		printf("%.3f%%\n", result);
	}

	return 0;
}