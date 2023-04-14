#include <stdio.h>
 
int main(){
	int arr[9][9];
	
	for(int i = 0; i < 9; i++) {
		for(int j = 0; j < 9; j++)
			scanf("%d", &arr[i][j]);
	}
	
	int max = 0, N = 0, M = 0;
	
	for(int i = 0; i < 9; i++) {
		for(int j = 0; j < 9; j++) {
			if(max <= arr[i][j]) {
				max = arr[i][j];
				N = i + 1;
				M = j + 1;
			}
		}
	}
	
	printf("%d \n%d %d", max, N, M);
	
	return 0;
}