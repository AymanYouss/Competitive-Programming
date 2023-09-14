#include <string>
#include <bits/stdc++.h>
#include <algorithm>


using namespace std;


int main(){
    int t,cnt=0;
    int i,j;
    cin >> t;
    while (t--){
        cout << "Case #" << ++cnt << ":\n";
        int score,max_score=0;
        int solved[3][1001],size[3] = {},scores[3] = {};
        int frequency[10001] = {};
        //memset(frequency,0,sizeof(frequency));
        for ( i=0;i<3;++i){
            cin >> size[i];
            for ( j=0;j<size[i];++j){
                cin >> solved[i][j];
                frequency[solved[i][j]]++;
            }
            sort(solved[i], solved[i]+size[i]);
        }
        
        for ( i=0;i<3;++i){
            score = 0;
            for ( j=0;j<size[i];++j){
                if (frequency[solved[i][j]] == 1){
                    score++;
                }
            }
            
            if (score > max_score){
                max_score = score;
            }

            scores[i] = score;
            
        }
        
        for ( i=0;i<3;++i){
            if (scores[i] == max_score){
                cout << i+1 << " " << scores[i];
                for ( j=0;j<size[i];++j){
                    if (frequency[solved[i][j]] == 1){
                        cout << " " << solved[i][j]; 
                    }
                }
                cout << endl;
            }
        }


    }
 
    return 0;
    
}