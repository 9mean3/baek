#include<iostream>
#include<vector>
using namespace std;

int main(){
        int n, count = 0;
    cin >> n;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }
    for (int i = 0; i < v.size(); i++)
    {
        string checker;
        bool isf = false;
        for (int j = 0; j < v[i].size(); j++)
        {
            if (j == 0) {
                checker += v[i][j];
                continue;
            }
            if (v[i][j] != v[i][j - 1]) {
                for (int k = 0; k < checker.size(); k++)
                {
                    if (checker[k] == v[i][j])
                        isf = true;
                }
                checker += v[i][j];
            }
        }
        //cout << isf;
        if (!isf)
            count++;
    }
    cout << count;
}