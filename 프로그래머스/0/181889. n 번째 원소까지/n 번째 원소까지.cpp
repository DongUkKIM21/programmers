#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> num_list, int n) {
    vector<int> answer;
    
    // push_back은 단일 값만 추가하는 함수를 추가해서 막힘
    answer.assign(num_list.begin(), num_list.begin() + n);
    
    return answer;
}