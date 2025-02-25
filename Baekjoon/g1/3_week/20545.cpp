#include <queue>
#include <iostream>
#include <vector>


using namespace std;
int main(){
    vector<int> v;
    int cash ,M;
    cin >> cash;
    for(int i=0; i<14; i++){
        cin >> M;
        v.push_back(M);
    }
    ////BNP
    int bnp_stock = 0;
    int bnp_cash = cash;
    int bnp_total;
    for(int i=0; i <14; i++){
        if(bnp_cash>=v[i]){
            int bnp_amount = bnp_cash / v[i];
            bnp_stock = bnp_amount;
            bnp_cash = bnp_cash - (v[i]*bnp_amount);
        }
    }
    bnp_total = bnp_cash + (bnp_stock * v[13]);
    ///// TIMING
    int t_stock = 0;
    int t_cash = cash;
    int t_total;
    for(int i=3; i<14; i++){
        if(v[i-1] > v[i-2] && v[i-2] > v[i-3]){ // 전량 매도 signal
            if(t_stock > 0){
                t_cash += t_stock * v[i];
                t_stock = 0;
            }
        }
        else if(v[i-1] < v[i-2] && v[i-2] < v[i-3]){ // 전량 매수 signal
            if(t_cash >= v[i]){
                int t_amount = t_cash/v[i];
                t_stock = t_stock + t_amount;
                t_cash = t_cash - (v[i]*t_amount);
            }
        }
    }
    t_total = t_cash + (t_stock * v[13]);
    
    
    
    if(bnp_total > t_total){
        cout << "BNP" << endl;
    }
    else if(bnp_total < t_total){
        cout << "TIMING" << endl;
    }
    else{
        cout << "SAMESAME" << endl;
    }
    return 0;
}

