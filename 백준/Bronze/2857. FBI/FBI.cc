#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <queue>

using namespace std;

int main(){
    bool flag = false;
    for(int i = 0; i < 5; i++)
    {
        string input;
        cin >> input;
        if(input.find("FBI") != string::npos){
            cout << i + 1 << "\n";
            flag = true;
        }
    }
    
    if(!flag)
        cout << "HE GOT AWAY!";
}