#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num1, int num2) {
    double answer = 0;
    
    if(num1 > 0 && num1 <= 100 && num2 > 0 && num2 <= 100){
        answer = ((double)num1 / num2);
        answer *= 1000;
    }
    return answer;
}

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    
    int result = solution(num1, num2);
    printf("%d", result);
}