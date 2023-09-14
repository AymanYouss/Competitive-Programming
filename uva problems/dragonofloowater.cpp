#include <string>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main(){
    int m,n,res;
    int dragon[20003],knight[20003];
    while(cin >> n >> m , m || n){
        res = 0;
        for (int i=0;i<n;++i)   cin >> dragon[i];
        for (int i=0;i<m;++i)   cin >> knight[i];
        sort(dragon,dragon+n);
        sort(knight,knight+m);
        int dragonidx = 0, knightidx = 0;
        while(dragonidx != n && knightidx != m){
            // cout << dragonidx << " " << knightidx << endl;
            // cout << dragon[dragonidx] << " " << knight[knightidx] << endl;
            if(dragon[dragonidx]>knight[knightidx]){
                knightidx++;
            } 
            else{
                res += knight[knightidx];
                knightidx++;
                dragonidx++;
                
            }
            
        }

        if(dragonidx  == n)  cout << res << endl;
        else cout << "Loowater is doomed!" << endl;
    }


    return 0;
}