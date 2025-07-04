#include <string>
#include <vector>

using namespace std;

int solution(string number) {
    int answer = 0;
    
    for(char ch : number){
        answer += ch - '0';
    }
    
    return answer % 9;
    
    
    /*
    int answer = 0;
    int num;
    
    num = stoi(number);
    
    answer = num % 9; 
    */
    
    return answer;
}