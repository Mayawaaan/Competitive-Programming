#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    //Initializing array
    int arr[n];
    //Dynamic array input
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    // using pointer to point the address of array
    int* p = &arr[n]; 
    //Printing reverse array using pointer
    for (int i = n-1; i >= 0; i--)
    {
        *p = arr[i];
        cout<<*p<<" ";   
    }
    return 0;
}
