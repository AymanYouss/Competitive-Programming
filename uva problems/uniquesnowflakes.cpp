#include <string>
#include <bits/stdc++.h>
#include <algorithm>
#include <stack>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n,temp,ans = 0,cur = 0,level = 0;
        map<int,int> snowflakes;
        cin >> n;
        for (int i=0;i<n;++i){
            cin >> temp;
            if (snowflakes[temp]){
                //cur = snowflakes[temp] ;
                //snowflakes.clear();
                level = max(level,snowflakes[temp]);
                cur = i - level + 1;
                //cout << endl << "tst" << cur << endl; 
                //snowflakes.clear();
            }
            else{
                cur++;
                // snowflakes[temp] = cur;    
            }
            snowflakes[temp] = i+1;

            ans = max(ans,cur);
        }
        //cout << "-------------";
        cout << ans << endl;
    }


    return 0;
}