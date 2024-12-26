#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N;
    cin >> N;
    
    vector<vector<int>>v(N+1);
    for(int i =0;i<N-1; i++){
        int p1, p2;
        cin >> p1 >> p2;
        v[p1].push_back(p2);
        v[p2].push_back(p1);
    }
    int Q;
    cin >> Q;
    
    for(int i=0; i<Q; i++){
        int t,k;
        cin >> t >> k;
        if(t==1){
            if(v[k].size() == 1 ){ // -> 간선이 한개
                cout << "no\n";
            }
            else{
                cout << "yes\n";
            }
        }
        
        else if(t==2){
            cout <<"yes\n";
        }
    }
    
    
    
    return 0;
}
