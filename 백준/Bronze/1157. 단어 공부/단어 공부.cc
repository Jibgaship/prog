#include <stdio.h>

int main() {
	char s[1000000];
	int a[26] = { 0, };

	scanf("%s", s);

	int i = 0;
	while (s[i]) {
		if (s[i] >= 'a')
			++a[s[i] - 'a'];
		else
			++a[s[i] - 'A'];
		++i;
	}

	int max = 0;
	int cnt = 0;
	int idx;

	for (int i = 0; i < 26; ++i) {
		if (a[i] > max) {
			idx = i;
			max = a[i];
			cnt = 1;
		}
		else if (a[i] == max) {
			cnt++;
		}
	}

	if (cnt > 1)
		printf("?\n");
	else
		printf("%c\n", idx + 'A');

	return 0;
}