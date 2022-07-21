#include<iostream>
using namespace std;
int main()
{
    int age1,age2,agediffrence;
    cout<<"This is a simple program to "<<endl;
    cout<<"Enter first age = ";
    cin>>age1;
    cout<<"Enter second age = ";
    cin>>age2;
    agediffrence=age1-age2;
    cout<<agediffrence<<"Years"<<endl;
    if(agediffrence==0){
        cout<<"Zero";
    }
    else if (agediffrence>0){
        cout<<"Positive";
    }
    else if (agediffrence<0){
        cout<<"Negative";
    }
    return 0;
}