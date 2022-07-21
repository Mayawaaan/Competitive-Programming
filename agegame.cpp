#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    cout<<"This is a simple program to find out the person is teen or not"<<endl;
    int age;
    cout<<"Enter your age : ";
    cin>>age;
    if (age<=5){
        cout<<"Your are Baby";
    }
    else if(age<=12){
        cout<<"You are Child";
    }
    else if(age<=19){
        cout<<"You are Teenager";
    }
    else if(age<=40){
        cout<<"Your are Adult";
    }
    else if(age<=60){
        cout<<"Your have a great life experience";
    }
    else{
        cout<<"You are Old";
    }
    return 0;
}
