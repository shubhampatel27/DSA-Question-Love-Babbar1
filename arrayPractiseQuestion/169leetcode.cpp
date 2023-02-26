

// brute force approach

using namespace std;
int majorityElement(vector<int>& nums) {
    int majority_count = nums.size() / 2;

    for (int i = 0; i < nums.size(); i++) {
        int count = 0;
        for (int j = 0; j < nums.size(); j++) {
            if (nums[j] == nums[i]) {
                count++;
            }
        }
        if (count > majority_count) {
            return nums[i];
        }
    }
    // This return statement should never be reached, because it is assumed that
    // the majority element always exists in the array.
    return -1;
}

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



// using map 
#include<map>
#include<unordered_map> 
using namespace std;

int findMajorityElement(int arr[], int n) {
    map<int, int> freq;
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }
    for (auto f : freq) {
        if (f.second > n / 2) {
            return f.first;
        }
    }
    return -1;
}
