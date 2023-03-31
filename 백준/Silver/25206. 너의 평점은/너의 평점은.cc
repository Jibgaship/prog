#include <stdio.h>
#include <string.h>
 
int main(){
	char arr[101], rd[3];
	float sc, sum = 0.0, scsum = 0.0;
    for(int i = 0; i < 20; i++) {
		scanf("%s %f %s", arr, &sc, rd);
		
		if (strcmp(rd,"A+") == 0) {
			sum += sc * 4.5;
			scsum += sc;
		}
		else if (strcmp(rd,"A0") == 0) {
			sum += sc * 4.0;
			scsum += sc;
		}
		else if (strcmp(rd,"B+") == 0) {
			sum += sc * 3.5;
			scsum += sc;
		}
		else if (strcmp(rd,"B0") == 0) {
			sum += sc * 3.0;
			scsum += sc;
		}
		else if (strcmp(rd,"C+") == 0) {
			sum += sc * 2.5;
			scsum += sc;
		}
		else if (strcmp(rd,"C0") == 0) {
			sum += sc * 2.0;
			scsum += sc;
		}
		else if (strcmp(rd,"D+") == 0) {
			sum += sc * 1.5;
			scsum += sc;
		}
		else if (strcmp(rd,"D0") == 0) {
			sum += sc * 1.0;
			scsum += sc;
		}
		else if (strcmp(rd,"F") == 0) {
			sum += sc * 0;
			scsum += sc;
		}
	}
	
	printf("%f", sum / scsum);
	
	return 0;
}