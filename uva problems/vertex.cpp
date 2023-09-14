#include <string>
#include <bits/stdc++.h>
#include <algorithm>
#include <stack>

using namespace std;
int n;

int visited[101];
// int defined[101];
vector<int> res;

void dfs(int i,vector<vector<int>>& g){
    // if (!defined[i])    return;
    
    for (int u : g[i]){
        if (!visited[u]){
            visited[u] = 1;
            dfs(u,g);
        }    
    }
    
}


int main(){
    
    while(cin >> n,n){
        // memset(defined,0,sizeof(defined));
        vector<vector<int>> g(n+1,vector<int>(n+1));
        int first,second;

        
        while(cin >> first,first){
            
            // defined[first] = 1;
            while (cin >> second,second)
            {
// cout << "a" << first << " " << second<< endl;
                g[first].push_back(second);
                
            }
            
        }

        cin >> first;
        

        for (int i=0;i<first;++i){
            cin >> second;
            
            memset(visited,0,sizeof(visited));
            dfs(second,g);
            // visited[second] = 0;
            int count=0;
            res.clear();
            for (int j=1;j<=n;++j){
                if (!visited[j]){
                    count++;
                    res.push_back(j);
                }
            }

            cout << count;
            for (int u : res)   cout << " " << u;
            cout << endl;
        }

        

        
    }
    return 0;
}