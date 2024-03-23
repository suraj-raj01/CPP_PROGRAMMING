// Pass array as a parameters.

#include<iostream>
using namespace std;

void passArr(int arr[5])
{
   for(int i=0; i<5; i++)
   {
    cout<<arr[i]<<"  ";
   }
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    passArr(arr);
    return 0;
}