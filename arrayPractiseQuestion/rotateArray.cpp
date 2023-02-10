#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
       void rotate(vector<int>& nums, int k) {
          int n = nums.size();
        k = k % n;
        if (n == 0 || k <= 0){
            return;
        }
        vector<int> temp(n);
        for(int i=n-k; i<n; i++){
            temp[i-n+k] = nums[i];
        }
          
          for(int i=n-k-1;i>=0;i--){
              temp[i+k]=nums[i];
          }
          nums=temp;
        }
}; 


// better approach


