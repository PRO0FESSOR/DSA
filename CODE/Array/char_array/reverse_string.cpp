#include<iostream>
using namespace std; 

int getlength(char name[])
{
    int length = 0;
    int i = 0;

    while(name[i] != '\0')
    {
        length++;
        i++;
    }

    return length;
}

void reverse ( char arr[])
{
    int i = 0;
    int n = getlength(arr);
    int j = n - 1;

    while(i<=j)
    {
        swap(arr[i],arr[j]);

        i++;
        j--;
    }
}

int main()
{
    char arr[10];

    cin.getline(arr,10);

    cout<<"you entered -->"<<arr<<endl;
    reverse(arr);
    cout<<"reverse of your string is --> "<<arr<<endl;
}