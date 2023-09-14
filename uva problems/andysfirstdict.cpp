#include <string>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <set>


using namespace std;

int isalphabet(char c){
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c<= 'z');
}

int main(){
    string line,word;
    set<string> sortedwords;
    while (cin >> line){
        //if (line == "0")    break;
        word = "";
        for (int i=0;i<line.size();++i){
            if (isalphabet(line[i])){
                word += tolower(line[i]);
            }
            else if (word != ""){
                sortedwords.insert(word);
                word = "";
            }
        }
        if (word != "") sortedwords.insert(word);

    }

    for (string seq: sortedwords){
        cout << seq  << endl;
    }
    
}