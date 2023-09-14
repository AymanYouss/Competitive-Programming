#include <string>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <set>


using namespace std;



int main(){
    int n,m,tmp;
    int jack[1000001],jill[1000001];
    
    while(scanf("%d %d",&n,&m) == 2 && n && m){
        //memset(jack,0,sizeof(jack));
        //memset(jack,0,sizeof(jill));
        for (int i=0;i<n;++i){
            cin >> jack[i];
        }
        for (int i=0;i<m;++i){
            cin >> jill[i];
        }

        int i = 0, j = 0, res = 0;
        while(i < n && j < m){
            if (jack[i] == jill[j]){
                res++;
                i++;
                j++;
            }
            else if (jack[i] > jill[j]) j++;
            else i++;
        }

        cout << res << endl;
    }
    
}