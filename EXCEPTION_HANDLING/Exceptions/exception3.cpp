#include<iostream>
using namespace std;
int main()
{
    try
    {
        // throw 1;
        // throw 1.1;
        throw 1.1f;
        // throw 'a';
        // throw "suraj";
    }
    catch(int e)
    {
        cout<<"int Type\n"<<e;
    }
    catch(double d)
    {
        cout<<"double Type\n"<<d;
    }
    catch(float f)
    {
        cout<<"float Type\n"<<f;
    }
    catch(char c)
    {
        cout<<"char Type\n"<<c;
    }
    catch(const char *s)
    {
        cout<<"string Type\n"<<s;
    }
    
}