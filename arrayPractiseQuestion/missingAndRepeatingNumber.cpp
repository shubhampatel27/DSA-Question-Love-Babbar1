#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
using namespace std;

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	long long int len = n;

	long long int S = (len * (len +1))/2;
	long long int P = (len * (len +1)* (2*len+1))/6;
	long long int missingNumber =0, repeatingNumber=0;

	for(int i=0; i<len; i++){
		S -=(long long int)arr[i];
		P -= (long long int)arr[i]*(long long int)arr[i];
	}

	missingNumber = (S+ P/S)/2;
	repeatingNumber = missingNumber - S;

	pair<int,int> ans;
	ans.first= missingNumber;
	ans.second = repeatingNumber;

	return ans;
	
}
