#include<iostream>
using namespace std;

int main(){
    string jaehwan;
    string docter;
    
    cin >> jaehwan >> docter;
    
    string answer = jaehwan.size() >= docter.size() ? "go" : "no";
    
    cout << answer;
}