#include <string>
#include <bits/stdc++.h>
#include <algorithm>


using namespace std;
char grid[101][101];
int visited[101][101];

int x[] = {-1,1,0,0,-1,1,-1,1};
int y[] = {-1,1,1,-1,0,0,1,-1};

void dfs(int i, int j, int m, int n){
    int a=0;
    
    if (i<0||i>=m||j<0||j>=n)   a=1;
    if (!a){
        visited[i][j] = 1;
        for (int o=0;o<8;++o){
            if (!visited[i+x[o]][j+y[o]] && grid[i+x[o]][j+y[o]] == '@'){
                dfs(i+x[o],j+y[o],m,n);
            }
        }
    }
}
int main(){
    int m,n;
    while(scanf("%d %d",&m,&n) && m){
        memset(visited,0,sizeof(visited));
        for (int i=0;i<m;++i){
            for (int j=0;j<n;++j){
                cin >> grid[i][j];
            }
        }

        int res = 0;
        for (int i=0;i<m;++i){
            for (int j=0;j<n;++j){
                if (!visited[i][j] && grid[i][j] == '@'){
                   
                    dfs(i,j,m,n);
                    res++;
                }
            }
        }

        cout << res << endl;
        
    }

    return 0;
    
}