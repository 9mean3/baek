#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;




int main(){
    int n;
    cin >> n;
    
    int answer = 0;
    int t = 0;
    
    while(answer != n){
        t++;
        int temp = t;
        
        //cout << temp << endl;
        while(temp>0){
            if(temp % 1000 == 666){
                answer++;
                break;
            }
            else{
                temp /= 10;
            }
        }
        
        
    }
    
    cout << t;
}