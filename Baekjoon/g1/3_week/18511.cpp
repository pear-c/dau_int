#include <queue>
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    int N, K;
    vector <int> v;
    vector <int> b;
    vector <int> k;
    cin >> N;
    cin >> K;
    for(int i=0; i<K; i++){
        int num;
        cin >> num;
        v.push_back(num);
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    
    while(N>0){ // 나머지 0될때까지
        b.push_back(N % 10); // 10으로 나눠서 각 자리수 v에 넣음
        N = N / 10;
    }
    reverse(b.begin(), b.end());
    
    for(int i=0; i<b.size(); i++){
        for(int j=0; j<v.size(); j++){
            if(b[i]>=v[j]){
                cout << b[i] <<" "<<  v[j] << endl;
                k.push_back(v[j]);
                break;
            }
        }
    }
    for(int i=0; i<k.size(); i++){
        cout << k[i];
    }
    
    
    return 0;
}
