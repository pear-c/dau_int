#include <queue>
#include <iostream>
#include <string>
#include <vector>
#include <cctype> // for is digit
#include <algorithm>
#include <map>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N, M;
    vector <string> poke1;
    map <string, int > poke2;
    cin >> N >> M;
    for(int i = 0; i<N; i++){
        string s;
        cin >> s;
        poke1.push_back(s);
        poke2.insert({s,i});
    }
    
    for(int i = 0; i< M; i++){
        string k;
        cin >> k;
        //숫자일 경우
        if(isdigit(k[0])){
            cout << poke1[(stoi(k))-1] << '\n';
        }
        // 문자일 경우
        else{
            cout << poke2.at(k)+1 << endl;
        }
    }
    
    return 0;
}

