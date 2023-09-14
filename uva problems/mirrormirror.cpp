#include <string>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int is_equal(char a[10][10],char b[10][10],int n){
    int ans = 1;
    for (int i=0;i<n;++i){
        for (int j=0;j<n;++j){
            if (a[i][j] != b[i][j]){
                ans = 0;
                break;
            }
        }
    }

    return ans;
}


int is_90_degree(char a[10][10],char b[10][10],int n){
    int ans = 1;
    for (int i=0;i<n;++i){
        for (int j=0;j<n;++j){
            
            if (b[j][n-1-i] != a[i][j]){
                
                ans = 0;
                break;
            }
        }
    }

    return ans;
}

int is_180_degree(char a[10][10],char b[10][10],int n){
    char temp[10][10];
    for (int i=0;i<n;++i)
        for (int j=0;j<n;++j)
            temp[j][n-1-i] = a[i][j];

    return is_90_degree(temp,b,n);
}

int is_270_degree(char a[10][10],char b[10][10],int n){
    char temp[10][10];
    for (int i=0;i<n;++i)
        for (int j=0;j<n;++j)
            temp[j][n-1-i] = a[i][j];

    return is_180_degree(temp,b,n);
}

int is_vertical_90_degree(char a[10][10],char b[10][10],int n){
    char temp[10][10];
    for (int i=0;i<n;++i)
        for (int j=0;j<n;++j)
            temp[n-1-i][j] = a[i][j];

    return is_90_degree(temp,b,n);
}

int is_vertical_180_degree(char a[10][10],char b[10][10],int n){
    char temp[10][10];
    for (int i=0;i<n;++i)
        for (int j=0;j<n;++j)
            temp[n-1-i][j] = a[i][j];

    return is_180_degree(temp,b,n);
}

int is_vertical_270_degree(char a[10][10],char b[10][10],int n){
    char temp[10][10];
    for (int i=0;i<n;++i)
        for (int j=0;j<n;++j)
            temp[n-1-i][j] = a[i][j];

    return is_270_degree(temp,b,n);
}

int is_vertical(char a[10][10],char b[10][10],int n){
    int ans = 1;
    for (int i=0;i<n;++i){
        for (int j=0;j<n;++j){
            if (b[n-1-i][j] != a[i][j]){
                ans = 0;
                break;
            }
        }
    }
    return ans;
}
int main (){
    int n,cnt = 0;
    while(cin >> n){
        
        char before[10][10], after[10][10];
        for(int i=0;i<n;++i){
            for (int j=0;j<n;++j){
                cin >> before[i][j];
            }
            for (int j=0;j<n;++j){
                cin >> after[i][j];
            }
        }

        if (is_equal(before,after,n))  cout << "Pattern " << ++cnt << " was preserved.";
        else if (is_90_degree(before,after,n))   cout << "Pattern " << ++cnt << " was rotated 90 degrees.";
        else if (is_180_degree(before,after,n)) cout << "Pattern " << ++cnt << " was rotated 180 degrees.";
        else if (is_270_degree(before,after,n)) cout << "Pattern " << ++cnt << " was rotated 270 degrees.";
        
        else if (is_vertical(before,after,n))   cout << "Pattern " << ++cnt << " was reflected vertically.";
        else if(is_vertical_90_degree(before,after,n))  cout << "Pattern " << ++cnt << " was reflected vertically and rotated 90 degrees.";
        else if(is_vertical_180_degree(before,after,n)) cout << "Pattern " << ++cnt << " was reflected vertically and rotated 180 degrees.";
        else if(is_vertical_270_degree(before,after,n)) cout << "Pattern " << ++cnt << " was reflected vertically and rotated 270 degrees.";
        else    cout << "Pattern " << ++cnt << " was improperly transformed.";
        cout << endl;
        
        


    }


    return 0;
}