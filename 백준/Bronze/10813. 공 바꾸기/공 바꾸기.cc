#include <stdio.h>
int main() {
	int N, M, i, j, k = 0;
	scanf("%d %d", &N, &M);
	int A[N];
	for (int o = 1; o <= N; o++)
		A[o - 1] = o;
	for (int o = 0; o < M; o++)
	{
		scanf("%d %d", &i, &j);
		k = A[i - 1];
		A[i - 1] = A[j - 1];
		A[j - 1] = k;
	}
	for (int o = 0; o < N; o++)
		printf("%d ", A[o]);
	return 0;
}