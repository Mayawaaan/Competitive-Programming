#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    cout<<"This is simple game to find weather the person is teenager or not "<<endl;
    int age;
    cout<<"Enter your age : ";
    cin>>age;
    if(age<13) {
        cout<<"You are not a teenager";
    }
    else if(age==13){
        cout<<"You are steping into the teen age";
    }
    else if(age<=18){
        cout<<"Have nice teen age days";
    }
    else if (age==19){
        cout<<"You are at the end of teen age";
    }
    else{
        cout<<"You are not a teenager";
    }
    return 0;
}
