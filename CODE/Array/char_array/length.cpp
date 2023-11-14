#include<iostream>
#include<cstring>
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

int main()
{
    char name[10];

    cin.getline(name,100);

    cout<<" The length of your name is --> "<<getlength(name)<<endl;
    cout<<" The length of your name is --> "<<strlen(name)<<endl;
    return 0;
}