//  brute force approach
#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    string reverseWords(string s) {
        string result = "";
        int i=0;
        int n=s.size();
        while(i<n){
            while(i<n && s[i]==' ') i++;
            if(i>=n) break;
            int j= i+1;
            while(j<n&& s[j]!=' ')j++ ;
            string sub = s.substr(i,j-i);
            if(result.size()==0) result = sub;
            else{
                result = sub + " " + result;
            }
            i=j+1;
        }
        return result;
    }
};




// optimize approach


class Solution {
public:
    string reverseWords(string s) {
        int start=0,end=0,index=0,n=s.size();
        reverse(s.begin(),s.end());
        while(index<n){
            while(index<n&& s[index] !=' ')
            s[end++]=s[index++];

            if(start<end){
                reverse(s.begin()+start , s.begin()+end);
                if(end==n) break;
                s[end++]=' ';
                start=end;
            }
            ++index;
        }
        if(end>0&&s[end-1]==' ')--end;
        s.resize(end);
        return s;
    }
};