#include <string>
#include <bits/stdc++.h>
#include <algorithm>


using namespace std;

void print_array(int vec[],int size){
    cout << vec[0];
    for (int i=1;i<size;++i){
        cout << " "<< vec[i];
    }
    cout << endl;
}

void print_2darray(int vec[][2],int size){
    for (int i=0;i<size;++i){
        cout << vec[i][0] << " ";
    }
    cout << endl;
}

void print_vector(vector<int> vec){
    for (int elem: vec){
        cout << elem << " ";
    }
    cout << endl;
}
int main(){
    string s;
    
    while(cin >> s){
        int prev = -1, maxdist = 0, n = s.length();
        for (int i=0;i<s.length();i++){
           if (s[i] == 'X'){
            if (prev == -1){
                maxdist = max(maxdist,i-1);
            }
            else{
                maxdist = max(maxdist,(i-prev-2)/2);
            }
            prev = i;
           }
        }
        if (prev != n-1)    maxdist = max(maxdist,(n-prev-2));
        cout << maxdist << endl;
    }
    
 
    return 0;
    
}