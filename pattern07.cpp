#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
     int row=1;
    while (row<=n)
    {
        int space=n-row;
        while(space!=0){
            cout<<" ";
            space--;

        }
        int col=1;
        while(col<=row){
            cout<<row;
            col++;  
        }
        // int star=n-row+1;
        // while(star!=0){
        //     cout<<"*";
        //     star--;

        // }
        cout<<endl;
        row++;
    }
    
}