/*
Binary Operator Overloading :-

*/
// Gemometric questions

#include<iostream>
using namespace std;

class Main
{
    int x,y;
    public:
    Main(int x=0, int y=0):x{x},y{y}  // Initializer List
    {
        // this->x = x;
        // this->y = y;
    }
    Main operator +(Main &obj)
    {
        Main g;
        g.x = x+obj.x;
        g.y = y+obj.y;
        return g;
    }
    void show()
    {
        cout<<"x : "<<x<<endl;
        cout<<"y : "<<y<<endl;
    }
};

int main()
{
   Main g1(20,25);
   Main g2(10,15);
   Main g3;
   g3 = g1+g2;
   g3.show();
}