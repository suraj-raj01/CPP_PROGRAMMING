/*
One Structure in Multiple Variables
You can use a comma (,) to use one structure in many variables:
*/

#include<iostream>
using namespace std;

struct cars{
    string model_no;
    string model_name;
    string name;
}car1,car2,car3;

int main()
{
    car1.model_no = "s11";
    car1.model_name = "scorpions";
    car1.name = "Mahindra";

    car2.model_no = "i10";
    car2.model_name = "Suzuki";
    car2.name = "Suzuki";

    car3.model_no = "s3";
    car3.model_name = "Eicher-330";
    car3.name = "Eicher";

    cout<<"car1 model_no : "<<car1.model_no<<endl;
    cout<<"car1 model_name : "<<car1.model_name<<endl;
    cout<<"car1 name : "<<car1.name<<endl;

    cout<<"---------------------------------"<<endl;

    cout<<"car2 model_no : "<<car2.model_no<<endl;
    cout<<"car2 model_name : "<<car2.model_name<<endl;
    cout<<"car2 name : "<<car2.name<<endl;

    cout<<"---------------------------------"<<endl;

    cout<<"car3 model_no : "<<car3.model_no<<endl;
    cout<<"car3 model_name : "<<car3.model_name<<endl;
    cout<<"car3 name : "<<car3.name<<endl;
}