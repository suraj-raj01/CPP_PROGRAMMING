// WAF to print InterSection of Two array;

#include<iostream>
using namespace std;

void interSection(int arr1[], int arr2[], int size1, int size2){
    for(int i=0; i<size1; i++){
        for(int j=0; j<size2; j++){
            if(arr1[i]==arr2[j]){
                cout<<arr1[i]<<" ";
            }
        }
    }
}

int main()
{
    int arr1[] = {1,5,9,7,3,8};
    int arr2[] = {3,5,4,2,6,8};
    int size1 = sizeof(arr1)/sizeof(int);
    int size2 = sizeof(arr2)/sizeof(int);
    if(size1<=size2){
    interSection(arr1,arr2,size1,size2);
    }else{
        cout<<"First array sould be Less than second array!!";
    }
}

// 5 3 8 