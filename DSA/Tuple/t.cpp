#include<iostream>
using namespace std;
#include<tuple>
#include<vector>
int main()
{
    tuple<string,string,string,int>t{"RNTU,BHOPAL","AU210488","SURAJ KUMAR",66};
    cout<<"College : "<<get<0>(t)<<"\n";
    cout<<"Enrollment No. : "<<get<1>(t)<<"\n";
    cout<<"Name : "<<get<2>(t)<<"\n";
    cout<<"Roll no. : "<<get<3>(t)<<"\n";

    vector<tuple<int,string,int>>a;
    int n;
    int id,roll;
    string name;
    cout<<"Enter the no. of records: ";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cout<<"Enter the id: ";
        cin>>id;
        cout<<"Enter the name: ";
        cin>>name;
        cout<<"Enter the roll no: ";
        cin>>roll;
        a.push_back({id,name,roll});
    }
    cout<<"\n====================\n";
    for(int i=0; i<n; i++)
    {
        cout<<get<0>(a[i])<<"\t";
        cout<<get<1>(a[i])<<"\t  ";
        cout<<get<2>(a[i])<<"\n";
    }
     cout<<"====================\n";

     vector<tuple<string,string,int>>arr;
     int record;
     string firstName;
     string lastName;
     int age;
     cout<<"Enter the number of records: ";
     cin>>record;
     for(int i=0; i<record; i++){
        cout<<"Enter the first name: ";
        cin>>firstName;
        cout<<"Enter the second name: ";
        cin>>lastName;
        cout<<"Enter the age: ";
        cin>>age;
        arr.push_back({firstName,lastName,age});
     }
     cout<<"firstName\tLastName\tage\n";
    for(int i=0; i<record; i++){
        cout<<get<0>(arr[i])<<"\t\t";
        cout<<get<1>(arr[i])<<"\t\t";
        cout<<get<2>(arr[i])<<"\t\n";
    }
}