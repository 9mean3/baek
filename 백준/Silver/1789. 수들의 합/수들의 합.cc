#include<iostream>
using namespace std;

int main(){
    long long s;
    long long mn, n = 0, count = 0;
    cin >> s;
    for (long long i = 1; i <= s; i++)
    {
    	count++;
    	n += i;
    	mn = s - n;
    	if (mn < i + 1)
    		break;
    }
    cout << count;
}