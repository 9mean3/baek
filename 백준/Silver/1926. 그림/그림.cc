#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <queue>

using namespace std;


int board[501][501] = { 0, };
int visited[501][501] = { 0, };
int n, m;
vector<int> sizes;


void BFS(int aa, int bb){
    queue<pair<int, int>> q;
    q.push({ aa, bb });
    visited[aa][bb] = 1;

    int cnt = 1;
    
    int dx[4] = {1,0,-1,0};
    int dy[4] = {0,-1,0,1};
    
    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for(int i = 0; i < 4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
            if(board[nx][ny] == 1 && visited[nx][ny] == 0){
                visited[nx][ny] = visited[x][y]+1;
                q.push({ nx, ny });
                cnt++;
            }
        }
    }
    sizes.push_back(cnt);

}

int main(){
    cin >> n >> m;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            int input;
            cin >> input;
            board[i][j] = input;
        }
    }
    
    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(board[i][j] == 1 && visited[i][j] == 0){
                BFS(i,j);
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    if(sizes.empty()){
        cout << 0;
    }
    else{
        sort(sizes.begin(),sizes.end());
        cout << sizes.back();
    }
    
    
}
