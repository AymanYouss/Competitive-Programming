#include <string>
#include <bits/stdc++.h>
#include <algorithm>
#include <stack>

using namespace std;
int t,n,price[1005],weight[1005],g,max_weight,sum=0,memo[1005][31];
int reward(int id, int rem){
    if (id == n || rem == 0) return 0;
    if (memo[id][rem] != -1) return memo[id][rem];
    if (weight[id] > rem)         return memo[id][rem] = reward(id + 1, rem);
    return memo[id][rem] = max(reward(id + 1, rem), price[id] + reward(id + 1, rem - weight[id]));
}

int main(){
    
    cin >> t;
    while(t--){
        cin >> n;
        sum = 0;
        memset(price,0,sizeof(price));
        memset(price,0,sizeof(weight));
        memset(memo,-1,sizeof(memo));
        for (int i=0;i<n;++i){
            cin >> price[i] >> weight[i];
        }
        cin >> g;
        for (int i=0;i<g;++i){
            cin >> max_weight;
            sum+= reward(0,max_weight);
        }
        //cout << "------------------" << endl;
        cout << sum << endl;

    }

    return 0;
}