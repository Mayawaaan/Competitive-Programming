#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int value;
    cout<<"This is a Simple Program to Guess the number is odd or even"<<endl;
    cout<<"Please enter your value = ";
    cin>>value;
    if (value%2==0)
    cout<<value<<" is a Even Number";
    else 
    cout<<value<<" is a Odd Number";
    return 0;
}