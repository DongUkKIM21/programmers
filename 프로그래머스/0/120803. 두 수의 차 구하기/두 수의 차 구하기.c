#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num1, int num2) {
    int answer = 0;
    
    if(num1 >= -50000 && num1 <= 50000 && num2 >= -50000 && num2 <= 50000){
        answer = num1 - num2;
    } 
    return answer;
}


/*
int solution(num1, num2) {
    answer = 0;
    if(-50000 <= num1 <= 50000 && -50000 <= num2 <= 50000){
    answer = num1 - num2;
    }
    return answer
}

int main() {
    int num1, num2
    scanf(num1, num2);

    solution();
}




*/