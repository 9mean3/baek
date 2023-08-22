#include<iostream>
#include<string>
#include<vector>
#include<time.h>
#include<stack>
#include<queue>
#include<deque>
#include<map>
#include<set>

#include<algorithm>//

#include<sstream>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int idx = 0; idx < t; idx++)
	{
        int H, W, N;
        cin >> H >> W >> N;

        int quotient = N / H;
        int remainder = N % H;

        if (remainder == 0) {
            remainder = H;
            quotient -= 1;
        }

        cout << remainder * 100 + quotient + 1 << endl;
	}
}