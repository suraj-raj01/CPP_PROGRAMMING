/*
Multiple Parameters:-
Inside the function, you can add as many parameters as you want:
*/

#include<iostream>
using namespace std;

void multiPara(int age, string name)
{
    cout<<"Age : "<<age<<" and --> Name is : "<<name<<endl;
}

int main()
{
    int age = 20;
    string name = "SURAJ KUMAR";
    multiPara(age,name);
    multiPara(20,"RAJAN KUMAR");
    multiPara(20,"HARIOM KUMAR");
}