#include <bits/stdc++.h>
#include <iostream>
using namespace std;
bool isPossible(vector<int> &boards, int k,int n,int mid){
    int painter=1;
    int superSum=boards[0];
    for(int i=1;i<n;i++){
        if(superSum+boards[i]<=mid){
            superSum +=boards[i];
        }
        else{
            painter++;
            if(painter>k||boards[i]>mid )return false;

            superSum=boards[i];
        }
    }
    return true;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    //    Write your code here.
    int start,end,sum,mid,ans,n;
    start=0;
    sum = 0;
    ans=-1; n=boards.size();
    for(int i=0;i<n;i++){
        sum+=boards[i];
    }
    end=sum;
    mid=start+(end-start)/2;

     while(start<=end){
             mid=start+(end-start)/2;
         if(isPossible(boards,k,n,mid)){
             ans=mid;
             end=mid-1;
         }
         else{
             start=mid+1;
         }
     }

return ans;

}