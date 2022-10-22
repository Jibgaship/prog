#include <stdio.h>
int main() {
	int N, max = 0;
	double avg;
	scanf("%d", &N);
	
	int tmp[N];
	double score[N];
	for(int i = 0; i < N; i++)
	{
		scanf("%d", &tmp[i]);
		if(max < tmp[i])
			max = tmp[i];
	}
	
	for(int i = 0; i < N; i++)
	{
		score[i] = (double)tmp[i] / max * 100;
		avg += score[i];
	}
	
	avg = avg / N;
	printf("%.2f", avg);
	return 0;
}