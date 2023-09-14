#include <string>
#include <bits/stdc++.h>
#include <algorithm>
#include <stack>
#include <queue>

using namespace std;

int main(){
    int n,c,t[105][105],temp1,temp2;
    int flag = 1;
    memset(t,0,sizeof(t));
    cin >> n >> c;
    for (int i=0;i<n;++i){
        cin >> temp1 >> temp2;
        t[temp1][temp2]++;
    }
    for (int i=1;(i<101)&&flag;++i){
        for (int j=1;j<101;++j){
            if (t[i][j] > c){
            cout << t[i][j] << endl;
            cout << "No";
            flag = 0;
            break;
        }
    }
        
    }
    if (flag)   cout << "Yes";
    return 0;
}