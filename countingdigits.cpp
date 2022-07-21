#include <iostream>
using namespace std;
int main()
{   
    int value, digits;
    digits=0;
    cout<<"Enter the Value = ";
    cin>>value;
    for (int i=0; i<=10;i=i++){
        if (value==0){
            digits =digits=1;
            break;
        }
        else
        {
            digits=digits+1;
  value= value/10;
  if(value==0)
  break;
  }
    }
    cout<<"The No. of Digits in the given number are "<<digits;
}