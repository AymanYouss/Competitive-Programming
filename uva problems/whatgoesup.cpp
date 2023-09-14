#include <string>
#include <bits/stdc++.h>
#include <algorithm>
#include <stack>

using namespace std;
int sub[1000000],sub_id[1000000],pos_id[1000000],nums[1000000];

void print(int a){
    if (a < 0)  return;
    print(pos_id[a]);
    cout << nums[a] << endl;
}
int main(){
    int i = 0,idx = 0,res = 0;
    for(int i = 0;; i++) {
        if(scanf("%d", &nums[i]) != 1 || !nums[i]) break;
        
        int it = lower_bound(sub,sub+idx,nums[i]) -sub;
        sub[it] = nums[i];
        sub_id[it] = i;
        if (it == 0)    pos_id[i] = -1;
        else pos_id[i] = sub_id[it - 1];

            idx++;
            res = i;
        }
        
    
    cout << idx << endl << "-" << endl;
    print(res);
       


    


    return 0;
}