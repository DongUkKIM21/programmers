#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num1, int num2) {
    int answer = 0;
    
    if(num1 > 0 && num1 <= 100 && num2 > 0 && num2 <= 100){
        answer = num1 / num2;
    }
    return answer;
}

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    
    int result = solution(num1, num2);
    
    printf(result);
    return 0;
}