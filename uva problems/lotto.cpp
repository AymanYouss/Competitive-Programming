#include <string>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <set>


using namespace std;



int main(){
    int k,c=0;
    int a[15];
    while(cin >> k && k){
        if(c++) cout << endl;
        for (int i=0;i<k;++i){
            cin >> a[i];
        }
        
        for (int l = 0; l < k - 5; l++)
			for (int b = l + 1; b < k - 4; b++)
				for (int c = b + 1; c < k - 3; c++)
					for (int d = c + 1; d < k - 2; d++)
						for (int e = d + 1; e < k - 1; e++)
							for (int f = e + 1; f < k; f++)
								printf("%d %d %d %d %d %d\n", a[l], a[b], a[c],
										a[d], a[e], a[f]);

    }

    
}