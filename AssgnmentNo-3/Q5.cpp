/*
5. Write a program to count total number of even and odd elements in an array.
*/

#include<iostream>
using namespace std;
int main()
{
    int n,odd=0,even=0;
    cout<<"Enter the size of an array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++)
    {
        if(arr[i]%2==0)
        {
            even++;
        }
        if(arr[i]%2!=0)
        {
            odd++;
        }
    }
    cout<<"ODD : "<<odd<<endl;
    cout<<"EVEN : "<<even;
}

/*
Enter the size of an array: 8
Enter the elements: 8 7 4 6 2 3 5 1
ODD : 4
EVEN : 4
*/