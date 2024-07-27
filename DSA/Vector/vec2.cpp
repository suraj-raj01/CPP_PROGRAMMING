#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main()
{
    vector<int>a = {8,4,61,5,4,2,1,3,5,4,2,4};
    cout<<count(a.begin(),a.end(),2);
    cout<<"\nMin element index:";
    cout<<min_element(a.begin(),a.end())-a.begin();
    cout<<"\nMax element index:";
    cout<<max_element(a.begin(),a.end())-a.begin();
    cout<<"\n";
    cout<<"Min element: "<<*min_element(a.begin(),a.end())<<"\n";
    cout<<"Max element: "<<*max_element(a.begin(),a.end())<<"\n";
    
}