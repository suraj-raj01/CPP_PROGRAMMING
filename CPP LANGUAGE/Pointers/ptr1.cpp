// Reference Variable.


#include<iostream>
using namespace std;
int main()
{
    int i=10;
    cout<<"Address of i = "<<&i<<endl;
    cout<<"Value at i = "<<i<<endl;
    int &j=i;
    cout<<"Address of j = "<<&j<<endl;
    cout<<"Value at j = "<<j<<endl;
    j++;
    cout<<"Value at i = "<<i<<endl;
    int k=i;
    cout<<"Address of k = "<<&k<<endl;
    cout<<"Value at k = "<<k<<endl;
}

// Pointer variable.

