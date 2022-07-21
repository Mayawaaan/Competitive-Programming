#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    cout<<"This is a simple program to find out wether your birthyear is a leap year or not"<<endl;
    int birthyear;
    cout<<"Please enter your Birth year : ";
    cin>>birthyear;
    birthyear=birthyear%4;
    if(birthyear==0){
        cout<<"You were born in a Leap year";
    }
    else{
        cout<<"Your were born in a non-leap year";
    }

    return 0;
}
