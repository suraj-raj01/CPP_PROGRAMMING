#include<iostream>
using namespace std;
int main()
{
    int r;
    cout<<"Enter the number of row: ";
    cin>>r;
    for(int i=r; i>=1; i--)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<i<<" ";
        }
        cout<<"\n";
    }
}

/*

Enter the number of row: 3
3 3 3 
2 2   
1 

*/