#include<iostream>
using namespace std;

int main()
{
    char arr[100];

    cin.getline(arr,100);
    cout<<"value is -->"<<arr<<endl;

    for(int i=0;i<11;i++)
    {
        cout<<"index "<<i<<" : "<<"value "<<arr[i]<<endl;
    }
    return 0;
}