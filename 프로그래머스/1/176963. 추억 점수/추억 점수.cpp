#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    unordered_map<string, int> map;

    for (int i = 0; i < name.size(); i++) {
        map[name[i]] = yearning[i];
    }

    for (int i = 0; i < photo.size(); i++) {
        int score = 0;
        for (int j = 0; j < photo[i].size(); j++) {
            if (map.find(photo[i][j]) != map.end()) {
                score += map[photo[i][j]];
            }
        }
        answer.push_back(score);
    }

    return answer;
}

int main() {
    vector<string> name = {"may", "kein", "kain", "radi"};
    vector<int> yearning = {5, 10, 1, 3};
    vector<vector<string>> photo = {
        {"may", "kein", "kain", "radi"},
        {"may", "kein", "brin", "deny"},
        {"kon", "kain", "may", "coni"}
    };

    vector<int> result = solution(name, yearning, photo);

    for (int val : result) {
        printf("%d ", val);
    }

    return 0;
}
