#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> suffixes;

    for (int i = 0; i < my_string.length(); i++) {
        suffixes.push_back(my_string.substr(i));  
    }

    sort(suffixes.begin(), suffixes.end());

    return suffixes;
}
