#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int num) {
    int count = 0;
    long long answer = num;
    while (answer != 1) {
        if (answer % 2 == 0) {
            answer /= 2;
            count++;
        }
        else if (answer % 2 == 1) {
            answer = answer * 3 + 1;
            count++;
        }
        if (count == 500) {
            count = -1;
            break;
        }
    }

    return count;
}

int main() {
    int num;
    cin >> num;

    int result = solution(num);

    cout << result;
}