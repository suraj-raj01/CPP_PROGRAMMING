/*
Q.3 Write a program to maintain the records of person with details (Name and Age) and 
find the eldest among them. The program must use parametrized constructor to initialize 
the value.
*/

#include<iostream>
using namespace std;

class Person
{
    string name[5];
    int age[5];
    int eldest = 0;
    public:
    void initialize(string s[], int a[])
    {
        for(int i=0; i<5; i++)
        {
            name[i] = s[i];
        }
        for(int i=0; i<5; i++)
        {
            age[i] = a[i];
        }
    }
    void show()
    {
        cout<<"NAME \t\tAGE\n";
        for(int i=0; i<5; i++)
        {
            cout<<name[i]<<"\t\t"<<age[i]<<endl;
        }
    }
    void older()
    {
        cout<<"\n";
        cout<<"Eldest: \n";
        for(int i=0; i<5; i++)
        {
            if(eldest < age[i])
            {
                eldest = age[i];
            }
        }
        cout<<"eldest is: "<<eldest<<endl;
    }
};

int main()
{
string name[5];
int age[5];
cout<<"Enter the name: \n";
for(int i=0; i<5; i++)
{
    cin>>name[i];
}
cout<<"Enter the age: ";
for(int i=0; i<5; i++)
{
    cin>>age[i];
}
Person p;
p.initialize(name,age);
p.show();
p.older();
}