#include<iostream>
using namespace std;
int main(){
    string s, abc = "abcdefghijklmnopqrstuvwxyz";
    int arr[27];
    cin >> s;
    
    for(int i = 0; i < 26; i ++)
    {
        arr[i] = -1;
    }
    
    for(int i = 0; i < abc.size(); i++){
        for(int j = 0; j < s.size(); j++){
            if(abc[i]==s[j])
            {
                arr[i] = j;
                break;
            }
        }
    }
    
    for (int i = 0; i < abc.size(); i++) {
	    cout << arr[i] << " ";
    }
}