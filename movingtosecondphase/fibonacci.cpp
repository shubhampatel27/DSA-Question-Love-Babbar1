#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=0;
    int b=1;
    int i=1;
    cout<<a<<" " <<b<<" ";
    while (i<=n)
    {

        int c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
        i++;

    }
    


}