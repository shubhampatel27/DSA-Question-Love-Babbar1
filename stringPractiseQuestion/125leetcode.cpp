#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        
        if(s.size()==0||s.size()==1) return true;
        int start=0 ;
        int end=s.size()-1;
        while(start<end){
            while(start<end&& !isalnum(s[start])){
                start++;
            }
             while(start<end&& !isalnum(s[end])){
                end--;
            }
            if(start>=end) break;
            if(tolower(s[start]) !=tolower(s[end])) return false;



            start++;
            end--;
        }
   return true; }
    
};