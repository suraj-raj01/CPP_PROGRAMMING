/*
WAP to sum of two values by using target values.
Target value: 6
vector<int>{2,1,4,9,3}
index: 0,2
value: 2,4
*/

#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main()
{
    vector<int>a = {2,1,4,9,3};
    int target;
    cout<<"Enter the target number: ";
    cin>>target;
    for(int i=0; i<a.size(); i++)
    {
        for(int j=i+1; j<a.size(); i++)
        {
            if(a[i]+a[j]==target)
            {
                cout<<"Values: ";
                cout<<a[i]<<"  "<<a[j];
                cout<<"\nIndex: ";
                cout<<j<<" "<<i;
            }
        }
    }
}