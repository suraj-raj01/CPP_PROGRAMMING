#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cout<<"Enter the number of row: ";
    cin>>r;
    cout<<"Enter the number of col: ";
    cin>>c;
    for(int i=0; i<=r; i++){
        for(int j=0; j<=c; j++)
        {
            cout<<" * ";
        }
        cout<<"\n";
    }
}