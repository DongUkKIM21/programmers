#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int a, int b) {
    int answer = stoi(to_string(a) + to_string(b));
    
    int d = 2 * a * b;
    
    return max(answer, d);
}