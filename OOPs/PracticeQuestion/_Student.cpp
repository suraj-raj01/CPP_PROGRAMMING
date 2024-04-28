#include<iostream>
using namespace std;

class STUDENT
{
    string studentName[100];
    int marks[5];
    int count = 0;
    int total = 0;
    int maxMarks = 0;
    public:
    void assign()
    {
        for(int i=0; i<100; i++)
        {
            
            cout<<"Enter the student Name: ";
            cin>>studentName[i];
            cout<<"Enter the marks of 5 subject: ";
            for(int j=0; j<5; j++)
            {
                cin>>marks[j];
            }
            int n;
            cout<<"Enter 1 for add\n0 for show\n";
            cin>>n;
            count++;
            if(n==1)
            {
                continue;
            }
            else{
                break;
            }
        }
    }
    void show()
    {
        cout<<"name\t\tmarks\t\ttotal\tMaxMarks"<<endl;
        for(int i=0; i<count; i++)
        {
            total=0;
            maxMarks = 0;
            cout<<studentName[i]<<"\t";
            for(int j=0; j<5; j++)
            {
                cout<<marks[j]<<" ";
                total+=marks[j];
                if(maxMarks >marks[j])
                {
                    maxMarks = marks[j];
                }
            }
            cout<<"\t"<<total;
            cout<<"\t"<<maxMarks<<endl;
        }
    }
};


int main()
{
    STUDENT s;
    s.assign();
    s.show();
}