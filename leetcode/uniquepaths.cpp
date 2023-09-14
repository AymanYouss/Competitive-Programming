#include <string>
#include <bits/stdc++.h>
#include <algorithm>
#include <stack>

using namespace std;

int m,n;
int borders[4][2] = {
        {0,1},
        {-1,0}
    };
int memo[101][101];


class Solution {
public:
    int memo[101][101] = {};
    //memset(memo,0,sizeof(memo));
    int uniquePaths(int m, int n, int i=0, int j=0) {
        if (i == m-1 && j == n-1){
        // cout << "reached";
        return 1;
    }   
    if (i >= m || j >= n || i<0 || j<0){
        // cout << "reached " << i << " " << j << endl;
        return 0;
    } 
    if (memo[i][j]) return memo[i][j];
    int res = 0;
    
    res = uniquePaths(m,n,i+1 , j) + uniquePaths(m,n,i , j+1); 
    
    memo[i][j] = res;
    return res;
    }
};

int main(){
    m =  3;
    n = 7;
    memset(memo,0,sizeof(memo));
    Solution sol;
    cout << sol.uniquePaths(m,n);
    
    return 0;
}