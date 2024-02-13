#include<iostream>
using namespace std;
int main()
{
    int r;
    cout<<"Enter the number of row: ";
    cin>>r;
    for(int i=0; i<=r; i++){
        for(int j=0; j<=i; j++)
        {
            cout<<" * ";
        }
        cout<<"\n";
    }
}

/*

Enter the number of row: 5
 *    
 *  * 
 *  *  *
 *  *  *  *
 *  *  *  *  * 
 *  *  *  *  *  *

*/