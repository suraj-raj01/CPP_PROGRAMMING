// WAP using Copy Constructor;

#include<iostream>
using namespace std;

class COPY{
    int a,b;
    public:
    COPY(int x, int y)
    {
        a = x;
        b = y;
    }
    void Show()
    {
        cout<<"a: "<<a<<endl;
        cout<<"b: "<<b<<endl;
    }
};

int main()
{
   COPY c(10,20);
   COPY c1(c);
   c.Show();
   c1.Show();
}