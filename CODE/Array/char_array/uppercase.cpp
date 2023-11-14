#include<iostream>
#include<cstring>
using namespace std;

void uppercase(char arr[])
{
    int length = strlen(arr);

    for(int i=0;i<length;i++)
    {
        arr[i] = arr[i]-'a'+'A';
    }
}

int main()
{
    char arr[10];

    cin.getline(arr,10);

    cout<<"you entered -->"<<arr<<endl;

    uppercase(arr);

    cout<<"Your outpiut is :"<<arr<<endl;

    return 0;
}