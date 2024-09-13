#include<iostream>
using namespace std;

class Calculator{

    public:
    void sum(int a, int b)
    {
        cout<<"sum : "<<a+b<<endl;
    }
    void sub(int a, int b)
    {
        cout<<"subtraction : "<<a-b<<endl;
    }
    void mul(int a, int b)
    {
        cout<<"Product : "<<a*b<<endl;
    }
    void div(int a, int b)
    {
        cout<<"Division : "<<a/b<<endl;
    }
};

class FibonacciSeries{
    public:
    void fibonacciSeries(int a, int b, int n){
        if(n==0){
            return;
        }
        int c = a+b;
        cout<<c<<" ";
        fibonacciSeries(b,c,n-1);
    }
};

int main()
{
    Calculator c;
    int a,b,opr;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    cout<<"Enter the Operator\n1 -> add\n2 -> sub\n3 -> mul\n4 -> div\n";
    cin>>opr;
    switch (opr)
    {
    case 1:
        c.sum(a,b);
        break;
    case 2:
        c.sub(a,b);
        break;
    case 3:
        c.mul(a,b);
        break;
    case 4:
        c.div(a,b);
        break;
    default:
        cout<<"Please Enter Valid Opr!!";
        break;
    }
    // fibonacci series
    int x,y,n;
    x = 0;
    y = 1;
    cout<<"Enter the number of terms : ";
    cin>>n;
    cout<<x<<" "<<y<<" ";
    FibonacciSeries fs = FibonacciSeries();
    fs.fibonacciSeries(x,y,n-2);
}