#include <string>
using namespace std;

int solution(string str1, string str2) {
    int len1 = str1.size();
    int len2 = str2.size();

    for (int i = 0; i <= len2 - len1; i++) {
        if (str2.substr(i, len1) == str1) {
            return 1;  
        }
    }
    return 0;  
}
