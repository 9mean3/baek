#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <queue>

using namespace std;

int n;
vector<vector<int>> board;
bool visited[32001];

void dfs(int v){
    if(visited[v]) return;
    for(auto i : board[v]){
        if(!visited[i]) dfs(i);
    }
    visited[v] = true;
    cout << v << ' ';
    
}

int main(){
    int m;
    cin >> n >> m;
    board.resize(n + 1);
    for(int i = 0; i < m; i++){
        int a,b;
        cin >> a >> b;
        board[b].push_back(a);
    }
    
    queue<int> q;
    for(int i = 1; i <= n; i++){
        if(board[i].empty()){
            visited[i] = true;
            cout << i << ' ';
        }
        else q.push(i);
    }
    
    while (!q.empty()) {
        int v = q.front();
        q.pop();
        if(visited[v]) continue;
        else dfs(v);
    }
}
