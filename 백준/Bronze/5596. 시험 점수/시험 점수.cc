#include<iostream>
using namespace std;
int main(){
    int s = 0;
    int t = 0;
    for(int i = 0; i < 8; i++){
        int input;
        cin >> input;
        if(i < 4){
            s += input;
        }else{
            t += input;
        }
    }
    
    int answer = s >= t ? s : t;
    cout << answer;
}