#include<iostream>
using namespace std;
#include<tuple>
#include<vector>
int main(){
    vector<tuple<string,string,string,string,float>>a;
    int record;
    cout<<"Enter the number of record: ";
    cin>>record;
    string enrollment,name,course,branch;
    float fees;
    for(int i=0; i<record; i++){
        cout<<"Enter Enrollment Number : ";
        cin>>enrollment;
        cout<<"Enter the Student Name : ";
        cin>>name;
        cout<<"Enter the Course Name : ";
        cin>>course;
        cout<<"Enter the Branch Name : ";
        cin>>branch;
        cout<<"Enter the fees : ";
        cin>>fees;
        a.push_back({enrollment,name,course,branch,fees});
    }
    cout<<"=======================================================\n";
    cout<<"EnrollmentNo.\tStudent Name\tCourse\tBranch\tFees\n";
    cout<<"=======================================================\n";
    for(int i=0; i<record; i++){
        cout<<get<0>(a[i])<<"\t";
        cout<<get<1>(a[i])<<"\t";
        cout<<get<2>(a[i])<<"\t";
        cout<<get<3>(a[i])<<"\t";
        cout<<get<4>(a[i])<<"\t\n";
    }
    cout<<"=======================================================\n";
}