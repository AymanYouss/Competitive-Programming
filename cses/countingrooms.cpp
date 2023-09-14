#include <bits/stdc++.h>

using namespace std;

char grid[1001][1001] = {};
int visited[1001][1001] = {};
int n,m;
int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,-1,1};
void dfs(int i, int j){
    if (i<0 || j<0 || i>=n || j>=m){
        
        return;
    }    
    
    visited[i][j] = 1;
    for (int o=0;o<4;++o){
        if (!visited[i+dx[o]][j+dy[o]] && grid[i+dx[o]][j+dy[o]] == '.'){
            dfs(i+dx[o],j+dy[o]);
        }
    }

}
int main(){
    memset(visited,0,sizeof(visited));
    cin >> n >> m;
    for (int i=0;i<n;++i){
        for (int j=0;j<m;++j){
            cin >> grid[i][j];
        }
        
    }

    int res = 0;
    for (int i=0;i<n;++i){
        for (int j=0;j<m;++j){
            if (grid[i][j] == '.' && !visited[i][j]){
                res++;
                dfs(i,j);
            } 
        }
        
    }

    cout << res;
}