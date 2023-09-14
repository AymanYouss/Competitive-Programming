#include <string>
#include <bits/stdc++.h>
#include <algorithm>
#include <stack>
using namespace std;

string soundex(char c){
    if (c == 'B' || c == 'F' || c == 'P' || c == 'V')   return "1";
    if (c == 'C' || c == 'G' || c == 'J' || c == 'K' || c == 'Q' || c == 'S' || c == 'X' || c == 'Z')   return "2";
    if (c == 'D' || c == 'T' )   return "3";
    if (c == 'L')   return "4";
    if (c == 'M' || c == 'N' )   return "5";
    if (c == 'R')   return "6";
    return "";

}

int main (){
    string s;
    while(cin >> s){
        string res = "";
        for (int i=0;i<s.size();++i){
            if (i == s.size())
                res += soundex(s[i]);
            else if (soundex(s[i]) != soundex(s[i+1]))
                res += soundex(s[i]);
        }

        cout << res << endl;
    }
    
    
    
}