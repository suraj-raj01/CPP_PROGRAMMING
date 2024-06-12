#include<iostream>
using namespace std;
#include<vector>
int main()
{
    cout<<"Vector - 1\n";
    vector<int>a = {1,5,4,2,3};
    cout<<"Size : "<<a.size()<<endl;
    // push_back() : insert data in last.
    a.push_back(6);
    a.push_back(7);
    cout<<"Capacity : "<<a.capacity()<<endl;
    for(auto k:a){
        cout<<k<<" ";
    }

    cout<<"\n";
    cout<<"\nVector - 2"<<endl;
    vector<int>b = {5,7,8,9};
    b.push_back(100);
    // Insert Data at a prticular position.
    b.insert(b.begin()+3,200);
    for(auto k:b)
    {
        cout<<k<<" ";
    }
    cout<<"\n";
    b.insert(b.begin()+3,3,400);
    for(auto l:b)
    {
        cout<<l<<" ";
    }

    // delete data
    cout<<"\nDelete Data\n";
    b.pop_back();
    for(auto m:b)
    {
        cout<<m<<" ";
    }

    // erase data
    cout<<"\nErase Data\n";
    // erase data of 2nd index.
    b.erase(b.begin()+2);
    for(auto m:b)
    {
        cout<<m<<" ";
    }
    // erase data using index
    cout<<"\nErase Data\n";
    b.erase(b.begin()+2,b.begin()+4);
    for(auto m:b)
    {
        cout<<m<<" ";
    }
}