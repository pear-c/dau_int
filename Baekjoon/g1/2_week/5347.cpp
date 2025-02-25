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
    long long a,b;
    vector<long long>v;
    for(int i=0; i<N; i++){
        cin >> a >> b;
        
        v.push_back((a*b) / gcd(a,b));
    }
    for(int i=0; i<v.size(); i++){
        cout << v[i] << '\n';
    }
    
    
    return 0;
}

