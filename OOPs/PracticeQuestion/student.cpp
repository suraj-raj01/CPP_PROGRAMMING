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
    float total;
    int MaxMarks;

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
        total = 0;
        MaxMarks = 0;
        for(int i=0; i<5; i++)
        {
            total += marks[i];
            if(MaxMarks<marks[i])
            {
                MaxMarks = marks[i];
            }
        }
    }
    void display()
    {
        cout << "Student Name is: " << sname << endl;
        cout<<"Marks is similarly: \n";
        for(int i=0; i<5; i++)
        {
            cout<<marks[i]<<"\t";
        }
        cout << "\nTotal Marks obtained: " << total << endl;
        cout<<"Maximum: "<<MaxMarks<<endl;
        cout<<"Percentage: "<<float(total/5)<<endl;
    }
};

int main()
{
    string s;
    int arr[5];
    cout<<"Enter the student name: ";
    cin>>s;
    cout<<"Enter 5 marks \n";
    for(int i=0; i<5; i++)
    {
        cin>>arr[i];
    }
    STUDENT std;
    std.assign(s,arr);
    std.compute();
    std.display();
}