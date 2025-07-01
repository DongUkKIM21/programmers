#include <stdio.h>

int solution(const char* s) {
    int result = 0; 
    int i = 0;
    int sign = 1;  
    
    if (s[0] == '-') {
        sign = -1; 
        i++;  
    } else if (s[0] == '+') {
        i++; 
    }

    for (; s[i] != '\0'; i++) {
        result = result * 10 + (s[i] - '0'); 
    }

    return result * sign;  
}

int main() {
    char s[6]; 
    scanf("%s", s);  

    int result = solution(s);
    
}
