#include <string>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int dx[] = {-1,1,0,0,-1,1,-1,1};
int dy[] = {-1,1,1,-1,1,-1,0,0};

int main (){
    int n,m,cnt = 1;
    while(1){
        cin >> n >> m;
        
        if(!n && !m)    break;
        if(cnt > 1) cout << endl;
        
        char grid[101][101];
        int res[101][101];
        for (int i=0;i<n;++i){
            for (int j=0;j<m;++j){
                cin >> grid[i][j];
            }
        }
        cout << "Field #" << cnt++ << ":" << endl;
        for (int i=0;i<n;++i){
            for (int j=0;j<m;++j){
                if(grid[i][j] == '*'){
                    cout << '*';
                }
                else{
                    int sum = 0;
                    for (int o=0;o<8;++o){
                        int x = i+dx[o];
                        int y = j+dy[o];
                        if(!(x < 0 || x>=n ||y < 0 || y>=m) && grid[x][y] == '*')    sum++;
                    }
                    cout << sum;
                }

            }
            cout << endl;
        }

        
        
    }



    return 0;
}