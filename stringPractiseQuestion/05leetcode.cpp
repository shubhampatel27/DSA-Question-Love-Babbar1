#include<bits/stdc++.h>
using namespace std;




//  very brute force approach TLE

string longestPalinSubstring(string s)
{
    // Write your code here.  int n = s.length();
        int n = s.length();
        string longeststr="";
        for(int i=0; i<n;i++){
            for(int j=i; j<n; j++){

                string sub = s.substr(i,j-i+1);
                bool is_palindrome = true;

                for( int k=0;k<sub.length();k++){
                    if(sub[k] !=sub[sub.length()-1-k]){
                      is_palindrome =  false;
                   break;
                        
                    }
                }
              if(is_palindrome && sub.length() > longeststr.length() ){
                  longeststr = sub;
              }

            }
        }
        return longeststr;
}


// optimize approach 
class Solution {
    public:
    int  findingLength(string s, int l, int r, int n){
          while(l >=0 && r < n){
              if(s[l]==s[r]) {
                  l-- , r++;
              }else{
                  break;
              }
          }
          int len = r-l-1;

      return len;
    }
public:
    string longestPalindrome(string s) {
        if(s.length()<=1) return s;
      int max_length =1;
        int n = s.length();
      int st=0;
      int end=0;
       for(int i=0; i<n-1; i++){
            int l=i; int r=i;
       int len1 = findingLength(s,l,r,n);
      int len2 = findingLength(s,l,r+1,n);
           int len = max(len1, len2);
            
            if(len> max_length)
            {
                max_length = len;
                st = i-(len-1)/2;
            }
          }
      return s.substr(st, max_length);

      }
};



