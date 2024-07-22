#include<iostream>
using namespace std;
#include<vector>
#include<tuple>
#include<algorithm>
 //lamda function : anonymous function is called lamda function

int show(int a)
{
    return a>3; // return true (1);
}

int main()
{
    cout<<show(4)<<"\n";
    cout<<[](int a) {return a>2;}(3)<<"\n"; 
    cout<<[](int a) {return a+1;}(3)<<"\n"; 

    vector<int>a{1,5,7,8,6,3,2};
    cout<<"Ascending Order : ";
    sort(a.begin(),a.end());
    for(auto k:a)
    {
        cout<<k<<" ";
    }

    cout<<"\nDescending Order : ";
    vector<int>b{1,5,4,7,8,9,6};
    sort(b.begin(),b.end(),[](int a, int b){return a>b;});
    for(auto k:b)
    {
        cout<<k<<" ";
    }

    cout<<"\nAscending Order : ";
    vector<int>c{1,5,4,7,8,9,6};
    sort(c.begin(),c.end(),[](int a, int b){return a<b;});
    for(auto k:c)
    {
        cout<<k<<" ";
    }
}