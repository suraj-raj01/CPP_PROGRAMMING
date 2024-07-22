#include<iostream>
using namespace std;
#include<map>

int main()
{
    map<int,string>mp;
    mp[1] = "SURAJ";
    mp[2] = "RAJAN";
    mp[3] = "RAHUL";
    mp.insert({4,"HARIOM"});
    // add dublicate data
    mp[3] = "KASHI";
    map<int,string>::iterator it = mp.begin();
    while(it!=mp.end())
    {
        cout<<"key ["<<it->first<<"]  value ["<<it->second<<"]"<<endl;
        it++;
    }
    cout<<"Map Size : "<<mp.size()<<endl;
    // insert data using insert keyword
    map<string,int>data;
    data.insert({"SURAJ",1});
    data.insert({"RAJAN",2});
    data.insert({"VIVEK",3});
    data.insert({"RAHUL",4});
    for(auto i=data.begin(); i!=data.end(); i++)
    {
        cout<<"Name : ["<<i->first<<"]  Id : ["<<i->second<<"]\n";
    }
    auto a = data.find("RAHUL");
    cout<<a->first<<" "<<a->second;
    cout<<"\nAfter clearing data: "<<endl;
    data.clear();
    for(auto i=data.begin(); i!=data.end(); i++)
    {
        cout<<"Name : ["<<i->first<<"]  Id : ["<<i->second<<"]\n";
    }
}