#include <iostream>
using namespace std;
int main()
{
    int kilometers,centimeters;
    cout<<"\t\t\tA simple Program to convert Kilometers to Centimeters";
    cout<<"\n\nEnter the value in Kilometers = ";
    cin>>kilometers;
    centimeters=kilometers*100000;
    cout<<"\n"<<"The Value of "<<kilometers<<" KM in centimeter is  "<<centimeters<<" CM";
    return 0;
}
