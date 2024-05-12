/*
4. Write a program to find second largest element in an array.
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of an array: ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int large = arr[0];
    int temp = 0;
    cout<<"Array Element is: ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<"  ";
    }

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout<<"\nSecond Largest Element is: "<<arr[n-2];
}

/*
Enter the size of an array: 7
enter the elements: 6 5 1 3 2 7 4
Array Element is: 6  5  1  3  2  7  4  
Second Largest Element is: 6
*/