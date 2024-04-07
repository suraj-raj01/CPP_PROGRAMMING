// ForEach Loop Examples

#include<iostream>
using namespace std;
int main()
{
    int arr[5] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int val : arr)
    {
        cout<<val<<"\t";
    }
    cout<<endl;
    cout<<"Size of Array: "<<size;
}