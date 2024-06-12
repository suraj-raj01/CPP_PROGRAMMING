#include<iostream>
using namespace std;
#include<vector>
int main()
{
    pair<int,string>a{101,"Cybrom"};
    cout<<a.first<<endl;
    cout<<a.second<<endl;
    cout<<"==========\n";
    pair<string,int>b{"SURAJ",20};
    cout<<b.first<<endl;
    cout<<b.second<<endl;
}