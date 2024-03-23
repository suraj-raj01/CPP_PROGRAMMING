// default Parameter.

#include<iostream>
using namespace std;
void str(string country = "India")
{
    cout<<country<<endl;
}
int main()
{
    str("Austrilia");
    str();
    str("London");
    str("America");
    return 0;
}