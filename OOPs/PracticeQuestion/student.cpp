/*
WAP to implement a class STUDENT having following members
          Data Members
Member                   description
sname                    name of the student
marks array              marks of the array
total                    total marks obtained
Tmarks                   Total maximum marks


*/

#include <iostream>
using namespace std;

class STUDENT
{
    string sname;
    int marks[5];
    int total=0;
    int TotalMarks;

public:
    void assign(string n, int m[])
    {
        sname = n;
        for(int i=0; i<5; i++)
        {
            marks[i] = m[i];
        }
    }
    void compute()
    {
        for(int i=0; i<5; i++)
        {
            total += marks[i];
        }
        TotalMarks = total;
    }
    void display()
    {
        cout << "Student Name is: " << sname << endl;
        cout<<"Marks is similarly: \n";
        for(int i=0; i<5; i++)
        {
            cout<<marks[i]<<"\t";
        }
        cout << "\nTotal " << TotalMarks << endl;
    }
};

int main()
{
    string s;
    int arr[5];
    cout<<"Enter the student name: ";
    cin>>s;
    for(int i=0; i<5; i++)
    {
        cout<<"Enter marks ";
        cin>>arr[i];
    }
    STUDENT std;
    std.assign(s,arr);
    std.compute();
    std.display();
}