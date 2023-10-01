#include<iostream>
using namespace std;
int main(){
    int b[2] = {0,};
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int input;
        cin >> input;
        b[input]++;
    }
    if(b[0] > b[1])
    cout << "Junhee is not cute!";
        else
            cout << "Junhee is cute!";
}