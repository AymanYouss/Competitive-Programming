#include <bits/stdc++.h>

using namespace std;

int maxN = 1e9 +1;
int main(){
    int n,a,b;
    cin >> n;
    vector<pair<int,int>> arrival;
    for (int i=0;i<n;++i){
        cin >> a >> b;
        arrival.push_back(make_pair(a,1));
        arrival.push_back(make_pair(b,-1));
    }

    sort(arrival.begin(),arrival.end());

    // int res = 0;
    int maxval = 0;
    int curval = 0;
    for (pair<int,int> p : arrival){
        // cout << p.second << endl;
        curval += p.second;
        maxval = max(maxval,curval);
    }

    cout << maxval;
    return 0;

    
}