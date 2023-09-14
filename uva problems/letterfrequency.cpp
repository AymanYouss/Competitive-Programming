#include <string>
#include <bits/stdc++.h>
#include <algorithm>
#include <stack>
using namespace std;
int isalphabet(char c){
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c<= 'z');
}


int main (){
    int t;
    cin >> t;
    cin.ignore();
    while (t--){
        string s;
        getline(cin,s);
        
        map<char,int> dat;
        for (char c : s){
            if (isalphabet(tolower(c))){
                dat[tolower(c)]++;
            }
        }
        int maxval = 0;
        for (auto [key,val] : dat){
            maxval = max(maxval,val);
        }
        string res = "";
        for (auto [key,val] : dat){
            if (val == maxval)  res += key;
        }

        cout << res << endl;
    }



    return 0;
    
    
}