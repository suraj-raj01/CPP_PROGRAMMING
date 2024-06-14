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
}