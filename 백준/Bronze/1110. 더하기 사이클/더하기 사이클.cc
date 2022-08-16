#include <stdio.h>
int main() {
	int N, M, a, b, c, d, count = 0;
	scanf("%d", &N);
	M = N;
	while(1)
	{
		a = N / 10;
		b = N % 10;
		c = (a+b) % 10;
		d = b*10 + c;
		N = d;
		count++;
		if(d==M)
			break;
	}
	printf("%d\n", count);
	return 0;
}