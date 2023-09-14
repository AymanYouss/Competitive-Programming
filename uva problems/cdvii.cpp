#include <string>
#include <bits/stdc++.h>
#include <algorithm>
#include <stack>
#include <queue>

using namespace std;

typedef struct{
    int day,hour,min,km,exit;
    int gettime(){
        return min + hour*60 + day*24*60;
    }
} record;

int cmp(record a,record b){
    return a.gettime() < b.gettime();
}
int main (){
    int t,a;
    string s,aa;
    
    scanf("%d\n",&t);
    
    while(t--){
        int tolls[25];
        for (int i=0;i<24;++i){
            cin >> tolls[i];
            //cout << tolls[i] << "|";
        }
        //cout << endl;
        cin.ignore();
        string license,time,temp;
        int km;
        map<string,vector<record>> records;
    
        while (getline(cin,s) && !s.empty())
        {
            char ignore;
            istringstream iss(s);
            //if (license == "0")   break;
            record r;
            iss >> license >> ignore >> ignore >> ignore >> r.day >> ignore >> r.hour >> ignore >> r.min >> temp >> r.km;
            r.exit = temp == "exit";
            records[license].push_back(r);
        }

        for (auto [key,val] : records){
            sort(val.begin(),val.end(),cmp);

            int price = 200;

            for (int i=0;i<val.size()-1;++i){
                if (!val[i].exit && val[i+1].exit){
                    price += 100 + tolls[val[i].hour] * abs(val[i].km - val[i+1].km); 
                }
            }
            if (price != 200){
                cout << key << " $" << fixed << setprecision(2) << price/100.0 << endl;
            }
        }
        if(t) cout << endl;
        
                
        
        

    }


    return 0;
    
    
}

