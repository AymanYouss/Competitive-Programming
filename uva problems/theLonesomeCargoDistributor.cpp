#include <string>
#include <bits/stdc++.h>
#include <algorithm>
#include <stack>
#include <queue>
using namespace std;

int filledq(vector<queue<int>> hh){
    int res = 0;
    
    for (auto q : hh){
        if (!q.empty()){
            res = 1;
            break;
        }
    }
    return res;
}

int dest_empty(int dest[]){
    
    for (int i=0;i<101;++i){
        if (dest[i] != 0){
            return 0;
        }
    }
    return 1;
}

int main (){
    int set;
    cin >> set;
    while (set--){
        int n,s,q,temp,temp2,flag,a,b,c,d,res,dest[105] = {};
        
        cin >> n >> s >> q;
        stack<int> carrier;
        vector<queue<int>> queues(n);
        for (int i=0;i<n;++i){
            cin >> temp;
            for (int j=0;j<temp;++j){
                cin >> temp2;
                queues[i].push(temp2);
                dest[temp2]++;
            }
        }
        res = -2;
        b = 1;
        
        while(b){
            
            for (int i=0;i<n&&b;++i){
                b = 0;
                flag = 1;
                res += 2;
                //unload
                while(!carrier.empty()&&flag){
                    
                    a = carrier.top();
                    if (a == i+1){
                        carrier.pop();
                        dest[a]--;
                        res++;
                    }
                    else{
                        if (queues[i].size() < q){
                            carrier.pop();
                            queues[i].push(a);
                            res++;
                        }
                        else{
                            flag = 0;
                        }
                    }
                    
                }
                //load
                while(!queues[i].empty()&&carrier.size() < s ){
                    a = queues[i].front();
                    queues[i].pop();
                    carrier.push(a);
                    res++;
                }
                // cout << "linfini hna";
                
            if (!dest_empty(dest))    b=1;
            }
    
        }

        cout <<  res << endl;
    }




    return 0;
    
    
}