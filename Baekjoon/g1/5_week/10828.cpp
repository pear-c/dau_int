#include <stack>
#include <queue>
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int N;
    cin >> N;
    stack<int>s;
    for(int i=0; i<N; i++){
        string str;
        cin >> str;
        int k;
        //push
        if(str == "push"){
            cin >> k;
            s.push(k);
        }
        //pop
        if(str == "pop"){
            if(s.empty()){
                cout << -1 <<'\n';
            }
            else{
                cout << s.top() <<'\n';
                s.pop();
            }
        }
        //size
        if(str =="size"){
            cout << s.size() <<'\n';
        }
        //empty
        if(str =="empty"){
            if(s.empty()){
                cout << 1 <<'\n';
            }
            else{
                cout << 0 <<'\n';
            }
        }
        //top
        if(str == "top"){
            if(s.empty()){
                cout << -1 << '\n';
            }
            else{
                cout << s.top() << '\n';
            }
        }
    }
    return 0;
}


