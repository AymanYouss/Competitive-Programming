#include <string>
#include <bits/stdc++.h>
#include <sstream>
#include <algorithm>


using namespace std;

int a[5] = {50,25,10,5,1};
int memo[5][7490] = {};
int ways(int id, int rem){
    if(rem == 0)    return 1;
    if (rem < 0)   return 0;
    if (id == 5)    return 0;
    if (memo[id][rem])  return memo[id][rem];
    

    return memo[id][rem] = ways(id,rem - a[id]) + ways(id+1,rem);
}
int main(){
    int n;
    while(cin>>n){
        cout << ways(0,n) << endl;
    }
        


    }



