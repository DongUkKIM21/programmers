#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int* solution(int numer1, int denom1, int numer2, int denom2) {
    int* answer = (int*)malloc(2 * sizeof(int)); 

    int numer = numer1 * denom2 + numer2 * denom1;  
    int denom = denom1 * denom2;  

    int gcd_val = gcd(numer, denom);

    answer[0] = numer / gcd_val;  
    answer[1] = denom / gcd_val;  

    return answer;
}

int main() {
    int numer1, denom1, numer2, denom2;
    scanf("%d %d %d %d", &numer1, &denom1, &numer2, &denom2);

    int* result = solution(numer1, denom1, numer2, denom2);
    printf("[%d, %d]\n", result[0], result[1]); 

    free(result);  
    return 0;
}
