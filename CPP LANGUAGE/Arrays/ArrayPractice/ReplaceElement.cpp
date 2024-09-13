/*
Replace Elements in an Array:

Task: Write a program to replace all occurrences of a specific integer in an array with another integer.
Sample Input: Array: [4, 5, 6, 4, 7], Replace 4 with 9
Sample Output: [9, 5, 6, 9, 7]
*/

#include<iostream>
using namespace std;

class ReplaceElement{
    public:
    void replaceElement(int arr[],int size,int replace){
        // original array
        cout<<"Original Array : ";
        for(int i=0; i<size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<"\nAfter replacement 4 with 9\n";
        for(int i=0; i<size; i++){
            if(arr[i]==4){
                arr[i] = replace;
            }
            cout<<arr[i]<<" ";
        }
    }
};

int main()
{
    int arr[] = {4, 5, 6, 4, 7};
    int size = sizeof(arr)/sizeof(int);
    // replace 4 with 9
    int replace = 9;
    ReplaceElement rp = ReplaceElement();
    rp.replaceElement(arr,size,replace);
}