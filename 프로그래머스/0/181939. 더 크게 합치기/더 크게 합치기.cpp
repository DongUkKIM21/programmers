#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int a, int b) {
    string str_a = to_string(a);
    string str_b = to_string(b);
    
    string ab = str_a + str_b;
    string ba = str_b + str_a;
    
    if(stoi(ab) >= stoi(ba)){
        return stoi(ab);
    }
    else {
        return stoi(ba);
    }
    
}