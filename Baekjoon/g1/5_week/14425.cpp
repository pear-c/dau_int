#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>
using namespace std;

int main(){
    int N,M;
    
    cin >> N >> M;
    set<string> s;
    string str;
    for(int i=0; i<N;i++){
        cin >> str;
        s.insert(str);
    }
    int count = 0;
    for (int i = 0; i < M; i++) {
            cin >> str;
            if (s.find(str) != s.end()) {
                count++;
            }
        }
    cout << count;
    return 0;
}


