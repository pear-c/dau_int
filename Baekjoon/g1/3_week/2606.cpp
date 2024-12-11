#include <queue>
#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> v;
vector<bool> visited;
int virus_count = 0 ;

void dfs(int x){
    visited[x] = true;
    virus_count ++ ;
    for(int i=0; i<v[x].size(); i++){
        int next = v[x][i];
        if(visited[next] == false){
            dfs(next);
        }
    }
}



int main(){
    int N, M;
    cin >> N;
    cin >> M;
    v.resize(N+1);
    visited.resize(N + 1, false);
    for(int i=0; i<M; i++){
        int p1, p2;
        cin >> p1 >> p2;
        v[p1].push_back(p2);
        v[p2].push_back(p1);
    }
    dfs(1);
    
    cout << virus_count - 1 << endl;
    return 0;
}
