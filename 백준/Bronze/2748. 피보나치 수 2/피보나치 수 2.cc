#include<iostream>
#include<vector>
#include<set>
#include<stack>
#include<deque>
#include<sstream>
using namespace std;

long long fibo[91] = {0, 1, 1, 2, 3, 5, 8};

int main() {
	long long n;
	cin >> n;
    for(int i = 7; i <= n; i++){
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
    cout << fibo[n];
}