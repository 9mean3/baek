#include<iostream>
#include<queue>
#include<vector>
using namespace std;

const int INF = 200000000;
vector<pair<int, int>> board[1001];
vector<pair<int, int>> revsBoard[1001];
int d[1002];
int revsD[1002];
int N, M, X;

void dajk(int s) {
    fill(&d[0], &d[N + 1], INF);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    d[s] = 0;
    pq.push({ d[s], s });

    while (!pq.empty())
    {
        auto cur = pq.top();
        pq.pop();
        if (d[cur.second] != cur.first) continue;
        for (auto next : board[cur.second]) {
            if (d[cur.second] + next.first > d[next.second]) continue;
            d[next.second] = d[cur.second] + next.first;
            pq.push({ d[next.second], next.second });
        }
    }
}

void revsDajk(int s) {
    fill(&revsD[0], &revsD[N + 1], INF);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    revsD[s] = 0;
    pq.push({ revsD[s], s });

    while (!pq.empty())
    {
        auto cur = pq.top();
        pq.pop();
        if (revsD[cur.second] != cur.first) continue;
        for (auto next : revsBoard[cur.second]) {
            if (revsD[cur.second] + next.first > revsD[next.second]) continue;
            revsD[next.second] = revsD[cur.second] + next.first;
            pq.push({ revsD[next.second], next.second });
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M >> X;
    while (M--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        board[a].push_back({ w, b });
        revsBoard[b].push_back({ w, a });
    }

    int answer = -1;
    dajk(X);
    revsDajk(X);

    for (int i = 1; i <= N; i++)
    {
        answer = max(answer, d[i] + revsD[i]);
        //cout <<i << '-' << " d: " << d[i] << " revs: " << revsD[i] << endl;
    }

    cout << answer;
}