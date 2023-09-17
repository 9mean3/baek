#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <queue>

using namespace std;

int main(){
    string input;
    string result;
    string camb = {"CAMBRIDGE"};
    cin >> input;
    
    for(int i = 0; i < input.size(); i++){
        if(camb.find(input[i]) == string::npos){
            result += input[i];
        }
    }
    
    for(auto i : result){
        cout << i;
    }
}