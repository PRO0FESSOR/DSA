#include<iostream>
#include<cstring>
using namespace std;

void replaceSpace(char arr[])
{
    int lenght = strlen(arr)-1;
    
    for(int i = 0;i<lenght;i++)
    {
        if(arr[i]==' ')
        {
            arr[i]='@';
        }
    }

}

int main()
{
    char arr[20];

    cin.getline(arr,20);

    cout<<"You entered -->"<<arr<<endl;

    replaceSpace(arr);

    cout<<"Now your output is : "<<arr<<endl;

    return 0;
}