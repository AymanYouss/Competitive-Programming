#include <string>
#include <bits/stdc++.h>
#include <algorithm>
#include <stack>
#include <queue>

using namespace std;

int nomatches(string original, string s2){
    int res = 0;
    int diff = original.size() - s2.size();
    for (int i=s2.size()-1;i>=0;--i){
        if (original[i + diff] == s2[i]){
            res += 1;
        }
    }
    return res;
}
int main(){
    string s,new_s;
    cin >> s;
    new_s = s;
    int max_idx = 0,max_val=0,tmp;
    for (int i=0;i<s.size();++i){
        new_s = new_s.substr(0,new_s.size()-1);
        // cout << new_s << endl;
        tmp = nomatches(s,new_s);
        if (tmp > max_val){
            max_val = tmp;
            max_idx = i+1;
        }

    }

    if (max_val == 0)   cout << "0 0\n";
    else cout << max_val << " " << max_idx << endl;
    return 0;
}