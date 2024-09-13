/*
Find the Smallest Positive Number:
Task: Given an integer array, write a program to find the smallest positive number in the array.
Sample Input: [12, -5, 0, 8, 3]
Sample Output: Smallest positive number = 3
*/

#include<iostream>
using namespace std;

int findSmallest(int arr[],int size){
    int max = INT32_MAX;
    for(int i=0; i<size; i++){
        if(max>arr[i]){
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int arr[] = {1,5,8,-5,8,4,-45,56,77};
    int size = sizeof(arr)/sizeof(int);
    cout<<findSmallest(arr,size);
}