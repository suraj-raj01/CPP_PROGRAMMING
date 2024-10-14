// WAP to impliment bubble sort using STL array.
#include<iostream>
using namespace std;
#include<array>

void sort(array<int,8>& arr){
    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<arr.size()-i-1; j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int val:arr){
        cout<<val<<" ";
    }
}

int main(){
    array<int,8>arr{1,8,6,5,2,9,3,7};
    sort(arr);
}
// 9 8 7 6 5 3 2 1 