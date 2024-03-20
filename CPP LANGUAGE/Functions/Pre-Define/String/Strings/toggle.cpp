// WAP to print toggle of a string.

#include<iostream>
using namespace std;
#include<cstring>
int main()
{
    char arr[10];
    cout<<"Enter your name: ";
    cin>>arr;
    int len = strlen(arr);
    for(int i=0; i<len; ++i)
    {
        if(arr[i]>=65 && arr[i]<=90)
        {
            arr[i] = arr[i]+32;
        }
        else if(arr[i]>=97 && arr[i]<=122)
        {
            arr[i] = arr[i]-32;
        }
    }
    cout<<arr;
}


/*

OUTPUT:
Enter your name: sUrAj
SuRaJ

*/