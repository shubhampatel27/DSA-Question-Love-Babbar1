// #include<iostream>
// using namespace std;
// pair<int, int> findFirstLastPosition(vector<int> &arr, int n, int x)
// {
// 	// Write your code here.
// 	pair<int, int> ans;
// 	ans.first=-1;
// 	ans.second=-1;
// 	int start=0;
// 	int end = n-1;
// 	int mid ;
// 	while(start<=end){
// 		mid = start + (end-start)/2;
// 		if(arr[mid]==x){
// 			ans.first=mid;
// 			end = mid-1;
// 		}
// 		else if(arr[mid]>x){
// 			end = mid-1;		
// 		}
// 		else{
// 			start= mid+1;
// 		}
	

// 	}

	

// 	 start=0;
//       end = n-1;
// 	while(start<=end){
// 		mid = start + (end-start)/2;
// 		if(arr[mid]==x){
// 			ans.second=mid;
// 			start = mid+1;
// 		}
// 		else if(arr[mid]>x){
// 			end = mid-1;		
// 		}
// 		else{
// 			start= mid+1;
// 		}
	   

// 	}
// 	return ans;
// }

