#include <string>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>


using namespace std;


int main(){
    string s;
    list<char> text;
    string res = "";
    
    while (cin>>s){
        text.clear();
        res = "";
        int cur = 0;
        list<char>::iterator ptr = text.begin();
        while(cur < s.size()){
            if (s[cur] == '[')  ptr = text.begin();
            else if (s[cur] == ']') ptr = text.end();
            else{
                text.insert(ptr,s[cur]);
                
            }
            cur++;
        }

        for (char c : text)  res += c;
        cout << res << endl;
    }
    return 0;
    
}