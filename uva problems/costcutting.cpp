#include <string>
#include <bits/stdc++.h>
#include <sstream>
#include <algorithm>


using namespace std;


int main(){
    int t,c=0;
    cin >> t;
    while(t--){
        int a[5];
        cin >> a[0] >> a[1] >> a[2];
        sort(a,a+3);
        cout << "Case " << ++c << ": " << a[1] << endl;
        

    }

    return 0;
}
