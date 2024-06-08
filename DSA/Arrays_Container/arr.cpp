#include<iostream>
using namespace std;
#include<array>
int main()
{
    array<float,3>a = {1.2,2.0,3.2};
    array<float,3>b = {2.3,5.1,3.4};
    cout<<"Size: "<<a.size()<<endl;
    for(int i=0; i<a.size(); i++)
    {
        cout<<a[i]<<" ";
        // cout<<a.at(i);
    }
    cout<<"\n";

    // range
    for(int j:a)
    {
        cout<<j<<" ";
    }
    cout<<"\n";

    // auto : auto detect data type
    for(auto k:a)
    {
        cout<<k<<" ";
    }
    cout<<"\n";
    // front : it return first value
    cout<<"First value: "<<a.front()<<endl;
    // back : it return last value
    cout<<"Last value: "<<a.back()<<endl;

    a.swap(b);
    cout<<"after swaping: \n";
    cout<<"data of a\n";
    for(auto x:a)
    {
        cout<<x<<" ";
    }
    cout<<"\n";
    cout<<"data of b\n";
    for(auto y:b)
    {
        cout<<y<<" ";
    }

    cout<<"\n";
    cout<<"after fill\n";
    a.fill(0);
    for(auto z:a)
    {
        cout<<z<<" ";
    }
}