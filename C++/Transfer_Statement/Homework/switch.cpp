#include <iostream>
using namespace std;
int main()
{
    int a, b, opr;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    cout << "Enter the operator\n=====================\n1. swapping\n2. largest number\n3. area of rectangle\n=====================\n";
    cin >> opr;
    switch (opr)
    {
    case 1:
    {
        int temp = a;
        a = b;
        b = temp;
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
        break;
    }

    case 2:
    {
        if(a>b){
            cout<<a<<" is largest";
        }
        else{
            cout<<b<<" is largest";
        }
        break;
    }

    case 3:
    {
        int rectangle = a*b;
        cout<<"area of rectangle: "<<rectangle;
        break;
    }
                
    default:
    {
        cout << "Invalid Operator!";
        break;
    }
    }
}