#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
     priority_queue<int> pq;
        for(int i=0; i<piles.size(); i++){
            pq.push(piles[i]);
        }
        while(k--){
            int p=pq.top();
            if(p%2==0){
                p=p/2;
            }
            else{
                p=p-p/2;
            }
            pq.pop();
            pq.push(p);
        } 
             int ans=0;
            while(!pq.empty())
            {
              ans+=pq.top();
                pq.pop();
            }
      return ans;
    }
};