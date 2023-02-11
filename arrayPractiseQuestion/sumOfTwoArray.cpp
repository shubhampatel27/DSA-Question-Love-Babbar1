// For more clean code we can write like this as well 



#include <bits/stdc++.h> 
using namespace std;
vector<int> findArraySum(vector<int>& a, int n, vector<int>& b, int m) {
    int i = n - 1;
    int j = m - 1;
    vector<int> ans;
    int carry = 0;
    while (i >= 0 || j >= 0) {
        int sum = carry;
        if (i >= 0) {
            sum += a[i];
            i--;
        }
        if (j >= 0) {
            sum += b[j];
            j--;
        }
        carry = sum / 10;
        int value = sum % 10;
        ans.push_back(value);
    }
    if (carry != 0) {
        ans.push_back(carry);
    }
    reverse(ans.begin(), ans.end());
    return ans;
}












#include <bits/stdc++.h> 
using namespace std;
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	// Write your code here.

	int i=n-1;
	int j=m-1;
	vector<int> ans;
	int carry =0;
	int sum,value;
	while(i>=0&&j>=0){
		 sum = a[i]+b[j]+carry;
		carry = sum/10;
		 value = sum%10;
		ans.push_back(value);
		i--;
		j--;
	}	
	while(i>=0){
		sum=a[i]+carry;
		carry= sum/10;
		value=sum%10;
		ans.push_back(value);
		i--;
	}
	while(j>=0){
		sum=b[j]+carry;
		carry= sum/10;
		value=sum%10;
		ans.push_back(value);
		j--;
	}
	while(carry!=0){
		sum=carry;
		carry= sum/10;
		value=sum%10;
		ans.push_back(value);
	}

    reverse(ans.begin(), ans.end());
   return ans;
}






// little code change in the carry while loop
#include <bits/stdc++.h> 
using namespace std;
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	// Write your code here.

	int i=n-1;
	int j=m-1;
	vector<int> ans;
	int carry =0;
	int sum,value;
	while(i>=0&&j>=0){
		 sum = a[i]+b[j]+carry;
		carry = sum/10;
		 value = sum%10;
		ans.push_back(value);
		i--;
		j--;
	}	
	while(i>=0){
		sum=a[i]+carry;
		carry= sum/10;
		value=sum%10;
		ans.push_back(value);
		i--;
	}
	while(j>=0){
		sum=b[j]+carry;
		carry= sum/10;
		value=sum%10;
		ans.push_back(value);
		j--;
	}
	if(carry!=0){
		ans.push_back(carry);
	}

    reverse(ans.begin(), ans.end());
   return ans;
}








