/*
19. Write a  program to input basic salary of an employee and calculate its Gross salary 
according to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95%
*/

#include<iostream>
using namespace std;
int main()
{
    float salary,hra,da;
    cout<<"Enter the Basic Salary: ";
    cin>>salary;
    if(salary<=10000)
    {
        hra = (salary*0.2);
        da = (salary*0.8);
        cout<<"HRA : "<<hra<<endl;
        cout<<"DA : "<<da<<endl;
        cout<<"Gross Salary: "<<salary+hra+da;
    }
    if(salary<=20000 && salary>10000)
    {
        hra = (salary*0.25);
        da = (salary*0.90);
        cout<<"HRA : "<<hra<<endl;
        cout<<"DA : "<<da<<endl;
        cout<<"Gross Salary: "<<salary+hra+da;
    }
    if(salary>20000)
    {
        hra = (salary*0.30);
        da = (salary*0.95);
        cout<<"HRA : "<<hra<<endl;
        cout<<"DA : "<<da<<endl;
        cout<<"Gross Salary: "<<salary+hra+da;
    }
}

/*
Enter the Basic Salary: 19865
HRA : 4966.25
DA : 17878.5
Gross Salary: 42709.8

OR,

Enter the Basic Salary: 25000
HRA : 7500
DA : 23750
Gross Salary: 56250
*/