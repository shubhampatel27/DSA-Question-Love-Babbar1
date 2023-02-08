// class Solution {
// public:
//     int mySqrt(int x) {
//         //we are going to this question by Binary search
//         int start, end, ans, mid;
//         start=1;
//         end=x;
//         ans=0;
//         mid= start+(end-start)/2;
//         while(start<=end){
//             mid= start+ (end-start)/2;
//             if(mid<=x/mid)
//           {
//             ans=mid;
//             start= mid+1;
//             } else end=mid-1;
//         }
//         return ans;
//     }
// };



// mid*mid can be written as mid=  / mid;