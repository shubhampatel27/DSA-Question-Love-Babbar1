// leetcode 344 
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void rev(vector<char>& s, int left, int right)
    {
        if(left>=right)                             // Base Condition
            return;
        swap(s[left++],s[right--]);                 // makes the problem smaller of same type            
        rev(s,left,right);
    }
    void reverseString(vector<char>& s) {
        rev(s,0,s.size()-1);
    }
};


// below one is two pointer approach;




class Solution {
public:
    void reverseString(vector<char>& s) {
        int start=0;
        int end=s.size()-1;
        while(start<=end){
            swap(s[start],s[end]);
            start++;
            end--;
        }
    }
};