//  brute force approach
#include<vector>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
         for(int i = 0 ;i<row; i++){
            for(int j= 0 ; j<col; j++){
                if(matrix[i][j]== target) return true;
            }
        }
        return false;
    }
};



// better approach
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int i =0 , j = matrix[0].size()-1;
        while(i<n && j >=0){
            if(matrix[i][j]== target) return 1;

            if(matrix[i][j]> target){
                j--;
            }
            else{
                i++;
            }
        }
        return 0;
    }
};


 // best approach
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int low = 0 ;
        int high = (n*m)-1;
        int mid= low + (high-low)/2;
        while(low <=high){
            if(matrix[mid/m][mid%m]==target) return true;

            if(matrix[mid/m][mid%m] < target) low = mid+1;

           else high = mid-1;
            
            mid= low + (high-low)/2;

        }
        return false;
    }
};