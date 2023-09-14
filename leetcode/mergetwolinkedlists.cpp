#include <string>
#include <bits/stdc++.h>
#include <algorithm>
#include <stack>
#include <math.h>

using namespace std;

int fact(int n){
    return (n == 1 || n == 0) ? 1 : fact(n - 1) * n;
}

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
            tot = 0;
            cur = 1;
            // int flag = 1;
            for (int i=l-1;i<r;++i){
                
                nums[a[i]]++;
                
                tot++;
                

            }
            int res = 1;
            for (auto [key,val] : nums){
                // cout << key << " : " << val << endl;
                res *= fact(val) ;
                // cout << res << endl;
            }
            // cout << "total fact : " << tot << endl;
            if (res == 0)   cout << 0 << endl;
            else    cout << fact(tot)/res << endl;
        }


    }
    
    return 0;
}