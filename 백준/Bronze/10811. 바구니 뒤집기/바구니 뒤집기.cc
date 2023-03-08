#include <stdio.h>
int main() {
	int N, M, i, j;
	
	scanf("%d %d", &N, &M);
	int A[N], B[N];
	
	for (int o = 0; o < N; o++)
	{
		A[o] = o + 1;
		B[o] = o + 1;
	}
	
	for (int o = 0; o < M; o++)
	{
		scanf("%d %d", &i, &j);
		for (int p = 0; p <= j - i; p++)
		{
			B[j - 1 - p] = A[i - 1 + p];
		}
		for (int p = 0; p <= j - i; p++)
		{
			A[i - 1 + p] = B[i - 1 + p];
		}
	}
	
	for (int o = 0; o < N; o++)
		printf("%d ", B[o]);
	
	return 0;
}