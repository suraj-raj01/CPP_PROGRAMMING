#include<iostream>
using namespace std;
#include<vector>
int main()
{
    vector<int> a = {1,4,5,7,6,8};
    for(auto k:a)
    {
        cout<<k<<" ";
    }
    cout<<"\nAfter Resize (min): \n";
    a.resize(3);
    for(auto k:a)
    {
        cout<<k<<" ";
    }

    cout<<"\nAfter Resize (max): \n";
    a.resize(5);
    for(auto k:a)
    {
        cout<<k<<" ";
    }
}