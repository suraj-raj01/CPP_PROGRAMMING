/*
Vector : Vectors are the same as dynamic arrays with the ability to resize themselves automatically 
when an element is inserted or deleted, with their storage being handled automatically by the container.

Vector Methos : 
1. size()
2. capacity()
3. push_back()
4. pull_back()
5. front()
6. back()
7. at()
*/

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec;
    // size
    cout<<"Size : "<<vec.size()<<endl;
    // push_back
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    for(int val:vec){
        cout<<val<<endl;
    }
    cout<<"Size : "<<vec.size()<<endl;
    cout<<"Capacity : "<<vec.capacity()<<endl;
    vec.push_back(40);
    vec.push_back(50);
    cout<<"Size : "<<vec.size()<<endl;
    cout<<"Capacity : "<<vec.capacity()<<endl;
    // pop_back
    vec.pop_back();
    for(int val:vec){
        cout<<val<<endl;
    }
    cout<<"Size : "<<vec.size()<<endl;
    // front
    cout<<"Front : "<<vec.front()<<endl;
    // back
    cout<<"Back : "<<vec.back()<<endl;
    // at
    cout<<"value at 0th index : "<<vec.at(0)<<endl;
    cout<<"value at 1th index : "<<vec.at(1);
}

/*
Size : 0
10
20
30
Size : 3
Capacity : 4
Size : 5
Capacity : 8
10
20
30
40
Size : 4
Front : 10
Back : 40
value at 0th index : 10
value at 1th index : 20
*/