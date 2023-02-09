#include <bits/stdc++.h> 
double isMultiply(int number,int n){
	double ans=1.0;
	for(int i=1; i<=n;i++){
		ans *=number;
	}
	return ans;
}
double findNthRootOfM(int n, int m) {
	// Write your code here.
	double start,end,eps, mid,ans;
	start=0;
	end=m;
	eps=1e-7;
	
	while((end-start) > eps){
	   mid=start+(end-start)/2.0;
	 if(isMultiply(mid, n)==m) return mid;
	   else if( isMultiply(mid,n)<m){
	      start=mid;
	   }
	   else{
	      end=mid;
	   }
	}
    return (start+end)/2.0;
}



#include <bits/stdc++.h> 
double isMultiply(double number, int n){
	double ans=1.0;
	for(int i=1; i<=n;i++){
		ans *=number;
	}
	return ans;
}
double findNthRootOfM(int n, int m) {
	// Write your code here.
	double start,end,eps, mid,ans;
	start=0;
	end=m;
	eps=1e-7;
	
	while((end-start) > eps){
	   mid=(start+end)/2.0;
	   if(isMultiply(mid, n)==m) return mid;
	   else if( isMultiply(mid,n)<m){
	      start=mid;
	   }
	   else{
	      end=mid;
	   }
	}
	return (start+end)/2.0;
}











