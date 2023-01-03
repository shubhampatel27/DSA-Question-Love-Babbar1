#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
     int row=1;
     
    while (row<=n)
    {
       int col=n-row+1;
        int value=1;
        while(col){
            cout<<value;
            col--;  
            value++;
        }
    



       
        // int col=n-row+1;
        // int value=1;
        //  while (col!=0)
        //  {
        //     cout<<value;
        //     value++;
        //     col--;
        //  }
         

        int start=row-1;
        while(start!=0){
            cout<<"*";
            start--;

        }
          int space=row-1;
        while(space!=0){
            cout<<"*";
            space--; 
        }
          int space1=n-row+1;
           int space12=n-row+1;
        while(space1!=0){
            cout<<space12;
            space12--;
            space1--; 

        }

  cout<<endl;
        row++;

        }
      
    }
    