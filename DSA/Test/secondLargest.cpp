// Second Largest Element;
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main()
{
    vector<int>a{1,5,7,8,9,6,3};
    sort(a.begin(),a.end());
    int s = a.size();
    cout<<"Second Largest Element is: ";
    cout<<a[s-2];
    // or
    sort(a.begin(),a.end())
}