/*
Q.8 Delete the specific position from a vector.
Input: arr = [9,3,2,1,5,23,10,4],position=3
Output: [9,3,2,5,23,10,4]

*/

#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main(){
    vector<int>a{9,3,2,1,5,23,10,4};
    int n;
    cout<<"Enter the target elements: ";
    cin>>n;
    for(int i=0; i<a.size(); i++)
    {
        if(n==i)
        {
            continue;
        }
        cout<<a[i]<<" ";
    }
    a.resize(7);
    cout<<"\n"<<a.size();
}