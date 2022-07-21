#include<iostream>
using namespace std;
int greaterthan()
{
    int a[10],x,y;
    for (int i = 0; i < 10 ; i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the value of x = ";
    cin>>x;
    for (int i = 0; i < 10; i++)
    {
        if (a[i]>x)
        {
            y=y+1;
        }
        else
        {
            y=y;
        }
        
    }
    cout<<"Numbers Greater than x"<<endl;
    for (int i = 0; i < 10; i++)
    {
        if (a[i]>x)
        {
            cout<<a[i]<<"  ";
        }
        
    }
    cout<<endl;
    cout<<"Numbers Greater Than X = ";
    
    return y;     
}
int main()
{
    int ans;
    ans=greaterthan();
    cout<<ans;
}
