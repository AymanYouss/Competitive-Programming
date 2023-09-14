#include <string>
#include <bits/stdc++.h>
#include <algorithm>
#include <stack>
using namespace std;


int main (){
    int t;
    int c = 1;
    cin >> t;
    while(t--){
        int n, a[100002]={},prev,cur,maxval = 0,rep = 0;
        cin >> n;
        
        
        
        
        for (int i=1;i<=n;++i){
            cin >> a[i];
            
        }
        maxval = 0;
        for(int i = 1; i <= n; i++) {
            if(a[i]-a[i-1] > maxval)
                maxval = a[i]-a[i-1];
        }
        rep = maxval;
        for (int i=1;i<=n;++i){
            if ((a[i] - a[i-1]) == rep)
                rep--;
            else if ((a[i] - a[i-1]) > rep){
                maxval++;
                break;
            }
                
        }
        // cout << endl;

        cout << "Case " <<c<<": "<< maxval << endl;
        c++;
    }



    return 0;
    
    
}