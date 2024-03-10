#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;
    int *p = new int[n];
    int a[5] = {1,2,3,4,5};
    for(int i=0; i<n; ++i)
    {
        cin>>p[i];
    }
    cout<<"Stored Value: ";
    for(int i=0; i<n; ++i)
    {
        cout<<p[i]<<"\t";
    }
    delete []p;

    cout<<"\nGarbage Value: ";
    for(int i=0; i<n; ++i)
    {
        cout<<p[i]<<"\t";
    }
    p = a;
    cout<<"\nNew memory of pointer\n";
    for(int i=0; i<5; ++i)
    {
        cout<<p[i]<<"\t";
    }
}
