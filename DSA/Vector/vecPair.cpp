#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main()
{
    vector<pair<int,string>>a = {{101,"SURAJ"},{102,"RAJAN"},{103,"SHIVAM"}};
    cout<<"================\n";
    cout<<"ID\tNAME\n";
    cout<<"================\n";
    for(int i=0; i<a.size(); i++)
    {
        cout<<a[i].first<<"\t"<<a[i].second<<"\n";
    }
    cout<<"================\n";

    // Input take from User
    vector<pair<int,string>>b;

    int n,roll;
    string name;
    cout<<"\nEnter how many records: ";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cout<<"Enter the roll no. : ";
        cin>>roll;
        cout<<"Enter name: ";
        cin>>name;
        // b.push_back({roll,name});
        b.push_back(make_pair(roll,name));
    }
    cout<<"\n================\n";
    cout<<"ID\tNAME\n";
    cout<<"================\n";
    for(auto k:b)
    {
        cout<<k.first<<"\t"<<k.second<<"\n";
    }
    cout<<"================\n";
}
