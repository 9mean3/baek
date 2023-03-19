#include <cstring>
#include <iostream>
using namespace std;

int cnt=0;
char c[1001];

int recursion(const char *s, int l, int r){
    cnt++;
    if(l >= r) return 1;
    else if(s[l] != s[r]) return 0;
    else return recursion(s, l+1, r-1);
}

int isPalindrome(const char *s){
    return recursion(s, 0, strlen(s)-1);
}

int main(){
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> c;
		cout << isPalindrome(c);
        cout<< " " << cnt << endl;
		cnt = 0;
	}
    
}