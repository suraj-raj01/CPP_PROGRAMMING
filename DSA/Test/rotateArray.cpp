// Rotate an array.
#include<iostream>
using namespace std;
#include<array>
int main()
{
    array<int,5>a{1,5,7,8,9};
    array<int,5>b;
    int size = a.size();
    int l = 0;
    int step = 2;
    for(int r=0; r<size; r++)
    {
        b[(r+step)%size] = a[r];
    }
    for(auto k:b)
    {
        cout<<k<<" ";
    }
}