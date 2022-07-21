#include<iostream>
#include<string>
using namespace std;

int main()
{
    int i,j;
    string name;
    cin>> name;
    for ( int i = 0; i<=4; i++)
    {
        if (name[0]>=97 && name[0]<=122)
        {
            name[0]=name[0]-32;
        }
        else if (name[i+1]>=97 && name[i+1]<=122)
        {
            name[i+1]=name[i+1];
        }
        else if (name[i+1]>=65 && name [i+1]<=90)
        {
            name[i+1]=name[i+1]+32;
        }
        
        
    }
    for (int i = 0 ; i < 4; i++)
    {
        cout<<name[i];
    }
    
    

}