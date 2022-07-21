#include <iostream>
using namespace std;

int main()
{
    float length,breadth,area,perimeter;
    cout<<"\t\tThis is a Simple program to calculate the Area and Perimeter of rectangle";
    cout<<"\nPlease enter the length of rectangle = ";
    cin>>length;
    cout<<"\nPlease enter the breadth of rectangle = ";
    cin>>breadth;
    perimeter=(length+breadth)*2;
    cout<<"The perimeter of the given rectangle is "<<perimeter;
    area=length*breadth;
    cout<<"\nThe area of the given rectangle is "<<area;
    return 0;
}
