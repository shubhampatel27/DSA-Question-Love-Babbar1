#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
  while (row<=n)
  {  
      int col=1;
      while (col<=n)   
      { 
        char alpha ='A'+row-1 + col-1;

        cout<< alpha ;
        col++;
      }
      cout<<endl;
      row++;
  }
  

}
