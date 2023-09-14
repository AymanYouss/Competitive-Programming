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
    int t;
    cin >> t;
    while (t--){
        int mat[3][3],new_mat[3][3],tmp;
        int has_1,cnt=0;
        
        for (int i=0;i<3;++i){
            for (int j=0;j<3;++j){
                scanf("%1d", &mat[i][j]);
                if (mat[i][j] == 1){
                    has_1 = 1;
                }
            }
            
        }
        
        if (!has_1)  cout << -1 << endl;
        else{
            while (has_1){
                has_1 = 0;
                for (int i=0;i<3;++i){
                    for (int j=0;j<3;++j){
                        int border[4][2] = {{i-1,j},
                                            {i,j-1},
                                            {i+1,j},
                                            {i,j+1}};
                        int sum = 0;
                        for (int k=0;k<4;k++){
                            if (0 <= border[k][0] && border[k][0] < 3 && 0 <= border[k][1] && border[k][1] < 3){
                                sum = (sum + mat[border[k][0]][border[k][1]])%2;
                            }
                        }
                        new_mat[i][j] = sum;
                        if (sum == 1)   has_1 = 1;
                    }
                }
                //cout << "----------" << endl;
                for (int i=0;i<3;++i){

                    for (int j=0;j<3;++j){
                        mat[i][j] = new_mat[i][j];
                        //cout << mat[i][j];
                    }
                    //cout << endl;
                }
                
                cnt++;
            }
            cout << cnt-1 << endl;
            
        }
    }

    return 0;
    
}