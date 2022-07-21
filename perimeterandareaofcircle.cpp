#include <iostream>
using namespace std;

int main()
{
    float radius,area,perimeter;
    cout<<"\t\tThis is a Simple program to calculate the Area and Perimeter of circle";
    cout<<"\nPlease enter the radius of circle = ";
    cin>>radius;
    perimeter=2*3.14*radius;
    cout<<"The perimeter of the given radius is "<<perimeter;
    area=3.14*radius*radius;
    cout<<"\nThe area of the given radius is "<<area;
    return 0;
}
