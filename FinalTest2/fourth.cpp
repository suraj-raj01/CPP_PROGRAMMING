// WAP to add Two Objects

#include<iostream>
using namespace std;

class OBJ{
    int x,y;
    public:
    OBJ(int x=0, int y=0):x{x},y{y}
    {

    }
    OBJ operator +(OBJ &obj)
    {
        OBJ g1;
        g1.x = x + obj.x;
        g1.y = y + obj.y;
        return g1;
    }
    void show()
    {
        cout<<"x: "<<x<<endl;
        cout<<"y: "<<y<<endl;
    }
};

int main()
{
   OBJ obj(10,20);
   OBJ obj1(15,20);
   OBJ obj2;
   obj2 = obj+obj1;
   obj2.show();
}