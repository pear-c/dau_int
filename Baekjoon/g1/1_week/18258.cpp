#include <queue>
#include <iostream>

using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N;
    cin >> N;
    queue<int>q;
    
    for(int i=0;i<N;i++){
        string s;
        cin >> s;
        int k;
        // Push
        if(s == "push"){
            cin >> k;
            q.push(k);
        }
        // Pop
        if(s== "pop"){
            if(q.empty()){
                cout << -1 << '\n';
            }
            else{
                cout << q.front() << '\n';
                q.pop();
            }
        }
        //Size
        if(s=="size"){
            cout << q.size()<< '\n';
        }
        //Empty
        if(s=="empty"){
            if(q.empty()){
                cout << 1 <<'\n';
            }
            else{
                cout << 0 << '\n';
            }
        }
        //Front
        if(s=="front"){
            if(q.empty()){
                cout << -1 << '\n';
            }
            else{
                cout << q.front() << '\n';
            }
        }
        //Back
        if(s=="back"){
            if(q.empty()){
                cout << -1 << '\n';
            }
            else{
                cout << q.back() << '\n';
            }
        }
    }
    return 0;
}
