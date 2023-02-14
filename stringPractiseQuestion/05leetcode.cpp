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