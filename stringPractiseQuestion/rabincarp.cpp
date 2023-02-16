#include<bits/stdc++.h>
using namespace std;
vector<int> stringMatch(string &str, string &pat) {
    // Write your code here
    int sizeOfStr = str.size();
    int sizeOfpat = pat.size();
    vector<int> ans;
    
    for(int i=0; i<=sizeOfStr-sizeOfpat; i++){
        int j;
        for( j=0 ; j<sizeOfpat ; j++){
            if(str[i+j]!=pat[j]){
                break;
            }
        }
        if(j==sizeOfpat){
            ans.push_back(i);
        }
    }
    return ans;
}