#include <string>
#include <bits/stdc++.h>
#include <algorithm>
#include <stack>
#include <queue>

using namespace std;

int main(){
    int m,n;
    map<string,pair<string,string>> nos;
    int flag = 1;
    cin >> n;
    cin.ignore();
    
    char temp;
    string city;
    int cur;
    string line,n1,n2;
    for (int i=0;i<n;++i){
        getline(cin,line);
        // cout << "-----"<< line.size()<<endl;
        cur = 0;
        while (line[cur] != ','){
            cur++;
        }
        n2 = line.substr(cur+1,line.size());
        n1 = line.substr(0,cur);
        // cout << "n1 : " << n1 << endl;
        // cout << "dsd" << n2 << endl;
        nos[n1].first = n2;
    }
    cin >> m;
    cin.ignore();
    for (int i=0;i<m;++i){
        getline(cin,line);
        
        cur = 0;
        while (line[cur] != ','){
            cur++;
        }
        n1 = line.substr(cur+1,line.size());
        city = line.substr(0,cur);
        // cout << "n1 : " << n1 << endl;
        // cout << "dsd" << city << endl;
        nos[n1].second = city;
    }
    for (auto [key,val] : nos){
        if (val.first != "" && val.second != ""){
            cout << key << "," << val.first << "," << val.second << endl;
            flag = 0;}
        
        
    }
    if (flag) cout << "nomatch";

    return 0;
}