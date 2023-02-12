#include <bits/stdc++.h> 
using namespace std;

bool checkPalindrome(string s)
{
    string str="";
    for(int i=s.size()-1;i>=0;i--){
        if(isalnum(s[i])) {
            str += tolower(s[i]);  // convert to lowercase before adding to str
        }
    }
    string ag="";
   for(int i=0;i<s.size();i++){
       if(isalnum(s[i])){
           ag += tolower(s[i]);
       }
   }
    if(str==ag) {
        return true;
    } else {
        return false;
    }
}
