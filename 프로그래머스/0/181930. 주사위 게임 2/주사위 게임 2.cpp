#include <iostream>
#include <cmath>
using namespace std;

int solution(int a, int b, int c) {
    int sum = a + b + c;
    int sum_of_squares = pow(a, 2) + pow(b, 2) + pow(c, 2);
    int sum_of_cubes = pow(a, 3) + pow(b, 3) + pow(c, 3);

    if (a != b && b != c && a != c) {
        return sum;
    }

    else if (a == b && b != c || b == c && a != b || a == c && b != c) {
        return sum * sum_of_squares;
    }

    else {
        return sum * sum_of_squares * sum_of_cubes;
    }
}

/*
    // 숫자를 set에 넣어 중복 제거
    set<int> unique_numbers = {a, b, c};

    // 세 숫자가 모두 다를 경우
    if (unique_numbers.size() == 3) {
        return sum;
    }
    // 두 숫자가 같고 하나가 다를 경우
    else if (unique_numbers.size() == 2) {
        return sum * sum_of_squares;
    }
    // 세 숫자가 모두 같을 경우
    else {
        return sum * sum_of_squares * sum_of_cubes;
    }
}
*/