#include <string>
#include <bits/stdc++.h>
#include <sstream>
#include <algorithm>


using namespace std;

typedef struct contestant{
    int number;
   
    int prob[11];
    int pen[11];
    int totalprob;
    int totalpen;
    
    int submitted = 0;
}  ctc ;

bool cmp(contestant a,contestant b){
    if (a.totalprob == b.totalprob)   return a.totalpen < b.totalpen;
    return a.totalprob > b.totalprob;
}
int main(){
    int t;
    cin >> t;
    getchar();
    char input[20];
    int flag = 0;
    gets(input);
    while(t--){
        char sub;
        ctc contestants[102];
        for (int i=0;i<102;++i){
            contestants[i].number = i;
            contestants[i].submitted = 0;
            contestants[i].totalpen = 0;
            contestants[i].totalprob = 0;
            memset(contestants[i].prob,0,sizeof(contestants[i].prob));
            memset(contestants[i].pen,0,sizeof(contestants[i].pen));
        }
        int n, prob, penalty;
        
        while(gets(input) && strlen(input) != 0){
            sscanf(input,"%d %d %d %c",&n,&prob,&penalty,&sub);
           

            contestants[n].submitted = 1;
            contestants[n].number = n;  

            if (sub == 'C'){
                if (!contestants[n].prob[prob]){
                    contestants[n].pen[prob] += penalty;
                    contestants[n].prob[prob] = 1;
                }
                
                   
            }
            else if (sub == 'I'){
                if (!contestants[n].prob[prob]){
                    contestants[n].pen[prob] += 20;
                   
                }
                
                
            }
            }
        for (int i=0;i<102;++i){
            for (int j=0;j<11;++j){
                if (contestants[i].prob[j]){
                    contestants[i].totalpen += contestants[i].pen[j];
                    contestants[i].totalprob++;
                }
            }
        }
            
        
        sort(contestants,contestants+102,cmp);
        if (flag) cout << endl;
        flag = 1;
        for (int i=0;i<102;++i){
            
            if (contestants[i].submitted == 1){
                cout << contestants[i].number << " " << contestants[i].totalprob << " " << contestants[i].totalpen << endl;
            }

        }
        


    }

    return 0;
}
