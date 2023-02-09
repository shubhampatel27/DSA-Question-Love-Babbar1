// #include <iostream>
// using namespace std;

// bool isPossible(vector<int> &stalls, int k,int mid){
//     int cowCount =1;
//     int lastPosition=stalls[0];
//     for(int i=1;i<stalls.size(); i++){
//         if(stalls[i]-lastPosition>=mid){
//             cowCount++;
//             if(cowCount==k)return true;
//             lastPosition=stalls[i];
//         }
//     }
//     return false;
// }
// int aggressiveCows(vector<int> &stalls, int k)
// {
//     //    Write your code here.

//     sort(stalls.begin(),stalls.end());
//     int start=1;
//     int end=stalls[stalls.size()-1]-stalls[0];
//     int ans=-1;
//     int mid= start+(end-start)/2;
//     while(start<=end){
//         mid= start+(end-start)/2;
//         if(isPossible(stalls,k,mid)){
//             ans=mid;
//             start=mid+1;
//         }else{
//             end=mid-1;
//         }

//     }
//     return ans;
// }