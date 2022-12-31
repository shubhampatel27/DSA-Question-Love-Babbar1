#include <iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
    int row =1;
  
      while (row<=n)
    {
      int value = row;
     int col=1;
    while (col<=row)
     {
        // char ch= 'A'+col-1;
        // cout<<ch<< " ";
        cout<<(row - col+1) << " ";
        value++;
        col++;
     }cout << endl;
      
      row++;
     
    }
    
}