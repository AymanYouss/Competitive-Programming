#include <string>
#include <bits/stdc++.h>
#include <algorithm>
#include <stack>
using namespace std;


int main (){
    int n;
    string s;
    while(cin >> n){
        cin >> s;
        
        map<string,int> words;
        
        for (int i=0;i<s.size()-n+1;++i){
            words[s.substr(i,n)]++;
            
        }
        

        int max = 0;
        string ans;
        //map<string,int>::iterator it = words.begin();
        for(auto it : words){
            //cout << it->first << " ";
            if (it.second > max){
                max = it.second;
                ans = it.first;
                
            }
        }
        cout << ans << endl;
    }



    return 0;
    
    
}