#include <queue>
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <numeric>
using namespace std;

int main(){
    long long T;
    cin >> T;
    for(int t=0; t<T; t++){
        int N, M;
        cin >> N >> M;
        vector<vector<long long>> dp(N+2, vector<long long>(M+2,0));  //-> 2차원 벡터 0으로 초기화
        for(long long i=1; i<=M;i++){
            dp[1][i] = i;
        }
        
        for(long long n = 2; n<=N; n++){
            dp[n][n] = 1;
            for(long long m = n+1; m<=M; m++){
                dp[n][m] =  dp[n-1][m-1] + dp[n][m-1];
            }
        }
        cout << dp[N][M] << endl;
    }
    return 0;
}




