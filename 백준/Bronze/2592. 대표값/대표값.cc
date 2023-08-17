#include <iostream>
#include <map>

using namespace std;
int main(){
    int avr = 0;
    map<int,int> m;
    
    int max = -1;
    int mIdx = -1;
    for(int i = 0; i < 10; i++){
        int input;
        cin >> input;
        avr+=input;
        m[input]++;
        if(m[input] > max){
            max = m[input];
            mIdx = input;
        }
    }
    cout << avr/10 << endl;
    cout << mIdx << endl;
    
    
    return 0;
}