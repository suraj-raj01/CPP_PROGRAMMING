#include<iostream>
using namespace std;
int main(){
    int math,chem,phy;
    cout<<"Enter the math marks: ";
    cin>>math;
    cout<<"Enter the chemistery marks: ";
    cin>>chem;
    cout<<"Enter the physics marks: ";
    cin>>phy;
    int total = math+chem+phy;
    float perc = (math+chem+phy)/3;
    cout<<"Total Marks: "<<total;
    cout<<"\nPercentage: "<<perc<<"%\n";
    if(perc<35){
        cout<<"Fail";
    }
    else if(perc>35 && perc<49){
        cout<<"Third Division";
    }
    else if(perc>49 && perc<59){
        cout<<"Second Division";
    }
    else{
        cout<<"First Division";
    }
    return 0;
}