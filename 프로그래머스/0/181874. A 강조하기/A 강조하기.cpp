#include <string>
#include <vector>
#include <cctype>

using namespace std;

string solution(string myString) {
    
    for(int i = 0; i < myString.size(); i++){
        if(myString[i] == 'a' || myString[i] == 'A'){
            myString[i] = 'A';
        } else{
            myString[i] = tolower(myString[i]);
        }
    }
    return myString;
}