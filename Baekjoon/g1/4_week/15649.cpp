#include <queue>
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int N, M;
int level;
vector <int> v;
vector <bool> check;
vector <int> selected;



void backtrack(int level){
    if(level == M){
        for(int i=0; i<v.size(); i++){
            cout << v[i] << ' ';
        }
        cout << '\n';
        return;
    }
    
    for(int i=1; i<=N; i++){
        if(!check[i]){
            check[i] = true;
            v.push_back(i);
            backtrack(level+1);
            v.pop_back();
            check[i] = false;
            
        }
    }
}

int main(){
    ios::sync_with_stdio(false); // 입출력 속도 향상
    cin.tie(NULL);               // 입출력 묶음 해제
    
    cin >> N >> M;
    check.resize(N+1, false);
    backtrack (0);
    return 0;
}
