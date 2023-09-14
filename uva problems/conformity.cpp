#include <string>
#include <bits/stdc++.h>
#include <sstream>
#include <algorithm>


using namespace std;

int same(vector<int> v1, vector<int>v2){
    int flag = 0;
    for (int u : v1){
        flag = 0;
        for (int v : v2){
            if (u == v) flag = 1;
        }
        if(!flag)   return 0;
    }
    return 1;
}

int main(){
    int n;
    while(cin >> n && n){
        int max_val = 0;
        map<vector<int>,int> total;
        vector<int> combination(5);
        while(n--){
            string s="",temp;
            int a = 5;
            
            for (int i=0;i<5;++i){
                cin >> combination[i];
            }

            sort(combination.begin(),combination.end());
            
            
            total[combination]++;
            max_val = max(max_val,total[combination]);
        }
        int res = 0;
        for (auto [key,val] : total){
            if (val == max_val) res++;
        }

       cout  << res*max_val << endl; 
    }

    return 0;
}
