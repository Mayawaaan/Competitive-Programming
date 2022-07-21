#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int weight1,weight2,weight3;
    char person1[15],person2[15],person3[15];
    cout<<"This is a simple program to find the heaviest person"<<endl;
    cout<<"Enter the name of First person : ";
    cin>>person1;
    cout<<"Please enter the weight of "<<person1<<" ";
    cin>>weight1;
    cout<<"Enter the name of Second person : ";
    cin>>person2;
    cout<<"Please enter the weight of "<<person2<<" ";
    cin>>weight2;
    cout<<"Enter the name of Third person : ";
    cin>>person3;
    cout<<"Please enter the weight of "<<person3<<" ";
    cin>>weight3;
    if (weight1>weight2,weight1>weight3){
        cout<<person1<<" is the heaviest among other two";
    }
    else if(weight2>weight1,weight2>weight3){
        cout<<person2<<" is the heaviest among other two";
    }
    else{
        cout<<person3<<" is the heaviest among other two";
    }
    return 0;
}
