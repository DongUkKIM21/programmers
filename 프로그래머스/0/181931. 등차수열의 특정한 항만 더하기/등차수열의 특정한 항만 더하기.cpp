#include <string>
#include <vector>

using namespace std;

int solution(int a, int d, vector<bool> included) {
    int answer = 0;
    
    for(int i = 0; i < included.size(); i++){
        int value = a + d * i;  

        if (included[i]) {      
            answer += value;
        }
    }
    return answer;
}