#include <string>
#include <bits/stdc++.h>
#include <algorithm>
#include <stack>
using namespace std;


int main (){
    int t;
    cin >> t;
    while(t--){
        int flag = 1,flag2 = 1,found,flag3 = 1,change=0;
        string olddict,newdict;
        cin >> olddict;
        cin >> newdict;
        map<string,string> oldmap;
        map<string,string> newmap;
        int cur = 1;
        while(olddict[cur] != '}'){
            string key = "";
            string val = "";
            while(olddict[cur] != ':'){
                key += olddict[cur];
                cur++;
            }
            cur++;
            while(olddict[cur] != ',' && olddict[cur] != '}'){
                val += olddict[cur];
                cur++;
            }
            if(olddict[cur] != '}') cur++;
            oldmap[key] = val;
        }
        cur = 1;
        while(newdict[cur] != '}'){
            string key = "";
            string val = "";
            while(newdict[cur] != ':'){
                key += newdict[cur];
                cur++;
            }
            cur++;
            while(newdict[cur] != ',' && newdict[cur] != '}'){
                val += newdict[cur];
                cur++;
            }
            if(newdict[cur] != '}') cur++;
            newmap[key] = val;
        }

        string res = "";
        for (auto [key1,val1] : newmap){
            int found = 0;
            for (auto [key2,val2] : oldmap){
                if (key2 == key1){
                    found = 1;
                    
                }
            }
            if (!found){
                if (flag){
                    res+= "+";
                    flag = 0;
                    change = 1;
                }
                res+= key1;
                res+= ",";
            }
        }
        
        if (res != ""){
            res = res.substr(0,res.size()-1);
            cout << res << endl;
            res = "";
        }
        
        for (auto [key1,val1] : oldmap){
            int found = 0;
            for (auto [key2,val2] : newmap){
                if (key2 == key1){
                    found = 1;
                }
            }
            if (!found){
                if (flag2){
                    res+= "-";
                    flag2 = 0;
                    change = 1;
                }
                res+= key1;
                res+= ",";
            }
        }
        if (res != ""){
            res = res.substr(0,res.size()-1);
            cout << res << endl;
            res = "";
        }
        for (auto [key1,val1] : oldmap){
            int found = 0;
            for (auto [key2,val2] : newmap){
                if (key2 == key1 && val2 != val1){
                    if (flag3){
                        res+="*";
                        flag3 = 0;
                        change = 1;
                    }
                    res+=key1;
                    res+=",";
                }
            }
        }
        if (res != ""){
            res = res.substr(0,res.size()-1);
            cout << res << endl;
            res = "";
        }

        if (!change){
            cout << "No changes" << endl;
        }



        // for (auto [a,b] : oldmap){
        //     cout << a << " " << b << endl;
        // }
        cout << endl;
        
    }



    return 0;
    
    
}