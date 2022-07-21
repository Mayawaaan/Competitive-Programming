#include <iostream>
using namespace std;
int main()
{
    int arr1[5]={1,3,4,2,6},arr2[5]={6,5,7,8,9},arr3[10],i,j,k;
    cout<<" Array 1 "<<endl;
    for ( i = 0; i < 5 ; i++)
    {
        cin>>arr1[i];
    }
    cout<<" Array 2 "<<endl;
    for (j = 0; j < 5; j++)
    {
        cin>>arr2[j];
    }
    for ( i = 0, k=0,j=5;k<10 ;i++,k++,j++)
    {
        while (k<5)
        {
            arr3[k]=arr1[i];
        }
        while (k>5)
        {
            arr3[k]=arr2[j];
        }
        
        
    }
    // for (j = 5,k=5;k < 10; j++)
    // {
    //     arr3[k]=arr2[j];
    // }
    
    for (k = 0; k < 10; k++)
    {
        cout<<arr3[k]<<"  ";
    }
    
        
}