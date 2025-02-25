#include <queue>
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    long long N;
    
    cin >> N;
    long long count = 0;
    long long sum = 0;
    for(long long i = 1; ; i++){
        count += i;
        if(count > N){
            break;
        }
        sum = i;
    }
    cout <<  sum << endl;
    return 0;
}


