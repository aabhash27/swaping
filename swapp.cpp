#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the Numbers"<<endl;
    cout<<"a=";
    int a;
    cin>>a;
    cout<<"b=";
    int b;
    cin>>b;
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout<<"Swapped numbers are"<<endl<<"a="<<a<<endl<<"b="<<b;
}
