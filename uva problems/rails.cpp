#include <string>
#include <bits/stdc++.h>
#include <algorithm>
#include <stack>

using namespace std;

int main(){
    int n,coach[1002];
    
    while(cin >> n && n){
        while(cin >> coach[0]){
            if (!coach[0])  break;
        for (int i=1;i<n;++i)   cin >> coach[i];
        stack<int> station;

        int cnt = 1;
        
        for (int i=0;i<n;++i){
            int flag = 1;
            while(cnt <= n+1){
                if (station.empty()){
                    station.push(cnt);
                    //cout << cnt << " pushed\n";
                    cnt++;
                }    
            else if (station.top() == coach[i]){
                station.pop();
                //cout << coach[i] << " pulled\n";
                break;
            }
            else{
                station.push(cnt);
                cnt++;
            }
            
            
            }
            
        }
        // while (!station.empty())
        // {
        //     cout << station.top() << " ";
        //     station.pop();
        // }
        // cout << endl;
        
        if (station.empty())   cout << "Yes\n";
        else cout << "No\n";

        }
        cout << endl;
        
        

        
    }


    return 0;
}