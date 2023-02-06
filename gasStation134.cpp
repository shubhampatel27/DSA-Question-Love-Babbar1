// class Solution {
// public:
//     int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
//         int lower_index=0;
//         int totalGas=0;
//         int totalCost=0;
//         int currentCost=0;
//         int n =gas.size(); 
//         for(int i=0; i<n; i++){
//              totalGas +=gas[i];
//              totalCost +=cost[i];
//              currentCost = currentCost + gas[i]-cost[i];
//              if(currentCost<0){
//                lower_index=i+1;
//                currentCost =0;
//              }
//         }if(totalGas>=totalCost)
//           return lower_index;
    
//     return -1;
//     }
// };