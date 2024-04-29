/*
Class College

DATA MEMBERS
student name
roll no
course name
fees

MEMBER FUNCTIONS
add()
show()
countStudent()
delete()

*/

#include <iostream>
using namespace std;

class COLLEGE
{
    string name[100];
    int rollno[100];
    string course[100];
    int fees[100];
    int total = 0;
    int count = 0;

public:
    void add()
    {
        for (int i = 0; i < 100; i++)
        {
            cout << "Enter the student name: ";
            cin >> name[i];
            cout << "Enter the roll no: ";
            cin >> rollno[i];
            cout << "Enter the course name: ";
            cin >> course[i];
            cout << "Enter the fees: ";
            cin >> fees[i];
            int add;
            cout << "\nEnter 1 for add\nEnter 0 for show\n";
            cin >> add;
            count++;
            if (add == 1)
            {
                continue;
            }
            else
            {
                break;
            }
        }
    }
    void show()
    {
        cout << "======================================================\n";
        cout << "Name\t\tRollNo\t\tCourse\t\tFees\n";
        cout << "======================================================\n";
        for (int i = 0; i < count; i++)
        {
            cout << name[i] << "\t" << rollno[i] << "\t\t" << course[i] << "\t\t" << fees[i] << "\n";
            total += fees[i];
        }
        cout << "======================================================\n";
        cout << "\n"
             << "TotalFees: " << total << endl;
    }
    void countStudent()
    {
        cout << "Total number of student: " << count << endl;
    }
    void DELETE()
    {
        total = 0;
        int opr;
        cout << "\n\nEnter 1 for Delete\nEnter 0 for not Delete\n";
        cin >> opr;
        if (opr == 1)
        {

            int iCode;
            cout << "Enter the rollno for delete: ";
            cin >> iCode;
            for (int i = 0; i < count; i++)
            {
                if (rollno[i] == iCode)
                {
                    name[i] = "UnknownName";
                    rollno[i] = 0;
                    course[i] = "Unknown";
                    fees[i] = 0;
                }
            }
        }
        else
        {
            exit;
        }
    }
};

int main()
{
    COLLEGE c;
    c.add();
    c.show();
    c.countStudent();
    c.DELETE();
    c.show();
}