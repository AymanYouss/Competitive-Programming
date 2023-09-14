#include <string>
#include <bits/stdc++.h>
#include <algorithm>
#include <stack>

using namespace std;


int main(){
    int t,b;
    int level[100005],max=2;
    
    cin >> t;
    
    while(t--){
        memset(level,0,sizeof(level));
        level[1] = 1;
        cin >> b;
        int depth=1;
        int res=1;
        b--;
        while(b--){
            int c,d;
            int used = 0;
            cin >> c >> d;
            level[d] = level[c]+1;
            // cout << "level d" << level[d] << endl;
            if (level[d]>=depth&&used<=2){
                depth++;
                used++;
                res++;
            }

            cout  << res << endl;   
        }
    }
    
    return 0;
}