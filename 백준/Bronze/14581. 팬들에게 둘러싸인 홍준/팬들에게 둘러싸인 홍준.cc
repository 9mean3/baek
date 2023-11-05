#include<iostream>
using namespace std;
int main(){
    string input;
    cin >> input;
    for(int i = 0; i < 9; i++){
        if(i == 4) cout <<':'<< input<<':';
        else cout << ":fan:";
        
        if((i + 1) % 3 == 0)
            cout << endl;
    }
}