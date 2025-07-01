#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int x = 0;
    if(3 <= n && n <= 1000000){
        for(int i = 2; i <= n; i++){
            if(n % i == 1){
                x = i;
                break;
            }
        }
    }
    
    return x;
}

int main(){
    int n;
    scanf("%d", &n);
    
    solution(n);
    
}