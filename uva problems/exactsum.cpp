#include <string>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <set>


using namespace std;


int main(){
    int n,books[10005],m;

    while(cin >> n){
        for (int i=0;i<n;++i){
            cin >> books[i];
        }
        cin >> m;
        sort(books,books+n);
        int cur1 = 0, cur2=1;
        while(cur1>=0 && cur2 != n){
            if (books[cur1]+books[cur2] == m){
                cout << "Peter should buy books whose prices are ";
                cout << books[cur1] << " and " << books[cur2]<<"." << endl << endl;
                break;
            }
            else if(books[cur1]+books[cur2] >= m){
                cur1--;
            }
            else{
                cur1++;
                cur2++;
            }
        }
    }
    
    
    return 0;
    
    
}