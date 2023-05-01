#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* str1, const char* str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int len = len1 + len2;
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(len + 1);
    
    int idx = 0;
    for(int i = 0; i < len1 || i < len2; i++) {
        if(i < len1) 
            answer[idx++] = str1[i];
        if(i < len2)
            answer[idx++] = str2[i];
    }
    answer[idx] = '\0';
    return answer;
}

int main() {
    char str1[100], str2[100];
    scanf("%s %s", str1, str2);
    printf("%s", solution(str1, str2));
    
    return 0;
}