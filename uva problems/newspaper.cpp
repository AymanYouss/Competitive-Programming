#include <string>
#include <bits/stdc++.h>
#include <algorithm>


using namespace std;


int main(){
    int n,k,tmp;
    char c;
    cin >> n;
    map<char,int> vals;
    while (n--){
        vals.clear();
        int sum = 0;
        cin >> k;
        for (int i=0;i<k;++i){
            cin >> c >> tmp;
            vals[c] = tmp;
        }
        int m;
        string s;
        cin >> m;
        cin.ignore();
        for (int i=0;i<m;++i){
            getline(cin,s);
            //cin >> s;
            
            //cout << " :::" << s;
            
            for (int l=0;l<s.size();l++){
                sum += vals[s[l]];
            }
        }

        cout << fixed << setprecision(2) << sum/100.0 <<"$" << endl;
    }

    return 0;
    
}