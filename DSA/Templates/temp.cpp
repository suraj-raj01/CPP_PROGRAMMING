// Function Based Templates
#include<iostream>
using namespace std;
template <class x>
// x -> placeHolder
x sum(x a, x b)
{
    return a+b;
}
int main()
{
    int a,b;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    cout<<sum(a,b)<<endl;
    double a1,b1;
    cout<<"Enter the value of a: ";
    cin>>a1;
    cout<<"Enter the value of b: ";
    cin>>b1;
    cout<<sum(a1,b1);
}