#include <stdio.h>
#include <string.h>
 
int main(){
    int N;
    scanf("%d", &N);
 
    int cnt = 0;
	
    for(int i = 0; i < N; i++){
        char arr[101];
        scanf("%s", arr);
 
        int alph[26] = {0,};
 
        for(int j = 0; j < strlen(arr); j++){
            char letter = arr[j];
            if(alph[letter - 'a'] == 0)
                alph[letter - 'a'] = 1;
            else if(arr[j - 1] != arr[j])
                break;
 
            if(j == strlen(arr) - 1)
                cnt++;
        }
    }
    printf("%d\n", cnt);
	
	return 0;
}