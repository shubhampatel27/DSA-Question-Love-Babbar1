#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
     int row=1;
     
    while (row<=n)
    {
        // int space=n-row;
        // while(space!=0){
        //     cout<<" ";
        //     space--;

        // // }

        int col=n-row+1;
        int value=1;
        while(col){
            cout<<value;
            col--;  
            value++;
        }
        int start=row-1;
        while(start!=0){
            cout<<"*";
            start--;




        }
        cout<<endl;
        row++;
    }
    
}