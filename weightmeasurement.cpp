#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int weight1,weight2,weightdiffrence1,weightdiffrence2;
    char name1[10],name2[10];
    cout<<"This is simple program to tell who is more heavier"<<endl;
    cout<<"Please Enter the Your Name ";
    cin>>name1;
    cout<<"So Your name is "<<name1<<endl;
    cout<<"Please Enter the name from whom you want to compare ";
    cin>>name2;
    cout<<"So you want to compare your weight from "<<name2<<endl;
    cout<<"Enter the weight of "<<name1<<" in kg = ";
    cin>>weight1;
    cout<<"Enter the weight of "<<name2<<" in kg = ";
    cin>>weight2;
    if (weight1>weight2){
        weightdiffrence1=weight1-weight2;
     cout<<name1<<" is "<<weightdiffrence1<<" kg heavier than "<<name2<<endl;
    };
    if (weight1<weight2){
        weightdiffrence2=weight2-weight1;
     cout<<name2<<" is "<<weightdiffrence2<<" kg heavier than "<<name1<<endl;
    };
}
