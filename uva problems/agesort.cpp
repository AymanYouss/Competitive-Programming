#include <string>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main(){
    int count[104],n,tmp;
    memset(count,0,sizeof(count));
    while(cin >> n && n){
        for (int i=0;i<n;++i){
            cin >> tmp;
            count[tmp]++;
        }

        string sep = "";
        for (int i=1;i<101;++i){
            while (count[i] != 0)
            {
                cout << sep << i;
                sep = " ";
                count[i]--;
            }
            
        }
        cout << endl;
    }


    return 0;
}