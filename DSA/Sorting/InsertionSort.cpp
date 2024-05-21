// Insertion Sort

#include<iostream>
using namespace std;
int main()
{
    int n,min,t;
    int arr[100];
    cout<<"Enter the size of an array: ";
    cin>>n;
    cout<<"Enter "<<n<<" elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    for(int i=1; i<n; i++)
    {
        min=i;
        while(min>0 && arr[min]<arr[min-1])
        {
            t = arr[min];
            arr[min] = arr[min-1];
            arr[min-1] = t;
            min--;
        }
    }
    cout<<"After sorted array: \n";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

//Space Complexity : O(n).
//Time Complexity : O(n2)
//Stable
//Inplace