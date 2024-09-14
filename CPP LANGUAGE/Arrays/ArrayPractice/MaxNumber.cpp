/*
Find the Biggest Positive Number:
Task: Given an integer array, write a program to find the Biggest positive number in the array.
Sample Input: [12, -5, 0, 8, 3]
Sample Output: Biggest positive number = 12

*/

#include<iostream>
using namespace std;

class MaxNumber{
    public:
    int printMaxNumber(int arr[],int size){
        int max = INT32_MIN;
        for(int i=0; i<size; i++){
            if(max<arr[i]){
                max = arr[i];
            }
        }
        return max;
    }
};

int main(){
    int arr[] = {12, -5, 0, 8, 3};
    int size = sizeof(arr)/sizeof(int);
    MaxNumber maxNumber = MaxNumber();
    cout<<"Max Element : ";
    cout<<maxNumber.printMaxNumber(arr,size);
}