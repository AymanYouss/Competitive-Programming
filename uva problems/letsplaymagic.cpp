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

void print_array_string(string vec[],int size){
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
    int n;
    while(cin >> n && n){
        int cur = 0;
        string card,word, cards[n];
        for (int i=0;i<n;++i){
            cin >> card >> word;
            int l = word.length();
            while(l){
                if(cards[cur] == "")    l--;
                cur = (cur + 1)%n;
            }
            
            if (cur == 0)   cards[n-1] = card;
            else cards[cur-1] = card;
        }
    print_array_string(cards,n);

    }
 
    return 0;
    
}