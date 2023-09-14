#include <string>
#include <bits/stdc++.h>
#include <algorithm>
#include <stack>
#include <math.h>
using namespace std;
char grid[26][26];
int visited[26][26];
int dr[] = {1,1,0,-1,-1,-1, 0, 1}; // trick to explore an implicit 2D grid
int dc[] = {0,1,1, 1, 0,-1,-1,-1};

void dfs(int i, int j, int n){
    
    int a = 0;
    if (i<0||i>=n||j<0||j>=n)   a=1;
    if(!a){
        visited[i][j] = 1;
        for (int o = 0;o<8;++o){
            if (!visited[i+dr[o]][j+dc[o]] && grid[i+dr[o]][j+dc[o]] == '1')
        dfs(i+dr[o],j+dc[o],n);
        }
    }
    
    
}

int main (){
    int n;
    int c = 1;
    
    while (cin >> n)
    {
        for (int i=0;i<n;++i){
            for (int j=0;j<n;++j)   cin >> grid[i][j];
        } 

        memset(visited,0,sizeof(visited));
        int res = 0;
        for (int i=0;i<n;++i){
            for (int j=0;j<n;++j){
                if (grid[i][j] == '1' && !visited[i][j]){
                    dfs(i,j,n);
                    res++;
                }
            }
        }

        cout << "Image number "<<c++<<" contains " << res<<" war eagles." <<endl;
    

    
    }
    

        return 0;

    }
    
    
    