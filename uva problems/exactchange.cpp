#include <string>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <set>


using namespace std;
int t,n,a[101],price,gapmemo[102][10002] = {},changememo[10002] = {};
vector<int> best_sol;

int gap(int id,int rem){
    if (id == n-1)    return abs(a[id] - rem);
    if (rem < 0)    return abs(rem);
    if(gapmemo[id][rem])    return gapmemo[id][rem];

    
    return gapmemo[id][rem] = min(gap(id+1,rem),gap(id,rem-a[id]));
}

int change(int val){
    if(val == 0)    return 0;
    if (val < 0)    return 10001;
    if (changememo[val])    return changememo[val]; 
    int res = 10001;
    for (int i=0;i<n;++i){
        res = min(res,change(val-a[i]));
    }
    return changememo[val] = res+1;
}

int main(){
    
    cin >> t;
    while (t--){
        cin >> price >> n;
        for (int i=0;i<n;++i){
            cin >> a[i];
        }
        vector<int> cur_sol;
        int res1 = gap(0,price)+ price ;
        cout << res1 << " " << change(res1)<< endl;
    }
    
    return 0;
    
    
}