#include<iostream>
using namespace std;

int main(){
        int n, count = 0;
    cin >> n;
    while (1)
    {
        if (n <= 0)
            break;
        count++;
        if (n % 5 == 0) {
            n -= 5;
            continue;
        }
        n -= 3;
    }
    //cout << n << endl;
    if (n < 0)
        cout << -1;
    else
        cout << count;
}