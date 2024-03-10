// Simple Calculator Program.

#include<iostream>
using namespace std;

//addition
void sum(int a, int b)
{
    cout<<"Addition is: "<<a+b;
}

//subtraction
void sub(int a, int b)
{
    cout<<"Subtraction is: "<<a-b;
}

//multiplication
void mult(int a,int b)
{
    cout<<"Multiplication is: "<<a*b;
}

//division
void division(int a, int b)
{
    cout<<"Division is: "<<a/b;
}

//modulus
void mod(int a, int b)
{
    cout<<"Modulus is: "<<a%b;
}

int main()
{
    int opr;
    cout<<"Enter the operator: \n";
    cout<<"Choose an Option to Perform action: \n";
    cout<<"======================= \n";
    cout<<" 1) Addition \n 2) Subtraction \n 3) Multiplication \n 4) Division \n 5) Modulus \n";
    cout<<"======================= \n";
    cin>>opr;

    int a,b;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    switch(opr)
    {
    case 1:
        sum(a,b);
        break;

    case 2:
        sub(a,b);
        break;

    case 3:
        mult(a,b);
        break;

    case 4:
        division(a,b);
        break;

    case 5:
        mod(a,b);
        break;

    default:
        cout<<"Please enter valid Operator!!";
        break;
    }


}
