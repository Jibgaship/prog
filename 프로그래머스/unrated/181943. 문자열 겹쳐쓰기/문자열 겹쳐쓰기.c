#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string, const char* overwrite_string, int s) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(strlen(my_string) + 1);
    strcpy(answer, my_string);
    int cnt = 0;
    
    for(int i = 0; i < strlen(my_string); i++) {
        if(i >= s && i < s + strlen(overwrite_string)) {
            answer[i] = overwrite_string[cnt];
            cnt++;
        }
        else
            answer[i] = my_string[i];
    }
    return answer;
}

int main() {
    char my[1000], overwrite[1000], res;
    int ss;
    scanf("%s %s %d", my, overwrite, &ss);
    res = solution(my, overwrite, ss);
    
    printf("%s", res);
    
    return 0;
}