#include<iostream>
using namespace std;

namespace Bhopal{
    class Cybrom{
        public:
        void show()
        {
            cout<<"Welcome!!";
        }
    };
    namespace mp{
        int b = 2000;
        class student{
            public:
            void show()
            {
                cout<<"SURAJ";
            }
        };
    }
}

using namespace Bhopal;
int main()
{
    Bhopal::Cybrom obj;
    obj.show();
    cout<<endl;
    cout<<Bhopal::mp::b;
    cout<<endl;
    Bhopal::mp::student obj1;
    obj1.show();
}