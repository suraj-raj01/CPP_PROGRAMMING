// Bubble Sort...

/*
#include<iostream>
using namespace std;
#include<cmath>

void BubbleSort(int arr[], int size)
{
    int swaped=0;
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<i-1; j++)
        {
            if(arr[i]<arr[j+1])
            {
                swap(arr[i],arr[j+1]);
                swaped++;
            }
        }
    }
    cout<<"Swaped : "<<swaped<<" Times"<<endl;
}
void print(int arr[],int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<"\t";
    }
}

int main()
{
int n=5;
int arr[] = {1,5,3,2,4};
cout<<"Before Bubble Sort\n";
print(arr,n);
cout<<"\nAfter Bubble Sort\n";
BubbleSort(arr,n);
print(arr,n);
}
*/



/*
#include<iostream>
using namespace std;
int main()
{
    int arr[] = {8,6,9,2,7,5,3};
    int temp,swapped,c;
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Array Before Applying Bubble Sort: \n";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<"\t";
    }
    swapped=0;
    for(int i=0; i<size; i++)
    {
        c=0;
        for(int j=0; j<size-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped++;
                c++;
            }
        }
        if(i!=size-1 && c==0)
        {
            // cout<<"Array Sorted During Run Time\n";
            break;
        }
    }
    cout<<"\nAfter applying Bubble Sort: \n";
    for(int j=0; j<size; j++)
    {
        cout<<arr[j]<<"\t";
    }
    cout<<"\n"<<swapped<<" Times swapped\n";
}
*/

#include<iostream>
using namespace std;

void BubbleSort(int arr[],int size)
{
    cout<<"Before Apply Bubble Sort:\n";
    for(int i = 0; i<size; i++)
    {
        cout<<arr[i]<<"  ";
    }

    int swapped = 0;
    // Swapping
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped++;
            }
        }
    }

    //Print sorted Array
    cout<<"\nAfter apply Bubble Sort\n";
    for(int j=0; j<size; j++)
    {
        cout<<arr[j]<<"  ";
    }
    cout<<endl;
    cout<<"Swapped: "<<swapped<<" times";
}

int main()
{
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    cout<<"Enter "<<size<<" element: ";
    int arr[size];
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    BubbleSort(arr,size);
}