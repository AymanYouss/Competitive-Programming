#include <bits/stdc++.h>

using namespace std;
int cycle=0;
void dfs(int u, vector<vector<int>>& g, vector<int>& studied, vector<int>& res, vector<int>& currentpath){
    if (cycle) return;
    

    studied[u] = 1;
    currentpath[u] = 1;
    for (int i : g[u]){
        // cout << currentpath[i] << endl;
        if (currentpath[i]){
            // cout << "ssdfsdfds" << endl;
            cycle = 1;
            return;
        }
        if (!studied[i]){
            dfs(i,g,studied,res,currentpath);
            res.push_back(i);
        }
    }
    currentpath[u] = 0;
}


int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<int>> g(n+1);
    vector<int> studied(n+1,0);
    vector<int> currentpath(n+1,0);
    vector<int> res;
    int a,b;
    for (int i=0;i<m;++i){
        cin >> a >> b;
        g[b].push_back(a);
    }

    for (int i=1;i<=n;++i){
        if (!studied[i]){
            dfs(i,g,studied,res,currentpath);
            if (cycle) break;
            res.push_back(i);
        }
    }

    if (cycle == 1) cout << "IMPOSSIBLE";
    else 
    for (int x : res){
        cout << x << " ";
    }
}