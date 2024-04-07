/*
Function Overloading:- function overloading is called when multiple function have same name
with different parameter
*/

#include<iostream>
using namespace std;

class Main{
    public:
    void show(string s)
    {
        cout<<s+"Hello!!";
    }
    void show(string s1, string s2)
    {
        cout<<s1+s2+" Guys,";
    }
    void show()
    {
        cout<<" How are you?";
    }
};

int main()
{
     Main obj;
     obj.show("1");
     obj.show("1","2");
     obj.show();
}