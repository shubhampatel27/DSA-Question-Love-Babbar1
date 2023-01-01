#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
      vector<vector<int>> ans;    
       for(int i=0;i<arr.size()-1;i++){ 
       for(int j=i+1;j<arr.size();j++){
            if(arr[i]+arr[j]==s){      
                 vector <int> fack;    
                 fack.push_back(min(arr[i],arr[j])); 
                 fack.push_back(max(arr[i],arr[j])); 
                 ans.push_back(fack);          
            } 
       }
    } 
    sort(ans.begin(),ans.end()); // it is sort that ans who start from minimum number ex -2 2 and -3 3 it convert it like -3 3 and -2 2//
    return ans; 
}