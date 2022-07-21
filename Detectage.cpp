#include <iostream>
using namespace std;
int detectAgeResult(int age);
int detectAgeResult()
{
    int age,value;
    cin>>age;
    if (age>101 || age<0)
    {
        value=-1;
    }
    else if (age<=5)
    {
        value=0;
    }
    else if (age<=12)
    {
        value=1;
    }
        
    else if (age<=19)
    {
        value=2;
    }
    
    else if (age<=50)
    {
        value=3;
    }
    
    else if (age<=60)
    {
        value=4;
    }
    
    else if (age<=101)
    {
        value=5;  
    }
 return value;
}
int main()
{
    int ageResult;
    ageResult=detectAgeResult();
    cout<<ageResult;
    return 0;
}
