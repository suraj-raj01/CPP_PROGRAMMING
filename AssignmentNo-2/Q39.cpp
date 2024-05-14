/*
39. Write a program to print the Pyramid patterns.
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of row: ";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        for(int j=n; j>i; j--)
        {
            cout<<" ";
        }
        for(int j=0; j<=i; j++)
        {
            cout<<i<<" ";
        }
        cout<<"\n";
    }
}

/*
Enter the number of row: 5
     0 
    1 1 
   2 2 2 
  3 3 3 3 
 4 4 4 4 4 
*/