// // solved this problem in O(n) in c++ code studio questions;

// #include <bits/stdc++.h>
// vector<pair<int,int>> twoSum(vector<int>& arr, int target, int n)
// {
//     // Write your code here. 
//     vector<pair<int,int>>ans;
//     sort(arr.begin(),arr.end());
//     int start=0,end=n-1;
//     while(start<end)
//     {
//         if((arr[start]+arr[end])==target)
//         {
//             ans.push_back({arr[start],arr[end]});
//             start++;
//             end--;
//         }
//         else if((arr[start]+arr[end])>target)
//         {
//             end--;
//         }
//         else
//         {
//             start++;
//         }
//     }
//     if(ans.empty())
//     {
//         ans.push_back({-1,-1});
//         return ans;
//     }
//     return ans;
// }
