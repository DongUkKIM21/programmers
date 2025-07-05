#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int sum = 0;
    int product = 1;
    int size = num_list.size();
    
    if (size >= 11) {
        for (int i = 0; i < size; i++) {
            sum += num_list[i];
        }
        return sum;
    } else {
        for (int i = 0; i < size; i++) {
            product *= num_list[i];
        }
        return product;
    }

}