#include<iostream>
using namespace std;

class Main{
    public:
    Main(int a, int b)
    {
        cout<<"Product is : "<<a*b<<endl;
    }
    void show()
    {
        cout<<"This is the parameterized Constructor\n";
    }
};

int main()
{
   int a,b;
   cout<<"Enter the first number: ";
   cin>>a; 
   cout<<"Enter the second number ";
   cin>>b;
   Main obj(a,b);
   obj.show();
}