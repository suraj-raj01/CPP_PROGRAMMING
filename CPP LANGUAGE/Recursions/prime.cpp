//WAP to check number is prime or not.

#include<iostream>
using namespace std;
void prime(int n){
  int count=1;
  int t = n;
  if(n%t==0)
  {
    count++;
  }
  t--;

  if(count==2)
  {
    cout<<"Prime";
  }
  else{
    cout<<"Not prime";
  }
}
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    prime(n);
}