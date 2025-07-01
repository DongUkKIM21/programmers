#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(long long n) {
    int len = 0;
    long long temp = n;
    
    while (temp > 0){
        temp /= 10;
        len++;
    }
    
    // 리턴할 값은 메모리를 동적 할당해주세요.
    int* answer = (int*)malloc(len *sizeof(int));
    
    for(int i = 0; i < len; i++){
        answer[i] = n % 10;
        n /= 10;
    }
    return answer;
}

int main(){
    long long n;
    scanf("%lld", &n);
    
    int* result = solution(n);
    
    if(result != NULL){
        printf("[");
        for(int i = 0; result[i] != '\0'; i++){
            printf("%d", result[i]);
            if(result[i+1] != '\n'){
                printf(",");
            }
        }
        printf("]");
    }
    
    solution(&n);
}