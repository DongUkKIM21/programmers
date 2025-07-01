#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* phone_number) {
    int length = strlen(phone_number);
    
    char* answer = (char*)malloc(length + 1); 

    for (int i = 0; i < length - 4; i++) {
        answer[i] = '*';
    }

    for (int i = length - 4; i < length; i++) {
        answer[i] = phone_number[i];
    }

    answer[length] = '\0';
    
    return answer;
}

int main() {
    char phone_number[21]; 
    scanf("%s", phone_number); 
    
    char* result = solution(phone_number);
    printf("%s\n", result); 
    
    return 0;
}
