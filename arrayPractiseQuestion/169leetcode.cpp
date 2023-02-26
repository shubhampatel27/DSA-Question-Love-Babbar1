#include<vector>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int candidate = 0;
        for(int num : nums){
            if(count == 0){
                candidate = num;
            }
            if(num== candidate) count +=1;
            else count -=1;
        }
        return candidate;
    }
};






#include <iterator>

int findMajorityElement(int arr[], int n) {
	// Write your code here.
	int count = 0;
	int candidate =0;

	for(int i = 0; i < n; i++){
    int num = arr[i];
    if(count == 0) candidate = num;
    if(candidate == num) count += 1;
    else count -= 1;
}
	count = 0;

	for(int i=0;i<n; i++){
		if(arr[i]==candidate)
		count++;

		if(count > n/2) return candidate;
	
	}

	return -1;
}