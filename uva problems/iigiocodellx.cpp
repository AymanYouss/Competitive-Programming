#include <string>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;
int grid[201][201];
int visited[201][201];

int dx[6] = {-1,-1,0,0,1,1};
int dy[6] = {-1,0,-1,1,0,1};
void dfsw(int i, int j, int n){
    visited[i][j] = 1;
    for (int o=0;o<6;++o){
        if(i+dx[o] >= 0 && i+dx[o]< n&&j+dy[o] >= 0 && j+dy[o]< n){
            if (grid[i+dx[o]][j+dy[o]] == 'w' && !visited[i+dx[o]][j+dy[o]]){
                dfsw(i+dx[o],j+dy[o],n);
            }
        }
        
    }

}

void dfsb(int i, int j, int n){
    visited[i][j] = 1;
    for (int o=0;o<6;++o){
        if(i+dx[o] >= 0 && i+dx[o]< n&&j+dy[o] >= 0 && j+dy[o]< n){
            if (grid[i+dx[o]][j+dy[o]] == 'b' && !visited[i+dx[o]][j+dy[o]]){
                dfsb(i+dx[o],j+dy[o],n);
            }
        }
        
    }

}
int main(){
    int n,flag = 1,cnt=1;
    while(cin >> n,n){
        
        flag = 1;
        // memset(grid,0,sizeof(grid));
        string s;
        for (int i=0;i<n;++i){
            cin >> s;
            for (int j=0;j<n;++j){
                grid[i][j] = s[j];
            }
        }
        cout <<cnt++ <<" ";
        for (int i=0;i<n&&flag;++i){
            memset(visited,0,sizeof(visited));
            dfsw(i,0,n);
            for (int j=0;j<n;++j){
                if (visited[j][n-1]){
                    flag = 0;
                    cout << "W";
                    break;
                }
            }
        }

        if (flag){
            for (int i=0;i<n&&flag;++i){
            memset(visited,0,sizeof(visited));
            dfsb(0,i,n);
            for (int j=0;j<n;++j){
                if (visited[n-1][j]){
                    flag = 0;
                    cout << "B";
                    break;
                }
            }
            }
        }

        
        cout << endl;
    }
    return 0;
    
}