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

    // random() -> it is used to generate random number.
    for(int i=1; i<=5; ++i)
    {
    cout<<rand()%100<<"  ";
    }
}