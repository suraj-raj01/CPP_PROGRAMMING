/*
40. Write a program to print the consecutive number patterns.
1
2 3
4 5 6
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of row: ";
    cin>>n;
    int a = 1;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            cout<<a<<" ";
            a++;
        }
        cout<<"\n";
    }
}

/*
Enter the number of row: 3
1 
2 3 
4 5 6 
*/