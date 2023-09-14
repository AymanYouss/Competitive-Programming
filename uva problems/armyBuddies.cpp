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
    int s,b,left[100001],right[100001],l,r;
    while(scanf("%d %d",&s,&b) && s || b){
        for (int i = 1;i<=s;++i){
            left[i] = i - 1;
            right[i] = i + 1;
        }
        right[s] = -1;
        left[1] = -1;
        for (int i=0;i<b;++i){
            cin >> l >> r;
            left[right[r]] = left[l];
            right[left[l]] = right[r];

            if (left[l] != -1)  cout << left[l];
            else cout << "*";
            cout << " ";
            if (right[r] != -1)  cout << right[r] << "\n";
            else cout << "*\n";
        }
        cout << "-\n";
    }
 
    return 0;
    
}