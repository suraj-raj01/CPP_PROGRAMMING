// WAF to reverse an array without using any other array.


// using Two-Pointer variable

#include<iostream>
using namespace std;

void reverseArray(int arr[],int size)
{
    int start=0;
    int end=size-1;
    for(int i=0; i<size; i++){
        if(start<=end){
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
    }
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8};
    int size = sizeof(arr)/sizeof(int);
    cout<<"Original Array : ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\nReverse Array : ";
    reverseArray(arr,size);
}

/*
Original Array : 1 2 3 4 5 6 7 8 
Reverse Array : 8 7 6 5 4 3 2 1 
*/

/*
#include<iostream>
using namespace std;

void reverseArray(char arr[],int size)
{
    for(int i=size-1; i>=0; i--){
        cout<<arr[i]<<"  ";
    }
}

int main()
{
    char arr[] = {'a','b','c','d','e'};
    int size = sizeof(arr)/sizeof(char);
    reverseArray(arr,size);
}
*/
// e  d  c  b  a