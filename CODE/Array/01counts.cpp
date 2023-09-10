#include<iostream>
using namespace std;

int main()
{
    int count0 = 0;
    int count1 = 0;

    int arr[7] = {0,0,1,1,0,1,0};

    for(int i=0;i<7;i++)
    {
        if(arr[i]==0)
        {
            count0++;
        }
        else{
            count1++;
        }
    }

    cout<<"count of 0 is ->"<<count0<<endl;
    cout<<"count of 1 is ->"<<count1<<endl;

    return 0;
}