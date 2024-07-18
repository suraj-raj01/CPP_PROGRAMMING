// WAP to find Missing Number.
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main()
{
    vector<int>a{5,2,3,4,0};
    int size = a.size();
    int sum = size*(size+1)/2;
    int s = 0;
    for(int i=0; i<size; i++)
    {
        s+=a[i];
    }
    cout<<sum-s;
}