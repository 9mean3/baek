#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <queue>

using namespace std;

int main(){
    string m = {'a','e','i','o','u'};
    string input;
    cin >> input;
    int cnt = 0;
    for(int i = 0; i < input.size(); i++){
        if(m.find(input[i]) != string::npos)
            cnt++;
    }
    cout << cnt;
}
