#include <string>
#include <bits/stdc++.h>
#include <algorithm>
#include <stack>

using namespace std;

int dx[8] = {-1,-1,-1,1,1,1,0,0};
int dy[8] = {-1,0,1,-1,0,1,1,-1};
int sum,n,m;
int visited[100][100];
char grid[100][100];
void ff(int i, int j){
    // cout << i << "|" << j << " " << grid[i][j] << endl;
    visited[i][j] = 1;
    sum++;
    for (int o=0;o<8;++o){
        
        if (!(i+dx[o] < 0 || i+dx[o] >= n || j+dy[o] < 0 || j+dy[o] >= m) ){
            if(!visited[i+dx[o]][j+dy[o]] && grid[i+dx[o]][j+dy[o]] == 'W'){
                
                ff(i+dx[o],j+dy[o]);
            }
        }
    }
}

int main(){
    int t;
    
    string s;
    cin >> t;
    cin.ignore();
    cin.ignore();
    int flagm = 0, flagn = 0;
    while(t--){
        flagm=0;
        flagn=0;
        // cin.ignore();
        memset(grid,0,sizeof(grid));
        memset(visited,0,sizeof(visited));
        int cur=0;
        while(getline(cin,s) && s.length() != 0){
            
        //    cout  << s << endl;
            if (s[0] == 'L' ||s[0] == 'W'){
                if (!flagm){
                    m = s.length()+1;
                    
                    flagm = 1;
                } 
                for (int j=0;j<m;++j){
                    grid[cur][j] = s[j];
                }
            }
            else{
                string s1="",s2="";
                int i,j;
                sscanf(s.c_str(),"%d %d",&i,&j);
                
                
                memset(visited,0,sizeof(visited));
                sum=0;
                
                if (!flagn){
                    n = cur;
                    flagn = 1;
                    
                        
                    }
                
                ff(i-1,j-1);
        //         for (int i=0;i<n;++i){
        //     for (int j=0;j<m;++j)
        //         cout << grid[i][j];
        //     cout << endl;
        // }
                
                
                cout << sum << endl;

            }

            cur++;
        }

        
        if(t) cout << endl;
    }
    return 0;
}