
#include<iostream>
using namespace std;

class{
    int x,y;
    public:
    void setData(int a,int b)
    {
        this -> x = a;
        this -> y = b;
    }
    void getData()
    {
        cout<<"sum is: "<<this -> x+y;
    }
}obj1,obj2;

int main()
{
    obj1.setData(20,30);
    obj1.getData();
    cout<<"\n";
    obj2.setData(50,60);
    obj2.getData();
}