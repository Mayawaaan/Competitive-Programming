#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    cout<<"This is a simple program to make multiplication table of any number "<<endl;
    int num,n;
    cout<<"Please enter the value = ";
    cin>>num;
    for (int i = 1; i <= 10; i++)
    {
        n=num*i;
        cout<<num<<" x "<<i<<" = "<<n<<endl;
    }
    return 0;

    }