// Reference Variable.

/*
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
*/

// Pointer variable.

#include<iostream>
using namespace std;
int main()
{
    /*
    int i=10;
    cout<<i<<","<<&i<<","<<sizeof(i)<<endl;
    char *p;
    cout<<p<<","<<&p<<","<<sizeof(p)<<endl;
    */
    int i=90;
    int *p=&i;
    cout<<"address of i= "<<&i<<endl;
    cout<<"address of p = "<<p<<endl;
    cout<<"value at i = "<<*p<<endl;
}
