#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
    cin >> n;
    int a[200005];
    for (int i=0;i<n;++i){
        cin >> a[i];
    }
    long long res = 0;
    for (int i=0;i<n-1;++i){
        if (a[i]>a[i+1]){
            res += a[i] - a[i+1];
            a[i+1] = a[i];
        }    
    }

    cout << res;

	return 0;
}