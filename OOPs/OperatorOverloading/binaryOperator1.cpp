#include<iostream>
using namespace std;

class Main{
    int x,y;
    public:Main(int x=0,int y=0):x{x},y{y} // initializer List
    {
        // this->x = x;
        // this->y = y;
    }
    Main operator +(Main &obj)
    {
        Main g1;
        g1.x = x+obj.x;
        g1.y = y+obj.y;
        return g1;
    }
    void show()
    {
        cout<<"x : "<<x<<endl;
        cout<<"y : "<<y<<endl;
    }
};

int main()
{
   Main g1(10,20);
   Main g2(15,25);
   Main g3;
   g3 = g1+g2;
   g3.show();
}