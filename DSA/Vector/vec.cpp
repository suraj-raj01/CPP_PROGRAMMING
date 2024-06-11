#include<iostream>
using namespace std;
#include<vector>
int main()
{
    vector<int>a = {1,5,4,2,3};
    cout<<a.size()<<endl;
    cout<<a.capacity()<<endl;
    for(auto k:a){
        cout<<k<<" ";
    }
}