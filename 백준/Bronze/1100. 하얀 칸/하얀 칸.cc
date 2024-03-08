
#include<iostream>
using namespace std;

int main(){
    int cnt = 0;
    for(int i = 0; i < 8; i++){
        string input;
        cin >> input;
        for(int j = 0; j < 8; j++){
            if(input[j] == 'F'){
                if(i % 2 == 0 && j % 2 == 0){
                    cnt++;
                }
                else if(i % 2 != 0 && j % 2 != 0){
                    cnt++;
                }
            }
        }
    }
    cout << cnt << endl;
}
