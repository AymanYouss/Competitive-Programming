#include <string>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <set>


using namespace std;

int n,tracks[23],trk,best_rem;
vector<int> best_tapes;
void reward(int id, int rem, vector<int> cur_tapes){
    
        if (id == trk || rem == 0){
            
            if (best_rem > rem){
                best_rem = rem;
                best_tapes = cur_tapes;
            }
            return ;
        } 
            
        if (tracks[id] <= rem){
            cur_tapes.emplace_back(tracks[id]);
            reward(id+1,rem - tracks[id],cur_tapes);
            cur_tapes.pop_back();
        }
        reward(id+1,rem,cur_tapes);

    }   

int main(){
    
    while (scanf("%d",&n) == 1){
        cin >> trk;
        for (int i=0;i<trk;++i){
            cin >> tracks[i];
        }
        vector<int> tapesfirst;
        best_tapes.clear();
        best_rem = n;

        
        reward(0,n,tapesfirst);
        //best_rem = 0;
        for(int v : best_tapes){
            cout << v << " ";
        //    best_rem += v;
        };
        
        cout <<  "sum:" << n - best_rem << endl;
    }


    
    return 0;
    
}