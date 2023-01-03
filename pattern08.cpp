#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
     int row=1;
     int value=1;
    while (row<=n)
    {
        int space=n-row;
        while(space!=0){
            cout<<" ";
            space--;

        }
        int col=1;
        
        while(col<=row){
            cout<<col;
            col++;  
            value++;
        }
        int start=row-1;
        while(start!=0){
            cout<<start;
            start--;

        }
        cout<<endl;
        row++;
    }
    
}