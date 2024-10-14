// WAP to print the single element from an array.
#include<iostream>
using namespace std;
#include<array>

int singleElement(array<int,7>arr){
    int ans=0;
    for(int val:arr){
        ans=ans^val;
    }
    return ans;
}

int main(){
    array<int,7>arr{1,2,5,2,3,3,5};
    cout<<"Single element is : ";
    cout<<singleElement(arr);
}

// Single element is : 1