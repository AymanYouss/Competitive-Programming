#include <string>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <set>


using namespace std;

void dfs(int i,vector<vector<int>> &g, vector<int> &fallen){
    fallen[i] = 1;
    for (int u : g[i]){
        
        if (!fallen[u]){
            dfs(u,g,fallen);
        }
        
    }
}
void print(vector<int> a){
    for (int u : a){
        cout << u << " ";
    }
    cout << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m,l,x,y,z;
        cin >> n >> m >> l;
         
        vector<vector<int>> g(n+1);
        vector<int> fallen(n+1,0);
        for (int i=0;i<m;++i){
			scanf("%d %d", &x, &y);
			g[x].push_back(y);
           
		}
       
		for (int i=0;i<l;++i){	
            		
			scanf("%d", &z);
            
			if(!fallen[z])		
				dfs(z,g,fallen);
		}
        int res=0;
        for(int u : fallen){
            res+=u;
        }

        cout << res << endl;
    }
    
    return 0;
    
    
}