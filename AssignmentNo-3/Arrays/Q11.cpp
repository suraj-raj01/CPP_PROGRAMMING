/*
11. Write a program to delete all duplicate elements from an array.
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of an array: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                for(int k=j; k<n; k++)
                {
                    arr[k] = arr[k+1];
                }
                j--;
                n--;
            }
        }
    }
    cout<<"After Deleting Dublicate Elements: ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i];
    }
}

/*
Enter the size of an array: 10
5 4 2 3 6 2 1 5 6 3 
After Deleting Dublicate Elements: 542361
*/