#include<iostream>
using namespace std;

int main()
{
    int amount;

    int rs1, rs2000, rs5, rs10, rs20, rs50, rs100, rs500;

    cout<<"This is a simple Program to calculate the number of notes required"<<endl;
    rs1 = rs5 = rs10 = rs20 = rs50 = rs100 = rs500 = rs2000 = 0;

    cout << "\nEnter the amount :- ";
    cin >> amount;

    if(amount >= 2000)
    {
        rs2000 = amount/2000;
        amount -= rs2000 * 2000;
    }
    if(amount >= 500)
    {
        rs500 = amount/500;
        amount -= rs500 * 500;
    }
    if(amount >= 100)
    {
        rs100 = amount/100;
        amount -= rs100 * 100;
    }
    if(amount >= 50)
    {
        rs50 = amount/50;
        amount -= rs50 * 50;
    }
    if(amount >= 20)
    {
        rs20 = amount/20;
        amount -= rs20 * 20;
    }
    if(amount >= 10)
    {
        rs10 = amount/10;
        amount -= rs10 * 10;
    }
    if(amount >= 5)
    {
        rs5 = amount/5;
        amount -= rs5 * 5;
    }
    if(amount >= 1)
    {
        rs1 = amount;
    }

    cout << "\nTotal number of Notes" <<endl;
    cout << "RS 2000 = " << rs2000 <<endl;
    cout << "RS 500 = " << rs500 <<endl;
    cout << "RS 100 = " << rs100 <<endl;
    cout << "RS 50 = " << rs50 <<endl;
    cout << "RS 20 = " << rs20 <<endl;
    cout << "RS 10 = " << rs10 <<endl;
    cout << "RS 5 = " << rs5 <<endl;
    cout << "RS 1 = " << rs1 <<endl;

    return 0;

}