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
   int x1,y1,x2,y2;
   cout<<"Enter the x1 coordinate: ";
   cin>>x1;
   cout<<"Enter the y1 coordinate: ";
   cin>>y1;
   cout<<"Enter the x2 coordinate: ";
   cin>>x2;
   cout<<"Enter the y2 coordinate: ";
   cin>>y2;
   Main g1(x1,y1);
   Main g2(x2,y2);
   Main g3;
   g3 = g1+g2;
   g3.show();
}

