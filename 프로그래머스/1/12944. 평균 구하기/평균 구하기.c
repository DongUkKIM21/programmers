#include <stdio.h>
#include <stdlib.h>

double solution(int arr[], size_t arr_len) {
    double answer = 0;

    for(size_t i = 0; i < arr_len; i++) {
        answer += arr[i];
    }

    answer = answer / arr_len;
    return answer;
}

int main() {
    int arr[100];
    size_t n;

    scanf("%zu", &n);

    for (size_t i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    double avg = solution(arr, n); 
    
    return 0;
}
