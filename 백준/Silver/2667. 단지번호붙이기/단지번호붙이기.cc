#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <queue>

using namespace std;


int board[26][26] = { 0, };
int visited[26][26] = { 0, };
vector<int> result;
int n;

void BFS(int a, int b){
    queue<pair<int, int>> q;
    q.push({ a, b });
    visited[a][b] = 1;
    
    int dx[4] = {1,0,-1,0};
    int dy[4] = {0,-1,0,1};
    int count = 1;
    
    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for(int i = 0; i < 4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx < 0 && ny < 0 && nx >= n && ny >= n) continue;
            if(board[nx][ny] == 1 && visited[nx][ny] == 0){
                visited[nx][ny] = visited[x][y]+1;
                q.push({ nx, ny });
                count++;
            }
        }
    }
    
    result.push_back(count);
}

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        string input;
        cin >> input;
        for(int j = 0; j < n; j++){
            board[i][j] = input[j] - '0';
        }
    }
    
    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(visited[i][j] == 0 && board[i][j] == 1){
                BFS(i, j);
                cnt++;
            }
        }
    }
    
    cout << cnt << endl;
    sort(result.begin(), result.end());
    for(auto i : result){
        cout << i << endl;
    }
}
