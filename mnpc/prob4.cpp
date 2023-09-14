#include <string>
#include <bits/stdc++.h>
#include <algorithm>
#include <stack>
#include <queue>

using namespace std;

int main(){
    unsigned long long a,b,c;

    cin >> a >> b >> c;
    if (b == 0){
        if (c == 0) cout << "Yes";
        else cout << "No";
    }
    else {
        if (a >= b/c)    cout << "Yes";
        
    }

    return 0;
}