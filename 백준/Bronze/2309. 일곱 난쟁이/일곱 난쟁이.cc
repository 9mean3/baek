#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <queue>

using namespace std;

int main(){
    vector<int> hs;
    int sum = 0;
    int a = 0, b = 0;
    bool isf = false;
    for(int i = 0; i < 9; i++){
        int input;
        cin >> input;
        hs.push_back(input);
        sum += input;
    }
    sort(hs.begin(),hs.end());
    for(int i = 0; i < hs.size(); i++){
        for(int j = i+1; j < hs.size(); j++){
            if(sum - (hs[i] + hs[j]) == 100){
                a = hs[i];
                b = hs[j];
                isf = true;
                break;
            }
        }
        if(isf){
            break;
        }
    }
    
    for(auto i : hs){
        if(i == a || i == b)
            continue;
        cout << i << "\n";
    }
}