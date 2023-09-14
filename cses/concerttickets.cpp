#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m,temp;
    multiset<int> h;

    cin >> n >> m;
    for (int i=0;i<n;++i){
        cin >> temp;
        h.insert(temp);
    }

    for (int i=0;i<m;++i){
        cin >> temp;
        auto it = h.upper_bound(temp);

        if (it == h.begin()){
            cout << -1 << endl;
        }
        else{
            it--;
            cout << *it << endl;
            h.erase(it);
        } 
    }

    
}