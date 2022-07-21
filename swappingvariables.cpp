#include<iostream>
using namespace std;
int main()
{
    int num1,num2,a,b,c;
    cout<<"\t\t\tThis is a simple program to swap two numbers";
    cout<<"\nPlease enter the First Number = ";
    cin>>num1;
    cout<<"Please enter the Second Number = ";
    cin>>num2;
    cout<<"Before Swapping"<<" A = "<<num1<<"\tB = "<<num2<<endl;
    a=num1;
    b=num2;
    c=a;
    a=b;
    b=c;
    cout<<"After Swapping"<<"  A = "<<a<<"\tB = "<<c<<endl;
    return 0;
}
