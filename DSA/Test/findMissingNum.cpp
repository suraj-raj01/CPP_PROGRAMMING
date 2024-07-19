// Find Missing Number.
#include<iostream>
using namespace std;
#include<vector>
int main()
{
    vector<int>num{0,3,5,4,1};
    int l = 0;
    int size = num.size();
    int sum = 0;
    for(int i=0; i<size; i++)
    {
        sum = size*(size+1)/2;
    }
    int s=0;
    for(int i=0; i<num.size(); i++)
    {
        s+=num[i];
    }
    cout<<sum-s;
}