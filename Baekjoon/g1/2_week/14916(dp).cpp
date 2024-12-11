#include <queue>
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <numeric>
using namespace std;


int main(){
    int N;
    cin >> N;
    vector<int> dp(N+1,1000000);
    dp[0] = 0;
    dp[2] = 1;
    dp[4] = 2;
    for(int i = 5; i<=N; i++){
        dp[i] = min(dp[i-2]+1, dp[i-5] +1) ;
    }
    
    if(dp[N] != 1000000){
        cout << dp[N] << endl;
    }
    else{
        cout << -1 << endl;
    }
    
    return 0;
}

