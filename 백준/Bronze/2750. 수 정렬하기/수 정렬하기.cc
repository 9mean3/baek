#include<iostream>
#include<vector>
using namespace std;

int main(){
        int n, input;
    vector<int> v;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        v.push_back(input);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {

            if (v[j - 1] > v[j]) {
                int temp = v[j - 1];
                v[j - 1] = v[j];
                v[j] = temp;
            }
        }
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
}