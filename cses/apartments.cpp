#include <bits/stdc++.h>

using namespace std;


int main(){
   int n,m,k;
   cin >> n >> m >> k;
   int a[200005];
   int b[200005];
 

   for (int i=0;i<n;++i){
    cin >> a[i];
   }

   for (int i=0;i<m;++i){
    cin >> b[i];
   }

   sort(a,a+n);
   sort(b,b+m);

   int res = 0;
   int i = 0, j = 0;

   while(i < n && j < m){
    if (abs(a[i]-b[j]) <= k){
        i++;
        j++;
        res++;
    }
    else if (a[i] < b[j])   i++;
    else j++;
   }

   cout << res;

   return 0;

}