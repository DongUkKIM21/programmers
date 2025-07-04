#include <string>
#include <vector>

using namespace std;


vector<int> solution(int l, int r) {
    vector<int> answer;

    for (int i = l; i <= r; i++) {
        string str = to_string(i);
        bool a = true;

        for (char ch : str) {
            if (ch != '0' && ch != '5') {
                a = false;
                break;
            }
        }

        if (a) {
            answer.push_back(i);
        }
    }

    if (answer.empty()) {
        answer.push_back(-1);
    }

    return answer;
}