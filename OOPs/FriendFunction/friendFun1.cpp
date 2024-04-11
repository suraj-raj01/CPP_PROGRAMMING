#include<iostream>
using namespace std;

class Student{
    string name,course,branch;
    int roll_no,inrollment_no;
    public:
    void show()
    {
        cout<<"Show Student Data\n";
    }
    friend void std_data(Student &obj);
};

void std_data(Student &obj)
{
   obj.show();
   obj.name = "SURAJ KUMAR";
   obj.course = "B.Tech";
   obj.branch = "CSE";
   obj.roll_no = 66;
   obj.inrollment_no = 488;

   cout<<"Student Name: "<<obj.name<<endl;
   cout<<"Student Course: "<<obj.course<<endl;
   cout<<"Student Branch: "<<obj.branch<<endl;
   cout<<"Student Roll_no: "<<obj.roll_no<<endl;
   cout<<"Student Inrollment_No: "<<obj.inrollment_no<<endl;
}

int main()
{
    Student obj;
    std_data(obj);
}