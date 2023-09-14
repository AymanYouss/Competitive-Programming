#include <string>
#include <bits/stdc++.h>
#include <algorithm>
#include <stack>
using namespace std;



int main (){
    int n;
    cin >> n;
    string s;
    cin.ignore();
    while(n--){
        getline(cin,s);
        if (s == ""){
            cout << "Yes" << endl;
            continue;
        }
        stack<char> pile;
        int flag = 0;
        for(char c : s){
            if(c == '(' || c == '['){
                pile.push(c);
            }
            else{
                if (c == ')'){
                    if (pile.empty()){
                        flag = 1;
                        break;
                    }
                    else if (pile.top() != '('){
                        
                        flag = 1;
                        break;
                        
                    }
                    pile.pop();
                }
                else{
                    if (pile.empty()){
                        flag = 1;
                        break;
                    }
                    else if (pile.top() != '['){
                        
                        flag = 1;
                        break;
                        
                    }
                    pile.pop();
                }
            }
        }

        if (!pile.empty())  flag = 1;
        if (!flag)  cout << "Yes";
        else cout << "No";
        cout << endl;

    }



    return 0;
    
    
}