#include <stdio.h>
int main() {
	long num01, num02, num03;
	long sum = 0;
	
	scanf("%ld %ld %ld", &num01, &num02, &num03);
	sum = num01 + num02 + num03;
	
	printf("%ld", sum);
	return 0;
}