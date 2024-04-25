/*
Composite Class:- A class which is having an object of previous class is 
considered as a composite class.
*/

/*
#include<iostream>
using namespace std;
class faculty{
    public: int id=101;
    public: void code()
    {
        cout<<"Faculty have code\n";
    }
};
class Student{
    // Composite Class
    faculty f;
    public: 
    void show()
    {
        cout<<"Student id: "<<f.id;
    }
};
int main()
{
   faculty f;
   Student s;
   f.code();
   s.show();
}
*/

#include<iostream>
using namespace std;

class Faculty{
    public:int id = 101;
    public:void display()
    {
        cout<<"Faculty have code!!\n";
    }
};
class Student{
    Faculty f;
    public:void show()
    {
       cout<<"Student have Id\n";
       cout<<"id: "<<f.id;
    }
};

int main()
{
    Faculty f;
    Student s;
    f.display();
    s.show();
}

