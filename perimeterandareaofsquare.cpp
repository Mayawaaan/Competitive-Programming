#include <iostream>
using namespace std;

int main()
{
    float side, area, perimeter;
    cout << "\t\tThis is a Simple program to calculate the Area and Perimeter of square";
    cout << "\nPlease enter the side of square = ";
    cin >> side;
    perimeter = 4*side;
    cout << "The perimeter of the given square is " << perimeter;
    area = side*side;
    cout << "\nThe area of the given square is " << area;
    return 0;
}
