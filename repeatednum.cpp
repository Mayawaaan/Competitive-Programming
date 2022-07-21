#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int arr[10],i,j,k;
    for ( i = 0; i < 10; i++)
    {
        cin>>arr[i];
    }
    for ( i = 0; i < 10; i++)
    {
        for ( j = 0; j < 10; i++)
        {
            if (arr[i]==arr[j])
            {
                cout<<"  "<<arr[j];
            }
            
        }
        
    }
    
    
    return 0;
}
