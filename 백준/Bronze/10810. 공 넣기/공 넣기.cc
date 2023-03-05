#include <stdio.h>
int main() {
	int N, M, i, j, k;
	scanf("%d %d", &N, &M);
	int A[N];
	for (int o = 0; o < N; o++)
		A[o] = 0;
	for (int o = 0; o < M; o++)
	{
		scanf("%d %d %d", &i, &j, &k);
		int x = i - 1;
		for (int p = 0; p < j - i + 1; p++)
		{
			A[x] = k;
			x += 1;
		}
	}
	for(int o = 0; o < N; o++)
		printf("%d ", A[o]);
	return 0;
}