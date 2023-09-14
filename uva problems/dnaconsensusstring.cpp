#include <string>
#include <bits/stdc++.h>
#include <algorithm>
#include <stack>
using namespace std;


int main (){
    int t;
    cin >> t;
    while(t--){
        int m,n;
        cin >> m >> n;
        string s;
        vector<map<char,int>> g(n);
        for (int i=0;i<m;++i){
            cin >> s;
            for (int j=0;j<n;++j){
                g[j][s[j]]++;
            }
        }
        string res = "";
        char max_char;
        int error = 0;
        int max_val = 0;
        for (auto a : g){
            max_val = 0;
            for(auto [key,val] : a){
                if(val>max_val){
                    max_val = val;
                    max_char = key;
                }
                else if(val == max_val){
                    max_char = min(max_char,key);
                }
                
                error+=val;
                
            }
            error-=a[max_char];
            

            res+= max_char;
        }

        cout << res << endl <<  error << endl;

    }
    



    return 0;
    
    
}