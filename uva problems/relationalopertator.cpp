#include <string>
#include <bits/stdc++.h>
#include <algorithm>
#include <stack>
using namespace std;


int main (){

    int t;
    cin >> t;
    while(t--){
        long long a,b;
        cin >> a >> b;
        if (a > b)  cout << ">\n";
        else if (a == b)    cout << "=\n";
        else cout << "<\n";
    }
    return 0;
}