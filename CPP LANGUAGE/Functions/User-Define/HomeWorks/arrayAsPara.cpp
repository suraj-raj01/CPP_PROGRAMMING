// Pass array as a parameters.

/*
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
*/

// WAP to print minimum number from an array, pass array as parameter in functions.

/*
#include<iostream>
using namespace std;

int minmum(int arr[], int len)
{
    int s = arr[0];
    for(int i=0; i<len; i++)
    {
        if(s>arr[i])
        {
            s = arr[i];
        }
    }
    return s;
}

int main()
{
    int n;
    cout<<"Enter the size of an array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the number: ";
    int len = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<len; ++i)
    {
        cin>>arr[i];
    }
    cout<<"Minimum number: "<<minmum(arr,len);
}

*/

// WAP to print maximum number from an array, pass array as parameter in functions.

#include<iostream>
using namespace std;

int maximum(int arr[], int len)
{
    int s = arr[0];
    for(int i=0; i<len; i++)
    {
        if(s<arr[i])
        {
            s = arr[i];
        }
    }
    return s;
}

int main()
{
    int n;
    cout<<"Enter the size of an array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the number: ";
    int len = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<len; ++i)
    {
        cin>>arr[i];
    }
    cout<<"Maximum number: "<<maximum(arr,len);
}