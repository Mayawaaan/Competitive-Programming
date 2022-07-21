#include <iostream>
using namespace std;
int min_num(int[]);
int min_num() 
{
    int arr[10];

    for (int i = 0; i < 10; i++)
    {
        cin>>arr[i];
    }
    int temp=arr[0];
    for (int i = 1; i < 10; i++)
    {
        if(temp>arr[i])
        {
            temp=arr[i];
        }
    }
    return temp;
}
int main()
{
    
    int answer;
    answer=min_num();
    cout<<answer;
    return 0;

}