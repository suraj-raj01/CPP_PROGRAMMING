/*
Creating References:-
A reference variable is a "reference" to an existing variable, and it is created with the 
& operator:
*/

#include<iostream>
using namespace std;
int main()
{
    string food = "fizza";  // food variable
    string &meal = food;  // reference to food

    cout<<food<<endl;
    cout<<meal<<endl;

    int age = 20;  // age variable
    int &year = age;  // reference to age
    
    cout<<"~~~~~~~~~~~~~~~~~"<<endl;
    cout<<age<<endl;
    cout<<year<<endl;
}