#include <string>
#include <bits/stdc++.h>
#include <algorithm>


using namespace std;

int main(){
    int t,c=1;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        int ans = 0;
        for (int i = a;i<=b;++i){
            if (i%2 == 1)   ans += i;   
        }

        cout << "Case " << c++ << ": "<<   ans << endl;
    }

    return 0;
    
}