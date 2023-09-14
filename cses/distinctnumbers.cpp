#include <bits/stdc++.h>

using namespace std;


int main(){
   int n;
   cin >> n;
   int a[200005];
   for (int i=0;i<n;++i){
    cin >> a[i];
   }
   set<int> s;
   for (int i=0;i<n;++i){
    s.insert(a[i]);
   }
    cout << s.size();
   return 0;
}