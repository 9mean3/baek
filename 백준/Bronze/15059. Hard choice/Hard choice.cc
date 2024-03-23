#include<iostream>
using namespace std;

int main(){
    int a[3];
    int r[3];
    int ans = 0;
    
    for(int i = 0; i < 3; i++){
        cin >> a[i];
    }
    for(int i = 0; i < 3; i++){
        cin >> r[i];
        if(a[i] - r[i] < 0) ans += a[i] - r[i];
    }
    cout << ans * -1;
}