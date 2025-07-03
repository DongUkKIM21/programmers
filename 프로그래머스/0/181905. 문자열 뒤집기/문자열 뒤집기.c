#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


char* solution(const char* my_string, int s, int e) {

    int length = strlen(my_string);

    char* result = (char*)malloc(length + 1);

    strncpy(result, my_string, s);
    result[s] = '\0'; 
    
    int j = 0;
    for (int i = e; i >= s; i--) {
        result[s + j] = my_string[i];
        j++;
    }

    strcpy(result + s + j, my_string + e + 1);

    return result;
}