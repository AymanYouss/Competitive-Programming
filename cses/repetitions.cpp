#include <bits/stdc++.h>

using namespace std;


int main(){
    string s;
    cin >> s;
    int n = s.length();
    int cur = 0;
    int res = 0;
    for (int i=0;i<n-1;++i){
        if (s[i] == s[i+1]){
            res = max(res,++cur);
        }
        else    cur = 0;
    }

    cout << res+1;


    return 0;
}