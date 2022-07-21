#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    cout<<"This is simple program to find th sum of 1 to n even numbers"<<endl;
    int value,sum=0;
    cout<<"Enter the Number upto which you have to find the sum of even numbers : ";
    cin>>value;
    for (int i = 1; i <= value; ++i)
    {
        if(i%2==0){
        sum+=i;
        }
    }
    cout<<"The sum of even number upto "<<value<<" is : "<<sum;
    return 0;
}
