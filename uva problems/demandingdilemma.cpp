#include <string>
#include <bits/stdc++.h>
#include <algorithm>
#include <stack>
using namespace std;


int main (){
    int t,c=1;
    cin >> t;
    while(t--){
        int n,res=0;
        cin >> n;
        char a[1000];
        for (int i=0;i<n;++i){
            cin >> a[i];
        }
        

        for (int i=0;i<n;++i){
            if (a[i] == '.'){
                a[i] = '#';
                a[i+1] = '#';
                a[i+2] = '#';
                res++;
            }
        }

        cout << "Case " << c++ << ": "<< res << endl;
    }
    



    return 0;
    
    
}