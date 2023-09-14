#include <bits/stdc++.h>

using namespace std;
string s,t;
int dp[85][85] ;
int cur = 0, cnt = 0;

void print_rec(int i, int j,int (&dp)[85][85] ){
    if(i==0 && j==0) return;
    else if(i!=0 && j!=0 && s[i-1] == t[j-1]){
        print_rec(i-1,j-1,dp);
    } else if(j!=0 && dp[i][j] == dp[i][j-1]+1){
        print_rec(i,j-1,dp);
        cur++;
        printf("%d Insert %d,%c\n",++cnt,i+cur,t[j-1]);
    } else if(i!=0 && dp[i][j] == dp[i-1][j]+1){
        print_rec(i-1,j,dp);
        printf("%d Delete %d\n",++cnt,i+cur);
        cur--;
    } else if(dp[i][j] == dp[i-1][j-1]+1){
        print_rec(i-1,j-1,dp);
        printf("%d Replace %d,%c\n",++cnt,i+cur,t[j-1]);
    }
}

int main(){
    int flag = 0;
    while(getline(cin,s)){
        if(flag)    cout << endl;
        flag = 1;
        getline(cin,t);
        int n= s.length(),m = t.length();
        
        
        
        
        for (int i=0;i<=m;++i){
            dp[0][i] = i;
            
        }

        for (int i=0;i<=n;++i){
            dp[i][0] = i;
            
        }


        for (int i=0;i<n;++i){
            
            for (int j=0;j<m;++j){
                if (s[i] == t[j]){
                    dp[i+1][j+1] = dp[i][j];
                }
                else{
                    dp[i+1][j+1] = min({dp[i][j],dp[i][j+1], dp[i+1][j]})+1; 
                }
            }
        }

         

        cout << dp[n][m] << endl;
        cnt = 0;
        cur = 0;
        print_rec(n,m,dp);
        

        

    }
    

    return 0;
}