#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int romanToInt(string s) {
        int n =s.size();
        unordered_map<char,int> map ={
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000}, 
           
            
        };

      int sum=map[s.back()];
      for(int i= n-2;i>=0;i--){
          if(map[s[i]]<map[s[i+1]])
          sum -=map[s[i]];
          else 
          sum+= map[s[i]];

      }
      return sum;
    }
};