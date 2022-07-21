#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    cout<<"This is a simple program to print all natural numbers from n to 1 "<<endl;
    int num;
    cout<<"Enter the number upto which you need numbers to be printed : ";
    cin>>num;
    cout<<"All natural numbers from 100 to "<<num<<" are"<<endl;
    for (int i = 100; num<=i; --i)
    {
        cout<<"  "<<i;
    }
    return 0;
}
