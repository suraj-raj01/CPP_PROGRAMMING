/*
3. Write a program to find maximum and minimum element in an array.
*/

#include<iostream>
using namespace std;
int main()
{
    int arr[] = {5,6,2,1,4,9,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    int min = arr[0];
    int max = arr[0];
    for(int i=0; i<size; i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
        if(max<arr[i])
        {
            max = arr[i];
        }
    }
    
    cout<<"Given array is: \n";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<"\nMinimum number: "<<min<<endl;
    cout<<"Maximum number: "<<max;
}

/*
Given array is: 
5  6  2  1  4  9  3  
Minimum number: 1
Maximum number: 9
*/