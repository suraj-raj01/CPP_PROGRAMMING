/*
38. Write a program to print Pascal triangle upto n rows.
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of row: ";
    cin>>n;
    int num;
    for(int i=0; i<n; i++)
    {
        for(int sp=n; sp>i; sp--)
        {
            cout<<" ";
        }
        num=1;
        for(int j=0; j<=i; j++)
        {
            cout<<num<<" ";
            num = num*(i-j)/(j+1);
        }
        cout<<"\n";
    }
}

/*
Enter the number of row: 5
     1 
    1 1 
   1 2 1 
  1 3 3 1 
 1 4 6 4 1 
*/