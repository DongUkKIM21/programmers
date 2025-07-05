#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array) {
    sort(array.begin(), array.end());

    int maxCount = 0;
    int count = 1;
    int mode = array[0];
    bool same = false;

    for (int i = 0; i < array.size() - 1; i++) {
        if (array[i] == array[i + 1]) {
            count++;
        } else {
            if (count > maxCount) {
                maxCount = count;
                mode = array[i];
                same = false;
            } else if (count == maxCount) {
                same = true;
            }
            count = 1;
        }
    }

    if (count > maxCount) {
        mode = array[array.size() - 1];
        same = false;
    } else if (count == maxCount) {
        same = true;
    }

    return same ? -1 : mode;
}
