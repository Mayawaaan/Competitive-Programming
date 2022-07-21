#include <iostream>
using namespace std;
int main()
{
    int num1,num2,sum,remainder,multiplication,division,diffrence;
    cout<<"\t\t\t\b\bThis is a code showing simple operations";
    cout<<"\n\t\t-----------------------------------------------------";
    cout<<"\n\nEnter the First Number = ";
    cin>>num1;
    cout<<"Enter the Second Number = ";
    cin>>num2;
    sum=num1+num2;
    cout<<"\n"<<num1<<" + "<<num2<<" = "<<sum;
    diffrence=num1-num2;
    cout<<"\n"<<num1<<" - "<<num2<<" = "<<diffrence;
    multiplication=num1*num2;
    cout<<"\n"<<num1<<" x "<<num2<<" = "<<multiplication;
    division=num1/num2;
    cout<<"\n"<<num1<<" / "<<num2<<" = "<<division;
    remainder=num1%num2;
    cout<<"\n"<<num1<<" % "<<num2<<" = "<<remainder;
    return 0;
}
