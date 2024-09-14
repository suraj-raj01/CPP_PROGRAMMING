// WAF to print Unique element from an array.

#include<iostream>
using namespace std;

int returnUniqueElement(int arr[], int size)
{
    int temp=0;
    for(int i=0; i<size; i++){
        int c=0;
        for(int j=0; j<size; j++){
            if(arr[i]==arr[j]){
                c++;
            }
        }
        if(c==1){
            temp = arr[i];
        }
    }
    return temp;
}

int main()
{
    int arr[] = {1,2,6,5,4,2,1,6,8,4,5,2};
    int size = sizeof(arr)/sizeof(int);
    int result = returnUniqueElement(arr,size);
    cout<<"Unique element : "<<result;
}

// Unique element : 8