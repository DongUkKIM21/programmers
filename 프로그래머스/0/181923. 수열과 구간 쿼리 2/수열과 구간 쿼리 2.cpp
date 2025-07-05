#include <vector>
#include <algorithm>
#include <climits>  

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;

    for (auto query : queries) {
        int s = query[0];
        int e = query[1];  
        int k = query[2];  

        int min = INT_MAX;  
        bool found = false;     

        for (int i = s; i <= e; i++) {
            if (arr[i] > k && arr[i] < min) {
                min = arr[i];
                found = true;
            }
        }

        if (found) {
            answer.push_back(min);
        } else {
            answer.push_back(-1);
        }
    }

    return answer;
}
