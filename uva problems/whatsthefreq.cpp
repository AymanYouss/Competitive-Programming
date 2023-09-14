#include <string>
#include <bits/stdc++.h>
#include <algorithm>
#include <stack>

using namespace std;

int main(){
    string s;
    int count[190],max_idx,max_val;
    while (getline(cin,s)){
        max_idx = 0;
        max_val = 0;
        memset(count,0,sizeof(count));
        for (char c : s){
            if (c >= 'A' && c<= 'z'){
                
                count[(int)c-'A']++;

            }   
        }

        for(int i=0;i<190;++i){
            if(count[i] > max_val){
                max_val = count[i];
            }
        }
        
        for (int i=0;i<190;++i){
            if (count[i] == max_val)    cout << (char)(i + 'A');
        }
        

        cout << " "<< max_val << endl;
    }


    return 0;
}