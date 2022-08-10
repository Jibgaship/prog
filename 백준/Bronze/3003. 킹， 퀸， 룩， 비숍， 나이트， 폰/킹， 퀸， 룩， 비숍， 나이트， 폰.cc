#include <stdio.h>
int main() {
	int K, Q, R, B, Kn, P;
	scanf("%d %d %d %d %d %d", &K, &Q, &R, &B, &Kn, &P);
	printf("%d %d %d %d %d %d", 1 - K, 1 - Q, 2 - R, 2 - B, 2 - Kn, 8 - P);
	return 0;
}