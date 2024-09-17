// Combine two array into one.

#include<iostream>
using namespace std;

void combineArr(int arr1[], int arr2[],int s1,int s2)
{

    int arr3[s1+s2];
    for(int i=0; i<s1; i++)
    {
        arr3[i] = arr1[i];
    }
    for(int i=0; i<s2; i++)
    {
        arr3[s1+i] = arr2[i];
    }
    for(int val:arr3)
    {
        cout<<val<<" ";
    }
}

int main()
{
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {6,7,8,9};
    int s1 = sizeof(arr1)/sizeof(int);
    int s2 = sizeof(arr2)/sizeof(int);
    // first array
    cout<<"First Array : ";
    for(int val1:arr1)
    {
        cout<<val1<<" ";
    }
    // second array
    cout<<"\nSecond Array : ";
    for(int val2:arr2)
    {
        cout<<val2<<" ";
    }
    cout<<"\nCombined Array : ";
    combineArr(arr1,arr2,s1,s2);
}

/*
First Array : 1 2 3 4 5 
Second Array : 6 7 8 9 
Combined Array : 1 2 3 4 5 6 7 8 9 
*/