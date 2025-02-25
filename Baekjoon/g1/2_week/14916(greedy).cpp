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
    int count = 0;
    int p = N/5;  //5원 개수
    
    while(p>=0){
        int r = N -(5 * p);
        if(r % 2 == 0){
            count = p + (r/2) ;
            cout << count << endl;
            return 0;
        }
        p--;
    }
    
    cout << -1 <<endl;
    
    
    return 0;
}



