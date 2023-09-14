#include <string>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    while (n--){
        string a,b;
        cin >> a >> b;
        int sizea = a.size();
        int sizeb = b.size();
        int diff = abs(sizea-sizeb);
        if (a.size()>b.size()){
            for (int i=0;i<diff;++i)   b+= '0';
        }
        else{
            for (int i=0;i<diff;++i){
                a+= '0';
                
            }   
        }
        
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        
        string res="";
        
        int cur = a.size()-1;
        int temp, p = 0;
        while(cur>=0){
            temp = (a[cur] - '0') + (b[cur] - '0') + p;
            if (temp>= 10){
                res+= (char)(temp%10 + '0');
                
                p = 1;
            }
            else{
                res+=(char)(temp + '0');
                
                p=0;
            }
            cur--;

        }
        if(p)   res+= '1';
      
        int tmp = 0;
        while (res[tmp]=='0'){
            tmp++;
        }
        

            if(tmp){res = res.substr(tmp,res.size()-tmp+1);}
        
        
        cout << res << endl;
        
    }


    return 0;
}