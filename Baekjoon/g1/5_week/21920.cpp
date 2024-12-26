#include <stack>
#include <queue>
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <numeric>
using namespace std;

int main(){
    int N;
    vector<int> v;
    cin >> N;
    for(int i=0; i<N; i++){
        int A;
        cin >> A;
        v.push_back(A);
    }
    int X;
    cin >> X;
    long long total = 0;
    int count = 0;
    for(int i=0; i< v.size(); i++){
        if(gcd(X,v[i]) == 1){
            total = total + v[i];
            count ++;
        }
    }
    double result = total / double(count) ;
    cout << result ;
    return 0;
}


