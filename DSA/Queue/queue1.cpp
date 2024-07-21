/*
Queue using STL(Standard Tamplate Library) in C++.
*/
#include<iostream>
using namespace std;
#include<queue>
int main()
{
    queue<string>NAME;
    cout<<"is Empty: "<<NAME.empty()<<"\n";
    NAME.push("SURAJ KUMAR");
    NAME.push("RAJAN KUMAR");
    NAME.push("HARIOM KUMAR");
    NAME.push("RAHUL KUMAR");
    cout<<"Size : "<<NAME.size()<<"\n";
    cout<<"is Empty: "<<NAME.empty()<<"\n";
    cout<<"After delete an element: \n";
    NAME.pop(); // remove -> SURAJ KUMAR
    cout<<"Size : "<<NAME.size()<<"\n";
    cout<<"----------------------------\n";
    cout<<"front element : "<<NAME.front()<<"\n";
    cout<<"back element : "<<NAME.back()<<"\n";
    cout<<"----------------------------\n";
    while(!NAME.empty())
    {
        cout<<"Student Name : "<<NAME.front()<<"\n";
        NAME.pop();
    }
}