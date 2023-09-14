#include <string>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int n,cur = 0,res;
int c[1005];

void withdraw(int x, int cur){
    if(x <= 1)  return;
    cur--;
    while( cur != 0 && c[cur] > x )   cur--;
    res++;
    withdraw(x-c[cur],cur);
}
int main(){
    
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        for (int i=0;i<n;++i){
            cin >> c[i];
        }
        int coins = 1;
        int sum = c[0];
        for (int i=1;i<n-1;++i){
            if (sum + c[i] < c[i+1]){
                coins++;
                sum+=c[i];
            }
        }

        cout  << coins+1 << endl;
        
    }

    return 0;
}