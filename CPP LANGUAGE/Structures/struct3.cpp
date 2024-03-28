/*
Named Structures:-
To create a named structure, put the name of the structure right after the struct keyword:
*/

#include<iostream>
using namespace std;

struct students{
    int roll;
    string course;
    string name;
};

int main()
{
    students s1;
    s1.roll = 66;
    s1.course = "B.E. (CSE)";
    s1.name = "SURAJ KUMAR";

    students s2;
    s2.roll = 48;
    s2.course = "B.E. (CSE)";
    s2.name = "RAJAN KUMAR";

    cout<<"s1 roll no. : "<<s1.roll<<endl;
    cout<<"s1 course name: "<<s1.course<<endl;
    cout<<"s1 student name: "<<s1.name<<endl;

    cout<<"--------------------------------\n";

    cout<<"s2 roll no. : "<<s2.roll<<endl;
    cout<<"s2 course name: "<<s2.course<<endl;
    cout<<"s2 student name: "<<s2.name<<endl;
}
