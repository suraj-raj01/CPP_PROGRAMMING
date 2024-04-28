// #include<iostream>
// using namespace std;

// class Main{
//     int x,y;
//     public:Main(int x=0,int y=0):x{x},y{y} // initializer List
//     {
//         // this->x = x;
//         // this->y = y;
//     }
//     Main operator +(Main &obj)
//     {
//         Main g1;
//         g1.x = x+obj.x;
//         g1.y = y+obj.y;
//         return g1;
//     }
//     void show()
//     {
//         cout<<"x : "<<x<<endl;
//         cout<<"y : "<<y<<endl;
//     }
// };

// int main()
// {
//    Main g1(10,20);
//    Main g2(15,25);
//    Main g3;
//    g3 = g1+g2;
//    g3.show();
// }

// <-------------------OPERATOR MainING-------------------->

#include<iostream>
using namespace std;

class Main
{
int x;
int y;
public:
Main(int x=0, int y=0) : x{x},y{y}
{}
Main operator +(Main &obj)
{
Main g;
g.x = x + obj.x;
g.y = y + obj.y;
return g;
}
void show()
{
cout<<"x: "<<x<<endl;
cout<<"y: "<<y<<endl;
}
};

int main()
{
Main obj1(10,20);
Main obj2(15,10);
Main obj3;
obj3 = obj1+obj2;
obj3.show();
}