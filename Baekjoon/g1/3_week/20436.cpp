#include <queue>
#include <iostream>
#include <vector>
#include <cmath>
#include <map>
#include <algorithm>
using namespace std;

int main(){
    vector<vector<char>> keyboard =  {
        {'q','w','e','r','t', 'y', 'u','i','o','p'},
        {'a','s','d','f','g','h','j','k','l'},
        {'z','x','c','v','b','n','m'}
    };
    
    
    map<char, pair<int,int>> left;
    map<char, pair<int,int>> right;
    for(int i=0; i<keyboard.size(); i++){
        for(int j=0; j<keyboard[i].size(); j++){
            if((i == 0 && j < 5) || (i == 1 && j < 5) || (i == 2 && j < 4)){
                left.insert({keyboard[i][j],{i,j}});
            }
            else{
                right.insert({keyboard[i][j],{i,j}});
            }
        }
    }
    
    char key1, key2;
    vector<char> v;
    vector<pair<int,int>> now;
    vector<pair<int,int>> v1;
    cin >> key1 >> key2;
    string s;
    cin >> s;
    
    //now[0] -> 왼손, now[1] -> 오른손
    now.push_back(left[key1]);
    now.push_back(right[key2]);
    
    for(int i=0;i<s.length(); i++){
        v.push_back(s[i]);
    }
    int count = 0;
    for(int i=0; i<s.length(); i++){
        if(left.find(v[i]) != left.end()){
            count += abs(now[0].first - left[v[i]].first) +abs(now[0].second - left[v[i]].second);
            count += 1;
            now[0] = left[v[i]];
            
        }
        else{
            count += abs(now[1].first - right[v[i]].first) +abs(now[1].second - right[v[i]].second);
            count += 1;
            now[1] = right[v[i]];
        }
        
    }
    cout << count << endl;
    return 0;
}





