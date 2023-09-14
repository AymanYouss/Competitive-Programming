#include <string>
#include <bits/stdc++.h>
#include <algorithm>
#include <stack>
#include <queue>

using namespace std;


int main (){
    string s;
    int qnum,period,k;
    priority_queue<pair<int, pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>> > q;
    

    while (cin >> s && s != "#"){
        cin >> qnum >> period; 
        q.push(pair<int,pair<int,int>>(period,pair<int,int>(qnum,period)));
        
    }
    //sort(periods,periods+cnt);
    cin >> k;
    pair<int, pair<int,int>> ans;
    for (int i=0;i<k;++i){
        ans = q.top();
        q.pop();

        cout << ans.second.first << endl;
        ans.first += ans.second.second;

        q.push(ans);


    }



    return 0;
    
    
}

