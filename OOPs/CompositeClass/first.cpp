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

#include <iostream>
using namespace std;

class faculty
{
public:
    int id = 10;

public:
    void show()
    {
        cout << "faculty have code\n";
    }
};
class student
{
    faculty f;

public:
    void dis()
    {
        cout << "Student have id: " << f.id;
    }
};

int main()
{
    faculty f;
    student s;
    f.show();
    s.dis();
}