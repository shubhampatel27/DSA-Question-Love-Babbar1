#include<bits/stdc++.h>
using namespace std;


// 88 leetcode

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i =m, k=0;
       for(i=m; i<m+n;i++){
           swap(nums1[i], nums2[k++]);
       }
       int gap = ceil((float)(m+n)/2);
      int len = m+n;
      while(gap>0){
          int i=0;

          int j=gap;
          while(j<len&&i<len ){
              if(nums1[i]>nums1[j]){
                  swap(nums1[i], nums1[j]);
              }
              i++;
              j++;
          }

            if(gap==1)gap=-1;
          else
          gap=ceil((float)(gap)/2);
      }

      
    }
};



// another approach
void merge(int arr1[],int n, int arr2[],int m, int arr3[]){

     int i=0,j=0,k=0;
     while(i<n&&j<m){
        if(arr1[i]<arr2[j]){
            arr3[k++]=arr1[i++];
        }
        else{
            arr3[k++]=arr2[j++];
        }
     }
     while(i<n){
        arr3[k++]=arr1[i++];
     }
     while(j<m){
        arr3[k++]=arr1[j++];
     }
 
}
 
// another approach
 
void merge(int arr1[],int n, int arr2[],int m){
    int i,k;
    for(i=0;i<n;i++){
        if(arr1[i]>arr2[0]){
            swap(arr1[i],arr2[0]);
        }

        int first = arr2[0];
        // insertion sort
        for(k=1;k<m&&arr2[k]<first;k++){
            arr2[k-1]=arr2[k];
        }
        arr2[k-1]=first;
    }
}
