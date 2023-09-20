#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <queue>

using namespace std;

int main(){
    queue<int> q;
    int n, k;
    cin >> n >> k;
    for(int i = 1; i <= n; i++)
        q.push(i);
    while (!q.empty()) {
        for(int i = 0; i < k - 1; i++){
            q.push(q.front());
            q.pop();
        }
        
        if(q.size()==n)cout << "<";
        
        cout << q.front();
        q.pop();
        
        if(q.size()==0)
        {
            cout << ">";
            continue;
        }
        
        cout << ", ";
    }
}