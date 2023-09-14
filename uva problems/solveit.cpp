#include <string>
#include <bits/stdc++.h>
#include <algorithm>
#include <stack>
#include <math.h>
using namespace std;



int main (){
    double p,q,r,s,t,u;
    int flag;
    while(!cin.eof()){

        cin >> p >> q >> r>>s>>t>>u;
        flag = 1;
        for (double i=0;i<=1;i+=0.0001){
            if (p*exp(-i) + q*sin(i)+r*cos(i) + s*tan(i)+ t*i*i + u <= 1e-9){
                cout << fixed << setprecision(4) <<  i << endl;
                flag = 0;
                break;
            }
        }
        if (flag) cout << "No solution" << endl;

    }
    
    
    
}