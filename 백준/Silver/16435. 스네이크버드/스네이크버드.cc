#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <queue>

using namespace std;

int main(){
    int n,l;
    vector<int> hs;
    cin >> n >> l;
    for(int i = 0; i < n; i++){
        int h;
        cin >> h;
        hs.push_back(h);
    }
    
    sort(hs.begin(), hs.end());
    for(auto i : hs){
        if(l >= i){
            l++;
        }
    }
    cout << l;
}