#include <string>
#include <bits/stdc++.h>
#include <algorithm>
#include <stack>

using namespace std;

int l,n;
int c[1005];
int reward(int x, int y){
    if (y-x <= 1) return 0;
    int res = 2000000000;
    for (int i=0;i<n;++i){
        res = min(res, reward(i,x,c[i]) + reward(i,c[i],y) + (y-x));
    }

    return res;
}


int main(){
    
    while (cin >> l && l){
        cin >> n;
        for (int i=0;i<n;++i){
            cin >> c[i];
        }

        printf("The minimum cutting is %d.\n", reward(0,0,l));

    }
    

    return 0;
}