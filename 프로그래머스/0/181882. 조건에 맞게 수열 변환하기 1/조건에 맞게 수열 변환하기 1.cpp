#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer = arr;
    
    for(int i = 0; i < answer.size(); i++){
            if(answer[i] <= 50 && answer[i] % 2 == 1){
                answer[i] *= 2;
            } else if(answer[i] >= 50 && answer[i] % 2 == 0) {
                answer[i] /= 2;
            }
        }
    
    return answer;
}