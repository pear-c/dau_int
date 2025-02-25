#include <queue>
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <numeric>
using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    vector<vector<long long>> dp(N+2,vector<long long> (M+2));
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cin >> dp[i][j];
        }
    }
    int T;
    cin >> T;
    for(int t=0; t<T; t++){
        long long x1,x2,y1,y2;
        cin >> x1 >> y1 >> x2 >> y2;
        x1 -= 1;
        x2 -= 1;
        y1 -= 1;
        y2 -= 1;
        long long count = 0;
        
        cout << count << endl;
    }
    return 0;
}


