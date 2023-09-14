#include <bits/stdc++.h>

using namespace std;


int main(){
   int n,x;
   int p[200005];
   cin >> n >> x;
   for (int i=0;i<n;++i){
    cin >> p[i];
   }
   sort(p,p+n);
    int res =0;
   int i=0,j=n-1;
   while(i<=j){
    if( p[i]+p[j] <= x) i++;

    j--;
    res++;
   }

   cout << res;

   return 0;

}