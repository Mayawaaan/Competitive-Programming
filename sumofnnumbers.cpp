#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    cout<<"This is a Simple program to find the sum of 1 to n numbers"<<endl;
    int value,sum=0;
    cout<<"Enter the value upto which you have to find the sum : ";
    cin>>value;
    for (int i = 1; i<=value; ++i)
    {
        sum+=i;
    }
    cout<<"The Sum of first "<<value<<" numbers is "<<sum;
    return 0;
}
