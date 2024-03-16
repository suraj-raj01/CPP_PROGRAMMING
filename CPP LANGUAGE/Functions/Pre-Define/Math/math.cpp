#include<iostream>
using namespace std;
#include<cmath>
int main()
{
    // pow() -> it is used to generate power of any number.
    int b,exp;
    cout<<"Enter the number to find power: \n";
    cout<<"Enter the base number: ";
    cin>>b;
    cout<<"Ener the exponent: ";
    cin>>exp;
    cout<<"Answer is: "<<pow(b,exp)<<endl;  // pow() -> pre-define or inbuilt function.

    // sqrt() -> it is used to generate square root of any number.
    float sq_root;
    cout<<"Enter the number: ";
    cin>>sq_root;
    cout<<"square root of:"<<sq_root<<" : "<<sqrt(sq_root)<<endl;

    // swap() -> it used to swap two value
    int x,y;
    cout<<"Enter first number: ";
    cin>>x;
    cout<<"Enter second number: ";
    cin>>y;
    swap(x,y);
    cout<<"x = "<<x<<endl;
    cout<<"y = "<<y<<endl;

    // random() -> it is used to generate random number.
    for(int i=1; i<=5; ++i)
    {
    cout<<rand()%100<<"  ";
    }
    cout<<endl;
    // min() -> it is used to find minimum value
    int r,s;
    r=20;
    s=22;
    cout<<"min = "<<min(r,s)<<endl;

    // max() -> it is used to find maximum value
    cout<<"max = "<<max(r,s)<<endl;
}