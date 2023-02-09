#include<bits/stdc++.h>
using namespace std;
int getMedian(vector<vector<int>> &matrix)
{
    // Write your code here
    int n=matrix.size();
    int m=matrix[0].size();
    int start=0,end=10e5,mid;
    while(start<=end){
       int ans=0;
        mid=start+(end-start)/2;
        for(int i=0;i<n;i++){
            int low=0,high=m-1,newMid;
            while(low<=high){
                newMid=low+(high-low)/2;
                if(matrix[i][newMid]<=mid)low =newMid+1;
                else high =newMid-1;
            } 
            ans +=low;
        }
        if(ans<=n*m/2)start=mid+1;
        else end=mid-1;

    }
    return start;
}