#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer = num_list;
    int result = 0;
    int last = num_list[num_list.size() - 1];
    int second = num_list[num_list.size() - 2];
    
    if(last > second){
        result = last - second;
    } else{
        result = last * 2;
    }
    
    answer.push_back(result);
    
    return answer; 
}