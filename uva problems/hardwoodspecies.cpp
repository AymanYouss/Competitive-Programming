#include <string>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <set>


using namespace std;



int main(){
    int t;
    float total;
    string name;
    map<string,int> trees;
    cin >> t;
    cin.ignore();
    cin.ignore();
    while (t--){
        total = 0;
        trees.clear();
        
        while (getline(cin,name)){
            //if (name == "0")    break;
            if (name == "")    break;
            trees[name]++;
            total++;
        }
        for(auto [key,value] : trees){
            cout << key <<" "<< fixed << setprecision(4) << value/total*100 << endl;
        }

        if (t) cout << endl;
    }
    
}