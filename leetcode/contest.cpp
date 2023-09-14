#include <string>
#include <bits/stdc++.h>
#include <algorithm>
#include <stack>

using namespace std;


int main(){
    int t,n,q;
    int tot = 1;
    map<int,int> nums;
    int cur;
    cin >> t;
    while(t--){
        
        
        cin >> n >> q;
        vector<int> a(n+1);
        for (int i=0;i<n;++i){
            cin >> a[i];
        }
        
        int l,r;
        while(q--){
            cin >> l >> r;
            nums.clear();
            tot = 1;
            cur = 1;
            // int flag = 1;
            for (int i=l-1;i<r;++i){
                
                if (!nums[a[i]]){
                    nums[a[i]] = 1;
                }
                else{
                    // cout << "dfsds" << endl;
                    nums[a[i]] = (nums[a[i]] * (nums[a[i]]+1))
                    %(int)(1e9 + 7);
                }
                
                tot = (cur * tot)%(int)(1e9 + 7);
                cur++;
                

            }
            int res = 1;
            for (auto [key,val] : nums){
                // cout << key << " : " << val << endl;
                if (val != 0)   res *= val;
                // cout << res << endl;
            }
            if (res == 0)   cout << res << endl;
            // cout << "total fact : " << tot << endl;
            else cout << tot/res << endl;
        }


    }
    
    return 0;
}