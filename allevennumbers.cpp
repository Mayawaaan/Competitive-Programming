#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    cout<<"This is a simple program to print all even numbers from 1 to n "<<endl;
    int num;
    cout<<"Enter the number upto which you need numbers to be printed : ";
    cin>>num;
    cout<<"All even numbers upto "<<num<<" are"<<endl;
    for (int i = 1; i <=num; i++)
    {
       if(i%2==0){ 
           cout<<" "<<i;}
    }
    return 0;

    }