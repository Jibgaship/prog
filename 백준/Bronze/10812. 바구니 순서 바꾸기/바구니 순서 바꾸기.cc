#include <stdio.h>

int main() {
	int N, M, i, j, k;
	scanf("%d %d", &N, &M);
	
	int A[N], B[N];
	for (int l = 0; l < N; l++)
	{
		A[l] = l + 1;
		B[l] = l + 1;
	}
	
	for (int l = 0; l < M; l++) {
		scanf("%d %d %d", &i, &j, &k);
		
		for (int o = 0; o <= j - k; o++) {
			B[i - 1 + o] = A[k - 1 + o];
		}
		
		for (int o = 0; o < k - i; o++) {
			B[i + (j - k + 1) - 1 + o] = A[i - 1 + o];
		}
		
		for (int o = 0; o < N; o++)
			A[o] = B[o];
	}
	
	for (int l = 0; l < N; l++)
		printf("%d ", B[l]);
	
	return 0;
}