#include<iostream>
using namespace std;
int main(){
    int arr[5], n, sum=0;
    for(int i = 0; i < 5; i++){
        cin >> n;
        sum += n*n;
    }
    cout << sum%10;
}