#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    string S;
    string target = "I";
    cin >> N >> M >> S;

    for (int i = 0; i < N; i++)
    {
        target += "OI";
        //cout << "target: " << target << endl;
    }

    int i = 0;
    while (S.find(target) != string::npos)
    {
        i++;
        S.erase(S.find(target), 2);
        //cout <<"지금 S: " << S << endl;
    }
    cout << i;
}