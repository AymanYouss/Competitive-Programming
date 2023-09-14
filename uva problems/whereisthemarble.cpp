#include <string>
#include <bits/stdc++.h>
#include <algorithm>
#include <stack>
using namespace std;
int binarySearch(int array[], int low, int high, int number_to_search_for) {

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (number_to_search_for == array[mid]){
            return mid;
        }

        if (number_to_search_for > array[mid]){
            low = mid + 1;
        }
      
        if (number_to_search_for < array[mid]){
            high = mid - 1;
        }

    }

  return -1;
}

int binary_search_find_index(vector<int> v, int data) {
    auto it = lower_bound(v.begin(), v.end(), data);
    if (it == v.end() || *it != data) {
        return -1;
    } else {
        size_t index = distance(v.begin(), it);
        return index;
    }   
}

int main(){
    int n,q,x,c=0,temp;
    vector<int> a;
    while(cin >> n >> q && n && q){
        a.clear();
        for (int i = 0;i<n;++i){
            cin >> temp;
            a.push_back(temp);
        }
        sort(a.begin(),a.end());
        cout << "CASE# " << ++c << ":" << endl;
        for (int i=0;i<q;++i){
            cin >> x;
            temp = binary_search_find_index(a,x);
            if(temp != -1){
                cout << x << " found at " << temp + 1;
            }
            else    cout << x << " not found";

            cout << endl;
        }
    }
    return 0;
}