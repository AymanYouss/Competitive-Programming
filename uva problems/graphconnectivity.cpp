#include <string>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <set>


using namespace std;

void dfs(int i,vector<vector<int>> &g,vector<int> &visited){
    visited[i] = 1;
    for (int u : g[i]){
        if(!visited[u]) dfs(u,g,visited);
    }
    
}


int main(){
    int t;
    string s;
    cin >> t;
    //cin.ignore();
    while(t--){
        char c;
        cin >> c;
        cin.ignore();
        int n = c - 'A' +1;
        vector<vector<int>> g(n);
        vector<int> visited(n,0);
        while(getline(cin,s) && s != ""){
            g[s[0] - 'A'].push_back(s[1] - 'A');
            g[s[1] - 'A'].push_back(s[0] - 'A');
        }
        int res = 0;
        for (int i=0;i<n;++i){
            if (!visited[i]){
                res++;
                dfs(i,g,visited);
                
            }
        }

        cout << res << endl;
        if(t) cout << endl;

        

    }
    
    return 0;
    
    
}