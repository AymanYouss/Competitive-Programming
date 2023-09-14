#include <string>
#include <bits/stdc++.h>
#include <algorithm>


using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        map<char,int> dat;
        cin >> s;
        for (char c : s){
            dat[c]++;
        }
        int res = 0;
        while(dat['M'] >= 1 && dat['A'] >= 3 && dat['R'] >= 2 && dat['G'] >= 1 && dat['I'] >= 1 && dat['T'] >= 1){
            dat['M'] -= 1; 
            dat['A'] -= 3; 
            dat['R'] -= 2; 
            dat['G'] -= 1; 
            dat['I'] -= 1; 
            dat['T'] -= 1;
            res++;
        }
        cout << res << endl;


    }
    return 0;
}
 