/*
Access Structure Members:-
To access members of a structure, use the dot syntax (.):
*/

#include<iostream>
using namespace std;

struct college{
    int roll;
    int age;
    string name;
    string course;
}student;

int main()
{
   student.roll = 66;
   student.age = 20;
   student.name = "SURAJ KUMAR";
   student.course = "B.Tech";

   cout<<"Student roll no. : "<<student.roll<<endl;
   cout<<"Student age: "<<student.age<<endl;
   cout<<"Student name: "<<student.name<<endl;
   cout<<"Student Course: "<<student.course;
}