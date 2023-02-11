#include <bits/stdc++.h>
using namespace std;

int ninjaAndLadoos(vector<int> &row1, vector<int> &row2, int n, int m, int k) {
    // Write your code here.
    if(n>m) {
            return ninjaAndLadoos(row2,row1,m,n,k);
    }




     int low=max(0, k-m);
     int high=min(n,k);
     while (low <= high) {
       int cut1 = (low + high) >> 1;
       int cut2 = k - cut1;

       int left1 = (cut1 == 0) ? INT_MIN : row1[cut1 - 1];
       int left2 = (cut2 == 0) ? INT_MIN : row2[cut2 - 1];
       int right1 = (cut1 == n) ? INT_MAX : row1[cut1];
       int right2 = (cut2 == m) ? INT_MAX : row2[cut2];

        if(left1<=right2 && left2<=right1){
            return max(left1, left2);
        }else{
            if(left1>right2 ){
                high=cut1-1;
            }else low=cut1+1;
        }

     }
     return 1;
}













// TLE

#include<bits/stdc++.h>
using namespace std;
int ninjaAndLadoos(vector<int> &row1, vector<int> &row2, int m, int n, int k) {
    // Write your code here.
    int i=0;
    int j=0,r=0;
    vector<int> row3(m+n);
    while(i<m&&j<n){
         if(row1[i]<row2[j]){
             row3[r++]=row1[i++];
         }
         else{
             row3[r++]=row2[j++];
         }
    }
    while(i<m){
         row3[r++]=row1[i++];

    } 
    while(j<n){
      row3[r++]=row2[j++];

    }
    return row3[k-1];



}